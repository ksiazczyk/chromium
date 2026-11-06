// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mixin fixture for lit element bindings violations test
// summary: Provides MyTestMixin and its interface with a mixinString property for use in the lit element bindings violations ESLint test.
// ---

import type {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

type Constructor<T> = new (...args: any[]) => T;

export interface MyTestMixinInterface {
  mixinString: string;
}

export const MyTestMixin =
    <T extends Constructor<CrLitElement>>(superClass: T): T&
    Constructor<MyTestMixinInterface> => {
      class MyTestMixin extends superClass {
        static get properties() {
          return {
            mixinString: {type: String},
          };
        }

        mixinString: string = 'hello mixin';
      }

      return MyTestMixin;
    };
