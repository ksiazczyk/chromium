// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glanceables view ID enum
// summary: Defines the GlanceablesViewId enum of view IDs assigned to ChromeOS glanceables views so tests can query them.
// ---

#ifndef ASH_GLANCEABLES_COMMON_GLANCEABLES_VIEW_ID_H_
#define ASH_GLANCEABLES_COMMON_GLANCEABLES_VIEW_ID_H_

namespace ash {

// Known view ids assigned to glanceables views to query them in tests.
enum class GlanceablesViewId {
  kDefaultIdZero,

  // `GlanceablesListFooterView`.
  kListFooterTitleLabel,
  kListFooterSeeAllButton,

  // `GlanceablesProgressBarView`.
  kProgressBar,

  // `GlanceablesTimeManagementBubbleView`.
  kTimeManagementBubbleHeaderView,
  kTimeManagementBubbleHeaderIcon,
  kTimeManagementBubbleComboBox,
  kTimeManagementBubbleExpandButton,
  kTimeManagementBubbleListContainer,
  kTimeManagementBubbleListFooter,
  kTimeManagementErrorMessageToast,

  // `GlanceablesClassroomStudentView`.
  kClassroomBubbleEmptyListLabel,

  // `GlanceablesTasksView`.
  kTasksBubbleAddNewButton,

  // `GlanceablesClassroomItemView`.
  kClassroomItemIcon,
  kClassroomItemCourseWorkTitleLabel,
  kClassroomItemCourseTitleLabel,
  kClassroomItemDueDateLabel,
  kClassroomItemDueTimeLabel,

  // `GlanceablesTaskView`.
  kTaskItemTitleLabel,
  kTaskItemTitleTextField,
  kTaskItemDueLabel,
  kTaskItemEditInBrowserLabel,
  kOriginSurfaceTypeIcon,
  kAssignedTaskNotice,

  // `GlanceablesContentsScrollView`.
  kContentsScrollView,
};

}  // namespace ash

#endif  // ASH_GLANCEABLES_COMMON_GLANCEABLES_VIEW_ID_H_
