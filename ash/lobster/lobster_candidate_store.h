// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lobster candidate store class declaration
// summary: Declares the LobsterCandidateStore class, which caches LobsterImageCandidate objects in a map keyed by id.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/public/cpp/lobster/lobster_image_candidate.h
// ---

#ifndef ASH_LOBSTER_LOBSTER_CANDIDATE_STORE_H_
#define ASH_LOBSTER_LOBSTER_CANDIDATE_STORE_H_

#include <map>
#include <optional>

#include "ash/ash_export.h"
#include "ash/public/cpp/lobster/lobster_image_candidate.h"

namespace ash {

class ASH_EXPORT LobsterCandidateStore {
 public:
  LobsterCandidateStore();
  LobsterCandidateStore(const LobsterCandidateStore& other);

  ~LobsterCandidateStore();

  void Cache(const LobsterImageCandidate& candidate);

  std::optional<LobsterImageCandidate> FindCandidateById(uint32_t id);

 private:
  std::map<uint32_t, LobsterImageCandidate> cache_;
};

}  // namespace ash

#endif  // ASH_LOBSTER_LOBSTER_CANDIDATE_STORE_H_
