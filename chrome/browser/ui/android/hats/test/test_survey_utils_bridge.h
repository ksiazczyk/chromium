// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the HaTS test survey utils bridge
// summary: Declares the static TestSurveyUtilsBridge methods native tests use to control the Java survey test factory and query the last trigger ID.
// ---

#ifndef CHROME_BROWSER_UI_ANDROID_HATS_TEST_TEST_SURVEY_UTILS_BRIDGE_H_
#define CHROME_BROWSER_UI_ANDROID_HATS_TEST_TEST_SURVEY_UTILS_BRIDGE_H_

#include <string>

namespace hats {

class TestSurveyUtilsBridge {
 public:
  TestSurveyUtilsBridge(const TestSurveyUtilsBridge&) = delete;
  TestSurveyUtilsBridge& operator=(const TestSurveyUtilsBridge&) = delete;

  // Set up the Java testing environment using the test survey factory.
  static void SetUpJavaTestSurveyFactory();

  // Reset the survey factory after test case.
  static void ResetJavaTestSurveyFactory();

  // Get the last shown triggerId for the survey.
  static std::string GetLastShownSurveyTriggerId();

 private:
  TestSurveyUtilsBridge() = default;
  ~TestSurveyUtilsBridge() = default;
};

}  // namespace hats

#endif  // CHROME_BROWSER_UI_ANDROID_HATS_TEST_TEST_SURVEY_UTILS_BRIDGE_H_
