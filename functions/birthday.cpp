#include <iostream>
#include <thread> // For std::this_thread::sleep_for
#include <chrono> // For std::chrono::milliseconds

void clearScreen() {
    // Platform-dependent clear screen command
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    std::string message = "Happy Birthday!";
    std::string wishes = "Wishing you a wonderful day!";

    for (int i = 0; i < 5; ++i) {
        clearScreen();
        // Simple animation: shifting message
        for (int j = 0; j < i; ++j) {
            std::cout << " ";
        }
        std::cout << message << std::endl;
        std::cout << wishes << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Pause for 500ms
    }

    clearScreen();
    std::cout << "HAPPY BIRTHDAY!" << std::endl;
    std::cout << "May all your wishes come true!" << std::endl;

    return 0;
}