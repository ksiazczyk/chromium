---
type: readme
title: ui/base/prediction overview
summary: Describes the general purpose input predictors in ui/base/prediction, points to scroll predictor usage, and explains how predictor metrics are logged.
---

#ui/base/prediction
This directory implements general purpose predictors.

Examples of usage in scrolling can be found at third_party/blink/renderer/
platform/widget/input/scroll_predictor.cc.

# PredictionMetricsHandler

Metrics from all predictors are logged by PredictorMetricsHandler.

This is an example of the points used by
PredictionMetricsHandler::ComputeFrameOverUnderPredictionMetric.

The analogous is valid for ComputeOverUnderPredictionMetric, using
`interpolated_` instead of `frame_interpolated_`

![ComputeOverUnderPredictionMetric Overview](/docs/ui/base/prediction/images/frame_prediction_score.png)
