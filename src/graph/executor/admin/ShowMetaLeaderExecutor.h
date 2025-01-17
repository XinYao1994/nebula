/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#pragma once

#include "graph/executor/Executor.h"

namespace nebula {
namespace graph {

class ShowMetaLeaderExecutor final : public Executor {
 public:
  ShowMetaLeaderExecutor(const PlanNode *node, QueryContext *qctx)
      : Executor("ShowMetaLeaderExecutor", node, qctx) {}

  folly::Future<Status> execute() override;
};

}  // namespace graph
}  // namespace nebula
