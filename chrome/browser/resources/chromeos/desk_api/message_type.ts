// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enums for Desk API requests, responses, and events
// summary: Defines enums for request types, response types, and desk event types used in the extension's messaging protocol.
// ---

/**
 * Enum of the Request type that will be sent to the extension.
 */
export enum RequestType {
  LAUNCH_DESK = 'LaunchDesk',
  REMOVE_DESK = 'RemoveDesk',
  SET_WINDOW_PROPERTIES = 'SetWindowProperties',
  GET_ACTIVE_DESK = 'GetActiveDesk',
  SWITCH_DESK = 'SwitchDesk',
  GET_DESK_BY_ID = 'GetDeskByID',
}

/**
 * Enum of the Response type that will be sent to the extension.
 */
export enum ResponseType {
  OPERATION_SUCCESS = 'OperationSuccess',
  OPERATION_FAILURE = 'OperationFailure',
}

/**
 * Enum of desk events type.
 */
export enum EventType {
  DESK_ADDED = 'DeskAdded',
  DESK_REMOVED = 'DeskRemoved',
  DESK_SWITCHED = 'DeskSwitched',
  DESK_UNDONE = 'DeskUndone',
}
