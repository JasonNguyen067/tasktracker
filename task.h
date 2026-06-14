#include <iostream>
#include <string>


struct Task {
    int id;
    std::string description;
    std::string status;
    std::string createdAt;
    std::string updatedAt;
};

Task createTask(std::string description);

void updateTask(Task& Task, std::string description);

std::string printTask(Task Task);

int idIncrementer(int id);
