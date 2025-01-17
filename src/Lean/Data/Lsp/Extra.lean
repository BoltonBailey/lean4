/-
Copyright (c) 2020 Marc Huisinga. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Marc Huisinga, Wojciech Nawrocki
-/
import Lean.Data.Json
import Lean.Data.JsonRpc
import Lean.Data.Lsp.Basic

/-! This file contains Lean-specific extensions to LSP. See the structures below for which
additional requests and notifications are supported. -/

namespace Lean.Lsp
open Json

/-- `textDocument/waitForDiagnostics` client->server request.

Yields a response when all the diagnostics for a version of the document greater or equal to the
specified one have been emitted. If the request specifies a version above the most recently
processed one, the server will delay the response until it does receive the specified version.
Exists for synchronization purposes, e.g. during testing or when external tools might want to use
our LSP server. -/
structure WaitForDiagnosticsParams where
  uri     : DocumentUri
  version : Nat
  deriving FromJson, ToJson

structure WaitForDiagnostics

instance : FromJson WaitForDiagnostics :=
  ⟨fun j => WaitForDiagnostics.mk⟩

instance : ToJson WaitForDiagnostics :=
  ⟨fun o => mkObj []⟩

structure LeanFileProgressProcessingInfo where
  range : Range
  deriving FromJson, ToJson

/-- `$/lean/fileProgress` client<-server notification.

Contains the ranges of the document that are currently being processed by the server. -/
structure LeanFileProgressParams where
  textDocument : VersionedTextDocumentIdentifier
  processing : Array LeanFileProgressProcessingInfo
  deriving FromJson, ToJson

/-- `$/lean/plainGoal` client->server request.

Returns the goal(s) at the specified position, pretty-printed as a string. -/
structure PlainGoalParams extends TextDocumentPositionParams
  deriving FromJson, ToJson

structure PlainGoal where
  rendered : String
  goals : Array String
  deriving FromJson, ToJson

/-- `$/lean/plainTermGoal` client->server request.

Returns the expected type at the specified position, pretty-printed as a string. -/
structure PlainTermGoalParams extends TextDocumentPositionParams
  deriving FromJson, ToJson

structure PlainTermGoal where
  goal : String
  range : Range
  deriving FromJson, ToJson

/-- An object which RPC clients can refer to without marshalling. -/
structure RpcRef where
  /- NOTE(WN): It is important for this to be a single-field structure
  in order to deserialize as an `Object` on the JS side. -/
  p : USize
  deriving BEq, Hashable, FromJson, ToJson

instance : ToString RpcRef where
  toString r := toString r.p

/-- `$/lean/rpc/connect` client->server notification.

A notification to connect to the RPC session at the given file's worker. Should be sent:
- exactly once whenever RPC is first needed (e.g. on client startup)
- if an `RpcNeedsReconnect` error is received in an RPC request -/
structure RpcConnectParams where
  uri : DocumentUri
  deriving FromJson, ToJson

/-- `$/lean/rpc/connected` client<-server notification.

Indicates that an RPC connection had been made. On receiving this, the client should discard any
references it may still be holding from previous RPC sessions. -/
structure RpcConnected where
  uri : DocumentUri
  sessionId : UInt64
  deriving FromJson, ToJson

/-- `$/lean/rpc/call` client->server request.

A request to execute a procedure bound for RPC. If an incorrect session ID is present, the server
errors with `RpcNeedsReconnect`.

Extending TDPP is weird. But in Lean, symbols exist in the context of a position within a source
file. So we need this to refer to code in the environment at that position. -/
structure RpcCallParams extends TextDocumentPositionParams where
  sessionId : UInt64
  /-- Procedure to invoke. Must be fully qualified. -/
  method : Name
  params : Json
  deriving FromJson, ToJson

/-- `$/lean/rpc/release` client->server notification.

A notification to release a remote reference. Should be sent by the client when it no longer needs
an `RpcRef` it has previously received from the server. Not doing so is safe but will leak memory. -/
structure RpcReleaseParams where
  uri : DocumentUri
  sessionId : UInt64
  ref : RpcRef
  deriving FromJson, ToJson

end Lean.Lsp
