// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google Calendar proxy singleton
// summary: Provides a singleton proxy wrapping the Google Calendar Mojo page handler for the New Tab Page calendar module.
// ---

import type {GoogleCalendarPageHandlerRemote} from '../../google_calendar.mojom-webui.js';
import {GoogleCalendarPageHandler} from '../../google_calendar.mojom-webui.js';

export interface GoogleCalendarProxy {
  handler: GoogleCalendarPageHandlerRemote;
}

export class GoogleCalendarProxyImpl implements GoogleCalendarProxy {
  handler: GoogleCalendarPageHandlerRemote;

  constructor(handler: GoogleCalendarPageHandlerRemote) {
    this.handler = handler;
  }

  static getInstance(): GoogleCalendarProxy {
    return instance ||
        (instance = new GoogleCalendarProxyImpl(
             GoogleCalendarPageHandler.getRemote()));
  }

  static setInstance(newInstance: GoogleCalendarProxy) {
    instance = newInstance;
  }
}

let instance: GoogleCalendarProxy|null = null;
