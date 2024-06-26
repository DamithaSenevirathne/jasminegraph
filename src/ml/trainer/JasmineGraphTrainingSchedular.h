/**
Copyright 2019 JasmineGraph Team
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

#include <stdio.h>
#include <stdlib.h>

#include <map>
#include <string>
#include <thread>
#include <vector>

#ifndef JASMINEGRAPH_JASMINEGRAPHTRAININGSCHEDULAR_H
#define JASMINEGRAPH_JASMINEGRAPHTRAININGSCHEDULAR_H

class JasmineGraphTrainingSchedular {
 public:
    static std::map<std::string, std::map<int, int>> schedulePartitionTraining(std::string graphID);
};

#endif  // JASMINEGRAPH_JASMINEGRAPHTRAININGSCHEDULAR_H
