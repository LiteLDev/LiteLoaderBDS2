// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BackgroundTaskQueueAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BackgroundTaskQueue {
#include "Extra/BackgroundTaskQueueAPI.hpp"

public:
    MCAPI BackgroundTaskQueue();
    MCAPI void flush();
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>, bool);
    MCAPI void resortPriorityQueue();
    MCAPI class std::shared_ptr<class BackgroundTaskBase> tryPop(int);
    MCAPI ~BackgroundTaskQueue();


private:
    MCAPI bool _fetchAllAvailableTasks();
};