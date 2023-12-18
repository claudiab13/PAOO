#pragma once

#include <vector>
#include <thread>
#include <mutex>
#include <semaphore>
#include <memory>
#include <iostream>

class WorkerManager {
public:
    WorkerManager();
    ~WorkerManager();

    void start();
    void joinAll();

private:
    std::vector<std::thread> workers;
    std::mutex mtx;
    std::shared_ptr<int> data;
    std::shared_ptr<int> semaphore;
};
