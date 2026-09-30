#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double temperature, result;

    cout << "\n";
    cout << "============================================\n";
    cout << "       TEMPERATURE CONVERTER - C++\n";
    cout << "============================================\n";

    cout << "\nChoose conversion:\n";
    cout << "1. Celsius -> Fahrenheit\n";
    cout << "2. Fahrenheit -> Celsius\n";
    cout << "3. Celsius -> Kelvin\n";
    cout << "4. Kelvin -> Celsius\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << fixed << setprecision(2);

    switch (choice) {

        case 1:
            result = (temperature * 9.0 / 5.0) + 32;

            cout << "\nResult: "
                 << temperature << " °C = "
                 << result << " °F\n";
            break;

        case 2:
            result = (temperature - 32) * 5.0 / 9.0;

            cout << "\nResult: "
                 << temperature << " °F = "
                 << result << " °C\n";
            break;

        case 3:
            result = temperature + 273.15;

            cout << "\nResult: "
                 << temperature << " °C = "
                 << result << " K\n";
            break;

        case 4:
            if (temperature < 0) {
                cout << "\nError: Kelvin cannot be negative.\n";
            } else {
                result = temperature - 273.15;

                cout << "\nResult: "
                     << temperature << " K = "
                     << result << " °C\n";
            }
            break;

        default:
            cout << "\nInvalid choice! Please run the program again.\n";
    }

    cout << "\n============================================\n";
    cout << "          Thank you for using it!\n";
    cout << "============================================\n";

    return 0;
}