/*
 *  Copyright (c) Facebook, Inc. and its affiliates.
 */

// This file was auto-generated using fuzz/converter.py from
// h265_pps_multilayer_extension_parser_unittest.cc.
// Do not edit directly.

#include "h265_pps_multilayer_extension_parser.h"
#include "h265_common.h"
#include "rtc_common.h"


// libfuzzer infra to test the fuzz target
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  {
  auto pps_multilayer_extension =
      h265nal::H265PpsMultilayerExtensionParser::ParsePpsMultilayerExtension(
          data, size);
  }
  return 0;
}
