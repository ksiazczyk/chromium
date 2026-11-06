// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake canvas context
// summary: Fake canvas rendering context that records clearRect and fillRect calls so tests can verify drawing operations.
// ---

export class FakeCanvasContext implements Partial<CanvasRenderingContext2D> {
  private clearRectCalls_: number[][] = [];
  private fillRectCalls_: number[][] = [];

  clearRect(x: number, y: number, width: number, height: number): void {
    this.clearRectCalls_.push([x, y, width, height]);
  }

  fillRect(x: number, y: number, width: number, height: number): void {
    this.fillRectCalls_.push([x, y, width, height]);
  }

  getClearRectCalls(): number[][] {
    return this.clearRectCalls_;
  }

  getFillRectCalls(): number[][] {
    return this.fillRectCalls_;
  }
}
