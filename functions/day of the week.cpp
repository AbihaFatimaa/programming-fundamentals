#include <iostream>
using namespace std;

string getDayOfWeek(int d, int m, int y) {
    // If month is Jan or Feb, adjust month and year
    if (m < 3) {
        m += 12;
        y -= 1;
    }

    int K = y % 100;     // Year of the century
    int J = y / 100;     // Zero-based century

    // Zeller’s Congruence formula
    int h = (d + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + 5 * J) % 7;

    // Map result to day names
    string days [] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return days[h];
}

int main() {
    int day, month, year;
    cout << "Enter day(1-31): ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    cout << "Day of the week: " << getDayOfWeek(day, month, year);
    return 0;
}
