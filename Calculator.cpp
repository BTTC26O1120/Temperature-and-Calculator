#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    char again;

    cout << "\n";
    cout << "============================================\n";
    cout << "             SMART CALCULATOR\n";
    cout << "============================================\n";

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        bool valid = true;

        switch (operation) {

            case '+':
                result = num1 + num2;
                break;

            case '-':
                result = num1 - num2;
                break;

            case '*':
                result = num1 * num2;
                break;

            case '/':
                if (num2 == 0) {
                    cout << "\nError: Cannot divide by zero!\n";
                    valid = false;
                } else {
                    result = num1 / num2;
                }
                break;

            default:
                cout << "\nInvalid operator!\n";
                valid = false;
        }

        if (valid) {
            cout << fixed << setprecision(2);

            cout << "\n--------------------------------------------\n";
            cout << "Result: "
                 << num1 << " "
                 << operation << " "
                 << num2 << " = "
                 << result << endl;
            cout << "--------------------------------------------\n";
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n============================================\n";
    cout << "       Thank you for using Calculator!\n";
    cout << "============================================\n";

    return 0;
}
