// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Minimum definitions for chrome.notifications API */
// TODO(crbug.com/40179454): Auto-generate this file.

// ---docerion
// type: source
// title: TypeScript definitions for the chrome.notifications API
// summary: Declares minimal types and functions for the chrome.notifications API for creating and clearing notifications and handling button click events.
// ---

import {ChromeEvent} from './chrome_event.js';

declare global {
  export namespace chrome {
    export namespace notifications {
      export type TemplateType = 'basic'|'image'|'list'|'progress';

      export interface ButtonOptions {
        title: string;
        iconUrl?: string;
      }

      export interface ItemOptions {
        title: string;
        message: string;
      }

      export interface NotificationOptions {
        contextMessage?: string;
        priority?: number;
        eventTime?: number;
        buttons?: ButtonOptions[];
        items?: ItemOptions[];
        progress?: number;
        isClickable?: boolean;
        appIconMaskUrl?: string;
        imageUrl?: string;
        requireInteraction?: boolean;
        silent?: boolean;
      }

      export interface NotificationButtonClickedEvent
        extends ChromeEvent<(
          notificationId: string,
          buttonIndex: number) => void> { }

      export const onButtonClicked: NotificationButtonClickedEvent;
      export function create(
          notificationId: string,
          options: NotificationOptions,
          callback?: (notificationId: string) => void,
          ): void;
      export function create(
          options: NotificationOptions,
          callback?: (notificationId: string) => void): void;
      export function clear(
        notificationId: string,
        callback?: (wasCleared: boolean) => void): void;
    }
  }
}
