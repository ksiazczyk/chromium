// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Table of relevant information about how to decode the ModR/M byte.
// Based on information in the IA-32 Intel Architecture
// Software Developer's Manual Volume 2: Instruction Set Reference.

// ---docerion
// type: source
// title: IA-32 ModR/M byte decoding tables for the mini disassembler
// summary: Defines ModrmEntry lookup tables that let the sidestep mini disassembler decode IA-16 and IA-32 ModR/M bytes, based on the Intel architecture manual.
// ---

#include "sidestep/mini_disassembler.h"
#include "sidestep/mini_disassembler_types.h"

namespace sidestep {

const ModrmEntry MiniDisassembler::s_ia16_modrm_map_[] = {
// mod == 00
  /* r/m == 000 */ { false, false, OS_ZERO },
  /* r/m == 001 */ { false, false, OS_ZERO },
  /* r/m == 010 */ { false, false, OS_ZERO },
  /* r/m == 011 */ { false, false, OS_ZERO },
  /* r/m == 100 */ { false, false, OS_ZERO },
  /* r/m == 101 */ { false, false, OS_ZERO },
  /* r/m == 110 */ { true, false, OS_WORD },
  /* r/m == 111 */ { false, false, OS_ZERO },
// mod == 01
  /* r/m == 000 */ { true, false, OS_BYTE },
  /* r/m == 001 */ { true, false, OS_BYTE },
  /* r/m == 010 */ { true, false, OS_BYTE },
  /* r/m == 011 */ { true, false, OS_BYTE },
  /* r/m == 100 */ { true, false, OS_BYTE },
  /* r/m == 101 */ { true, false, OS_BYTE },
  /* r/m == 110 */ { true, false, OS_BYTE },
  /* r/m == 111 */ { true, false, OS_BYTE },
// mod == 10
  /* r/m == 000 */ { true, false, OS_WORD },
  /* r/m == 001 */ { true, false, OS_WORD },
  /* r/m == 010 */ { true, false, OS_WORD },
  /* r/m == 011 */ { true, false, OS_WORD },
  /* r/m == 100 */ { true, false, OS_WORD },
  /* r/m == 101 */ { true, false, OS_WORD },
  /* r/m == 110 */ { true, false, OS_WORD },
  /* r/m == 111 */ { true, false, OS_WORD },
// mod == 11
  /* r/m == 000 */ { false, false, OS_ZERO },
  /* r/m == 001 */ { false, false, OS_ZERO },
  /* r/m == 010 */ { false, false, OS_ZERO },
  /* r/m == 011 */ { false, false, OS_ZERO },
  /* r/m == 100 */ { false, false, OS_ZERO },
  /* r/m == 101 */ { false, false, OS_ZERO },
  /* r/m == 110 */ { false, false, OS_ZERO },
  /* r/m == 111 */ { false, false, OS_ZERO }
};

const ModrmEntry MiniDisassembler::s_ia32_modrm_map_[] = {
// mod == 00
  /* r/m == 000 */ { false, false, OS_ZERO },
  /* r/m == 001 */ { false, false, OS_ZERO },
  /* r/m == 010 */ { false, false, OS_ZERO },
  /* r/m == 011 */ { false, false, OS_ZERO },
  /* r/m == 100 */ { false, true, OS_ZERO },
  /* r/m == 101 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 110 */ { false, false, OS_ZERO },
  /* r/m == 111 */ { false, false, OS_ZERO },
// mod == 01
  /* r/m == 000 */ { true, false, OS_BYTE },
  /* r/m == 001 */ { true, false, OS_BYTE },
  /* r/m == 010 */ { true, false, OS_BYTE },
  /* r/m == 011 */ { true, false, OS_BYTE },
  /* r/m == 100 */ { true, true, OS_BYTE },
  /* r/m == 101 */ { true, false, OS_BYTE },
  /* r/m == 110 */ { true, false, OS_BYTE },
  /* r/m == 111 */ { true, false, OS_BYTE },
// mod == 10
  /* r/m == 000 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 001 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 010 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 011 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 100 */ { true, true, OS_DOUBLE_WORD },
  /* r/m == 101 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 110 */ { true, false, OS_DOUBLE_WORD },
  /* r/m == 111 */ { true, false, OS_DOUBLE_WORD },
// mod == 11
  /* r/m == 000 */ { false, false, OS_ZERO },
  /* r/m == 001 */ { false, false, OS_ZERO },
  /* r/m == 010 */ { false, false, OS_ZERO },
  /* r/m == 011 */ { false, false, OS_ZERO },
  /* r/m == 100 */ { false, false, OS_ZERO },
  /* r/m == 101 */ { false, false, OS_ZERO },
  /* r/m == 110 */ { false, false, OS_ZERO },
  /* r/m == 111 */ { false, false, OS_ZERO },
};

};  // namespace sidestep
