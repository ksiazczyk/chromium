-- Copyright 2023 The Chromium Authors
-- Use of this source code is governed by a BSD-style license that can be
-- found in the LICENSE file.

-- ---docerion
-- type: source
-- title: Chrome device hardware class function
-- summary: Defines the chrome_hardware_class function that returns the device hardware class, used for brand and model, from trace metadata.
-- ---

-- Returns hardware class of the device, often use to find device brand
-- and model.
CREATE PERFETTO FUNCTION chrome_hardware_class()
-- Hardware class name.
RETURNS STRING AS
SELECT
  str_value
FROM metadata
WHERE
  name = "cr-hardware-class";
