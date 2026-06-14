#include <iostream>
#include <stdexcept>
#include <fstream>
#include <string>

bool writeToFile(const std::string& filename) {
    std::ofstream outFile(filename);

    if (!outFile.is_open()) {
        std::cerr << "file is not open" << std::endl;
        return false;
    } else {
        std::cout << "file is open" << std::endl;
    }

    outFile << "I'm writing to you" << std::endl;

    outFile.close();
    std::ifstream inFile("tasks.json");

    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    
    inFile.close();

}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        throw std::runtime_error("must have atleast two args");
    }

    std::cout << "Received " << argc << " arguments:\n";

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "] " << argv[i] << std::endl;
    }

    std::string command = argv[1];
    std::string identifer = argv[2];

    if (command == "add") {
        std::cout << "add command recognized" << std::endl;
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

    
    writeToFile("tasks.json");
}
