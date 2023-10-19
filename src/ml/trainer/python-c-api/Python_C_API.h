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
#ifndef JASMINEGRAPH_PYTHON_C_API_H
#define JASMINEGRAPH_PYTHON_C_API_H

#include <string>

class Python_C_API {
 public:
    static void train(int argc, char *argv[]);
    static int predict(int argc, char *argv[]);
};

#endif  // JASMINEGRAPH_PYTHON_C_API_H
