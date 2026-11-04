// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shared utilities for organizer panel tab delegates
// summary: Provides shared helpers for the tab delegates, including hostname extraction, descending time comparison, tab count text, token formatting, and split view icons.
// ---

import {loadTimeData} from '//resources/js/load_time_data.js';
import type {Token} from '//resources/mojo/mojo/public/mojom/base/token.mojom-webui.js';

import type {OrganizerListSectionItemIcon} from '../organizer_list_section_item.js';
import {SplitTabLayout} from '../tab_search.mojom-webui.js';

export function tokenToString(token: Token): string {
  return `${token.high.toString()}#${token.low.toString()}`;
}

export function getHostnameOrUrl(url: string): string {
  try {
    return new URL(url).hostname || url;
  } catch {
    return url;
  }
}

export function compareTimeDescending(
    timeA: {internalValue: bigint}|null|undefined,
    timeB: {internalValue: bigint}|null|undefined): number {
  const valA = timeA?.internalValue ?? 0n;
  const valB = timeB?.internalValue ?? 0n;
  return valB > valA ? 1 : (valB < valA ? -1 : 0);
}

export function getTabCountText(tabCount: number): string {
  return loadTimeData.getStringF(
      tabCount === 1 ? 'oneTab' : 'tabCount', tabCount);
}

export function getSplitViewPrefixIcon(
    urls: [string, string],
    layout: SplitTabLayout|null): OrganizerListSectionItemIcon {
  return {
    stackedFavicons: {
      urls,
      stackVertically: layout === SplitTabLayout.kStacked,
    },
  };
}
