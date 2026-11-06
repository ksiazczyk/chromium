# Copyright 2016 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Loading Cluster Telemetry benchmark
# summary: Defines the loading.cluster_telemetry benchmark that runs the shared loading base benchmark over Cluster Telemetry page sets.
# ---

from contrib.cluster_telemetry import loading_base_ct


class LoadingClusterTelemetry(loading_base_ct._LoadingBaseClusterTelemetry):
  @classmethod
  def Name(cls):
    return 'loading.cluster_telemetry'
