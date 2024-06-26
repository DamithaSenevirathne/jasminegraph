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

#ifndef JASMINEGRAPH_CORECONSTANTS_H
#define JASMINEGRAPH_CORECONSTANTS_H

#include <map>
#include <queue>

#include "domain/JobRequest.h"
#include "domain/JobResponse.h"

extern std::priority_queue<JobRequest> jobQueue;
extern std::vector<JobResponse> responseVector;
extern std::map<std::string, JobResponse> responseMap;

class CoreConstants {};

#endif  // JASMINEGRAPH_CORECONSTANTS_H
