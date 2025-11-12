#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

const int WIDTH = 40;
const int HEIGHT = 15;

// Draw cake with slight shake
void drawCake(int shake) {
    string cakeFrames[3] = {
        "       ,,,,,       \n      |||||       \n     =======      \n    | HBD!  |     \n    |_______|     \n     |     |      \n     '-----'      \n",
        "       ,,,,,       \n      |||||       \n     =======      \n    | HBD!  |     \n    |_______|     \n      |   |       \n      '---'       \n",
        "       ,,,,,       \n      |||||       \n     =======      \n    | HBD!  |     \n    |_______|     \n     |   |        \n     '---'        \n"
    };
    cout << cakeFrames[shake % 3];
}

// Draw balloons at specific row
void drawBalloons(int step) {
    string shapes[] = {" () ", " {} ", " [] ", " ** "};
    for (int i = 0; i < step; i++) cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << shapes[rand() % 4] << "   ";
    }
    cout << endl;
}

// Draw random confetti
void drawConfetti() {
    char confettiChars[] = {'*', '+', '~', '@', '#', '%'};
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (rand() % 20 < 2) cout << confettiChars[rand() % 6];
            else cout << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    system("cls");

    cout << "********************" << endl;
    cout << "Happy Birthday " << name << "!" << endl;
    cout << "********************" << endl;
    Sleep(1000);

    int balloonStep = 0;
    int shake = 0;

    // Main animation loop
    for (int frame = 0; frame < 20; frame++) {
        system("cls");

        // Draw confetti
        drawConfetti();

        // Draw balloons
        drawBalloons(balloonStep);
        balloonStep = (balloonStep + 1) % 6; // rise effect

        // Draw cake
        drawCake(shake);
        shake++;

        Sleep(300);
    }

    cout << "\nWishing you joy, laughter, and lots of cake!" << endl;
    cout << "Have a fantastic day!" << endl;

    return 0;
}
