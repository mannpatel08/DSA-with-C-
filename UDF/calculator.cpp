#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulusOp(int a, int b);

int main() {
    int choice;
    int num1, num2;

    while (true) {
        cout << "\n=== Arithmetic Operations Menu ===" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "0. Quit" << endl;
        cout << "Enter your choice (1-5 or 0 to quit): ";
        cin >> choice;

        

        cout << "Enter num 1 : ";
        cin >> num1;

        cout<<"Enter num 2 :";
        cin>>num2;

        switch (choice) {
            case 1:
                cout << "Result = " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result = " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result = " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 == 0)
                    cout << "Error: Division by zero is not allowed." << endl;
                else
                    cout << "Result = " << divide(num1, num2) << endl;
                break;
            case 5:
                if (num2 == 0)
                    cout << "Error: Modulus by zero is not allowed." << endl;
                else
                    cout << "Result = " << modulusOp(num1, num2) << endl;
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return static_cast<float>(a) / b;
}

int modulusOp(int a, int b) {
    return a % b;
}
