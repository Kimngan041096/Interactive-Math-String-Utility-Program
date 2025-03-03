#include <iostream>
using namespace std;

void factorialCalculator() {
    int n, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
}

void numberPyramid() {
    int rows;
    cout << "Enter number of rows for the pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void sumOfEvenOdd() {
    int choice, sum = 0, upperLimit;
    do {
        cout << "Choose sum of:\n1. Even numbers\n2. Odd numbers\nEnter your choice (1 or 2): ";
        cin >> choice;
        if (choice != 1 && choice != 2) {
            cout << "Invalid choice. Please choose 1 or 2." << endl;
        }
    } while (choice != 1 && choice != 2);
    
    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    if (choice == 1) {
        for (int i = 2; i <= upperLimit; i += 2) {
            sum += i;
        }
        cout << "Sum of even numbers up to " << upperLimit << ": " << sum << endl;
    } else {
        for (int i = 1; i <= upperLimit; i += 2) {
            sum += i;
        }
        cout << "Sum of odd numbers up to " << upperLimit << ": " << sum << endl;
    }
}

void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();
    int i = length - 1;
    cout << "Reversed string: ";
    while (i >= 0) {
        cout << str[i];
        i--;
    }
    cout << endl;
}

void exitProgram() {
    cout << "Goodbye! Thank you for using the program." << endl;
}

int main() {
    int choice;

    do {
        cout << "========= Interactive Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumOfEvenOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                exitProgram();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
