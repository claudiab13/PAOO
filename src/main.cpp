#include <iostream>
#include <thread>
#include <mutex>
#include <semaphore>
#include <memory>

#include "lib/Worker.hpp"
#include "lib/WorkerManager.hpp"

int main() {
    
    std::mutex mtx;
    std::shared_ptr<int> data = std::make_shared<int>(13);
    std::shared_ptr<int> semaphore = std::make_shared<int>(0);

    Worker worker1(1, mtx, data, semaphore);

    worker1.operator()();

    std::cout << *data << std::endl;
/*

    WorkerManager manager;
    manager.start();

    // Așteaptă ca toate firele de execuție să se încheie
    manager.joinAll();*/
    std::cout << std::endl;
    return 0;
}
