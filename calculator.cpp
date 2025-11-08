#include <iostream>
#include <limits>
#include <cmath>
#include <string>

using namespace std;

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double num);
double modulus(int a, int b);
bool getValidInput(double &num);
bool getValidIntInput(int &num);
void clearInputBuffer();

int main() {
    int choice;
    double num1, num2, result;
    bool continueCalculation = true;
    
    cout << "========================================" << endl;
    cout << "    Welcome to C++ Calculator" << endl;
    cout << "========================================" << endl << endl;
    
    while (continueCalculation) {
        displayMenu();
        
        cout << "Enter your choice (1-8): ";
        
        if (!(cin >> choice)) {
            clearInputBuffer();
            cout << "\nError: Invalid input! Please enter a number between 1-8.\n" << endl;
            continue;
        }
        
        cout << endl;
        
        switch (choice) {
            case 1: // Addition
                cout << "Enter first number: ";
                if (!getValidInput(num1)) continue;
                
                cout << "Enter second number: ";
                if (!getValidInput(num2)) continue;
                
                result = add(num1, num2);
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case 2: // Subtraction
                cout << "Enter first number: ";
                if (!getValidInput(num1)) continue;
                
                cout << "Enter second number: ";
                if (!getValidInput(num2)) continue;
                
                result = subtract(num1, num2);
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case 3: // Multiplication
                cout << "Enter first number: ";
                if (!getValidInput(num1)) continue;
                
                cout << "Enter second number: ";
                if (!getValidInput(num2)) continue;
                
                result = multiply(num1, num2);
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case 4: // Division
                cout << "Enter dividend (first number): ";
                if (!getValidInput(num1)) continue;
                
                cout << "Enter divisor (second number): ";
                if (!getValidInput(num2)) continue;
                
                if (num2 == 0) {
                    cout << "\nError: Division by zero is not allowed!" << endl;
                } else {
                    result = divide(num1, num2);
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
                
            case 5: // Power
                cout << "Enter base number: ";
                if (!getValidInput(num1)) continue;
                
                cout << "Enter exponent: ";
                if (!getValidInput(num2)) continue;
                
                result = power(num1, num2);
                cout << "\nResult: " << num1 << " ^ " << num2 << " = " << result << endl;
                break;
                
            case 6: // Square Root
                cout << "Enter a number: ";
                if (!getValidInput(num1)) continue;
                
                if (num1 < 0) {
                    cout << "\nError: Cannot calculate square root of a negative number!" << endl;
                } else {
                    result = squareRoot(num1);
                    cout << "\nResult: √" << num1 << " = " << result << endl;
                }
                break;
                
            case 7: { // Modulus
                int int1, int2;
                cout << "Enter first integer: ";
                if (!getValidIntInput(int1)) continue;
                
                cout << "Enter second integer: ";
                if (!getValidIntInput(int2)) continue;
                
                if (int2 == 0) {
                    cout << "\nError: Modulus by zero is not allowed!" << endl;
                } else {
                    result = modulus(int1, int2);
                    cout << "\nResult: " << int1 << " % " << int2 << " = " << result << endl;
                }
                break;
            }
                
            case 8: // Exit
                continueCalculation = false;
                cout << "Thank you for using the calculator. Goodbye!" << endl;
                break;
                
            default:
                cout << "Error: Invalid choice! Please select a number between 1-8." << endl;
        }
        
        if (continueCalculation && choice >= 1 && choice <= 7) {
            cout << "\n========================================\n" << endl;
        }
    }
    
    return 0;
}

// Display the menu
void displayMenu() {
    cout << "Select an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Power (^)" << endl;
    cout << "6. Square Root (√)" << endl;
    cout << "7. Modulus (%)" << endl;
    cout << "8. Exit" << endl;
    cout << "----------------------------------------" << endl;
}

// Addition function
double add(double a, double b) {
    return a + b;
}

// Subtraction function
double subtract(double a, double b) {
    return a - b;
}

// Multiplication function
double multiply(double a, double b) {
    return a * b;
}

// Division function
double divide(double a, double b) {
    return a / b;
}

// Power function
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Square root function
double squareRoot(double num) {
    return sqrt(num);
}

// Modulus function
double modulus(int a, int b) {
    return a % b;
}

// Function to validate double input
bool getValidInput(double &num) {
    if (cin >> num) {
        return true;
    } else {
        clearInputBuffer();
        cout << "Error: Invalid input! Please enter a valid number." << endl;
        return false;
    }
}

// Function to validate integer input
bool getValidIntInput(int &num) {
    if (cin >> num) {
        return true;
    } else {
        clearInputBuffer();
        cout << "Error: Invalid input! Please enter a valid integer." << endl;
        return false;
    }
}

// Function to clear input buffer
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
