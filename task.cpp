#include <iostream>
#include "task.h"

int id = 1;

Task createTask(std::string description) {
    Task task;

    task.id = idIncrementor();
    task.description = description;
    
    return task;
}

Task updateTask(Task& Task, std::string description) {
    
}

std::string printTask(Task Task) {

}

int idIncrementor() {
   return id++;
}