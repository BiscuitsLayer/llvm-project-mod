//===-- MySimulatorAttributes.cpp - MySimulator Attributes ----------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/MySimulatorAttributes.h"

using namespace llvm;
using namespace llvm::MySimulatorAttrs;

static constexpr TagNameItem tagData[] = {
    {STACK_ALIGN, "Tag_stack_align"},
    {ARCH, "Tag_arch"},
    {UNALIGNED_ACCESS, "Tag_unaligned_access"},
    {PRIV_SPEC, "Tag_priv_spec"},
    {PRIV_SPEC_MINOR, "Tag_priv_spec_minor"},
    {PRIV_SPEC_REVISION, "Tag_priv_spec_revision"},
};

constexpr TagNameMap MySimulatorAttributeTags{tagData};
const TagNameMap &llvm::MySimulatorAttrs::getMySimulatorAttributeTags() {
  return MySimulatorAttributeTags;
}
