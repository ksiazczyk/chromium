// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskServiceFactory class declaration
// summary: Declares the singleton ProfileKeyedServiceFactory that manages TaskService instances per Profile for the record_replay feature.
// ---

#ifndef CHROME_BROWSER_RECORD_REPLAY_TASK_SERVICE_FACTORY_H_
#define CHROME_BROWSER_RECORD_REPLAY_TASK_SERVICE_FACTORY_H_

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;

namespace record_replay {

class TaskService;

// Singleton factory to manage `TaskService` instances per `Profile`.
class TaskServiceFactory : public ProfileKeyedServiceFactory {
 public:
  static TaskService* GetForProfile(Profile* profile);
  static TaskServiceFactory* GetInstance();

  TaskServiceFactory(const TaskServiceFactory&) = delete;
  TaskServiceFactory& operator=(const TaskServiceFactory&) = delete;

  // BrowserContextKeyedServiceFactory:
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;

 private:
  friend base::NoDestructor<TaskServiceFactory>;

  TaskServiceFactory();
  ~TaskServiceFactory() override;
};

}  // namespace record_replay

#endif  // CHROME_BROWSER_RECORD_REPLAY_TASK_SERVICE_FACTORY_H_
