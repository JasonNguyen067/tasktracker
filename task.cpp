#include <iostream>
#include "task.h"

int id = 1;

int idIncrementor() {
   return id++;
}

Task createTask(std::string description) {
    Task newTask;

    newTask.id = idIncrementor();
    newTask.description = description;
    newTask.status = "todo";
    newTask.createdAt = "now";
    newTask.updatedAt = "now";
    
    return newTask;
}

void updateTask(Task& currentTask, std::string description) {
    currentTask.description = description;
}

void printTask(Task& currentTask) {
    std::cout << currentTask.id << std::endl;
    std::cout << currentTask.description << std::endl;
    std::cout << currentTask.status << std::endl;
    std::cout << currentTask.createdAt << std::endl;
    std::cout << currentTask.updatedAt << std::endl;
}
