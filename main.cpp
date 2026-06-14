#include <iostream>
#include <stdexcept>
#include <fstream>
#include <string>
#include "task.h"

bool taskToJson(const Task& param) {
    std::ofstream outFile("tasks.json");

    if (!outFile.is_open()) {
        std::cerr << "Could not create the file" << std::endl;
        return false;
    }

    int firstLine = param.id;
    std::string secondLine = param.description;
    std::string thirdLine = param.status;
    std::string fourthLine = param.createdAt;
    std::string fifthLine = param.updatedAt;
    std::string tab = "    ";

    outFile << "{" << std::endl;
    outFile << tab << "\"id\": " << firstLine << "," << std::endl;
    outFile << tab << "\"description\": " << "\"" << secondLine << "\"" << "," << std::endl;
    outFile << tab << "\"status\": " << "\"" << thirdLine << "\"" << "," << std::endl;
    outFile << tab << "\"createdAt\": " << "\"" << fourthLine << "\"" << "," << std::endl;
    outFile << tab << "\"updatedAt\": " << "\"" << fifthLine << "\"" <<std::endl;
    outFile << "}" << std::endl;

    return true;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        throw std::runtime_error("Must have atleast 3 args");
    }

    std::cout << "Received " << argc << " arguments:\n";

    std::string command = argv[1];
    std::string task = argv[2];

    if (command == "add") {
        Task newFile = createTask(task);
        taskToJson(newFile);
        std::cout << "Task added successfully (ID: " << newFile.id << ")" << std::endl;

    } else if (command == "list") {


        std::cout << "list command recognized" << std::endl;


    } else if (command == "update") {


        std::cout << "update command recognized" << std::endl;


    } else if (command == "delete") {


        std::cout << "delete command recognized" << std::endl;


    } else if (command == "mark-done") {


        std::cout << "mark-done commmand recognized" << std::endl;


    } else if (command == "mark-in-progress") {


        std::cout << "mark-in-progress command recognized" << std::endl;


    }
}
