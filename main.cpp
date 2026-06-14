#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        throw std::runtime_error("must have atleast two args");
    }
    std::cout << "Received " << argc << " arguments:\n";

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "] " << argv[i] << std::endl;
    }

    std::string command = argv[1];

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


}
