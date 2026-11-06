// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: chrome.slimWebViewPrivate API type definitions
// summary: Declares TypeScript types for the chrome.slimWebViewPrivate API used by SlimWebviewElement bindings to manage guest views and containers.
// ---

// This namespace is populated by bindings in
// components/guest_view/renderer/slim_web_view/slim_web_view_bindings.cc
// and is used to implement SlimWebviewElement.
declare namespace chrome {
  export namespace slimWebViewPrivate {
    export function allowGuestViewElementDefinition(callback: () => void): void;
    export function getNextId(): number;
    export function registerView(viewInstanceId: number, view: object): void;
    export function getViewFromId(instanceId: number): object|null;
    export function attachIframeGuest(
        containerId: number, guestInstanceId: number, params: object,
        contentWindow: WindowProxy, callback: () => void): void;
    export function destroyContainer(containerId: number): void;
  }
}
