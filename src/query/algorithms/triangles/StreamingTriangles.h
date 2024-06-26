/**
Copyright 2018 JasmineGraph Team
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

#ifndef JASMINEGRAPH_STRAMINGTRIANGLES_H
#define JASMINEGRAPH_STRAMINGTRIANGLES_H

#include <algorithm>
#include <chrono>
#include <map>
#include <set>
#include <string>
#include <thread>
#include "Triangles.h"

#include "../../../util/Conts.h"
#include "../../../localstore/incremental/JasmineGraphIncrementalLocalStore.h"
#include "../../../nativestore/RelationBlock.h"

// Helper structure to hold the result
struct NativeStoreTriangleResult {
    long localRelationCount;
    long centralRelationCount;
    long result;
};

class StreamingTriangles {
 public:
    static TriangleResult countTriangles(NodeManager* nodeManager, bool returnTriangles);

    static NativeStoreTriangleResult countLocalStreamingTriangles(
            JasmineGraphIncrementalLocalStore *incrementalLocalStoreInstance);

    static std::string countCentralStoreStreamingTriangles(std::string graphId,
            std::vector<std::string> partitionIdList);

    static NativeStoreTriangleResult countDynamicLocalTriangles(
            JasmineGraphIncrementalLocalStore *incrementalLocalStoreInstance,
    long old_local_relation_count, long old_central_relation_count);

    static string countDynamicCentralTriangles(string graphId, std::vector<std::string> partitionIdList,
                                        std::vector<std::string> oldCentralRelationCount);

    static std::vector<std::pair<long, long>> getEdges(unsigned int graphID, unsigned int partitionID,
                                                       long previousCentralRelationCount);

    static map<long, unordered_set<long>> getCentralAdjacencyList(unsigned int graphID, unsigned int partitionID);
};

#endif  // JASMINEGRAPH_STRAMINGTRIANGLES_H
