//
// Copyright (C) 2014 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef UPDATE_ENGINE_PAYLOAD_CONSTANTS_H_
#define UPDATE_ENGINE_PAYLOAD_CONSTANTS_H_

#include <stdint.h>

#include <limits>

namespace chromeos_update_engine {

// The kernel and rootfs partition names used by the BootControlInterface when
// handling update payloads with a major version 1. The names of the updated
// partitions are include in the payload itself for major version 2.
extern const char kLegacyPartitionNameKernel[];
extern const char kLegacyPartitionNameRoot[];

extern const char kBspatchPath[];
extern const char kDeltaMagic[];

// A block number denoting a hole on a sparse file. Used on Extents to refer to
// section of blocks not present on disk on a sparse file.
const uint64_t kSparseHole = std::numeric_limits<uint64_t>::max();

}  // namespace chromeos_update_engine

#endif  // UPDATE_ENGINE_PAYLOAD_CONSTANTS_H_
