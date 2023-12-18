#include "WorkerManager.hpp"
#include "Worker.hpp"

WorkerManager::WorkerManager() : data(std::make_shared<int>(0)), semaphore(std::make_shared<int>(0)) {}

WorkerManager::~WorkerManager() {
}

void WorkerManager::start() {
    const int numWorkers = 5;

    for (int i = 0; i < numWorkers; ++i) {
        workers.emplace_back(Worker(i, mtx, data, semaphore));

    }

    for (auto& worker : workers) {
        worker.detach(); // Fir independent de execuție
    }
}

void WorkerManager::joinAll() {
    for (auto& worker : workers) {
        if (worker.joinable()) {
            worker.join();
        }
    }
}
