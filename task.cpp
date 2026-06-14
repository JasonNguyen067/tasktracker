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
    
    return newTask;
}

void updateTask(Task& currentTask, std::string description) {
    currentTask.description = description;
}

void printTask(Task& currentTask) {
    std::cout << currentTask.description << std::endl;
}
