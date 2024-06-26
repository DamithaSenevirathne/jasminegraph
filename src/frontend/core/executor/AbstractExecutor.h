/**
Copyright 2021 JasmineGraph Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 */

#ifndef JASMINEGRAPH_ABSTRACTEXECUTOR_H
#define JASMINEGRAPH_ABSTRACTEXECUTOR_H

#include <pthread.h>

#include <chrono>
#include <future>
#include <thread>

#include "../../../util/Utils.h"
#include "../../../util/logger/Logger.h"
#include "../domain/JobRequest.h"
#include "../domain/JobResponse.h"

using namespace std;

class AbstractExecutor {
 public:
    AbstractExecutor();
    AbstractExecutor(JobRequest jobRequest);
    static std::vector<std::vector<string>> getCombinations(std::vector<string> inputVector);
    virtual void execute() = 0;
    static int collectPerformaceData(PerformanceSQLiteDBInterface *perDB, std::string graphId,
                                                std::string command, std::string category, int partitionCount,
                                                std::string masterIP, bool autoCalibrate);
    JobRequest request;
};

#endif  // JASMINEGRAPH_ABSTRACTEXECUTOR_H
