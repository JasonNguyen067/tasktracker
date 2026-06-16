#include <iostream>
#include "task.h"
#include <fstream>
#include <vector>

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

Task jsonToTask() {
    std::ifstream extraction("tasks.json");
    std::vector<Task> tasks;
    Task currentTask;
    int fieldIndex = 0;
    std::string line;
    std::string dummy;

    while (std::getline(extraction, line)) {
        if (line == "[" || line == "]") {
            std::getline(extraction, dummy);
        } else if (line == "{") {
            fieldIndex = 0;
        } else if (line == "}" || line == "},") {
            continue;
        } else {
            while (std::getline(extraction, line)) {
               if (line == "}" || line == "},") {
                continue;
               }
               
            }
        }

    }
}