# Basic Calculator Application in C++

A command-line calculator application with modular programming principles and comprehensive error handling.

## Features

### Operations Supported
1. **Addition** - Add two numbers
2. **Subtraction** - Subtract one number from another
3. **Multiplication** - Multiply two numbers
4. **Division** - Divide one number by another (with zero-division protection)
5. **Power** - Raise a number to a power
6. **Square Root** - Calculate the square root of a number (with negative number protection)
7. **Modulus** - Find the remainder of integer division (with zero-modulus protection)

### Error Handling
- ✅ **Division by zero** - Prevents division and modulus operations when divisor is zero
- ✅ **Negative square root** - Prevents calculation of square root for negative numbers
- ✅ **Invalid input** - Handles non-numeric input gracefully
- ✅ **Input buffer clearing** - Automatically clears invalid input from buffer
- ✅ **Type validation** - Ensures correct data types (integers for modulus, doubles for other operations)

### Modular Design
The application follows modular programming principles:
- Each arithmetic operation has its own dedicated function
- Input validation is handled by separate utility functions
- Menu display is isolated in its own function
- Clear separation of concerns for maintainability

## How to Compile and Run

### Using g++ (MinGW/GCC)
```bash
g++ calculator.cpp -o calculator
./calculator
```

### Using g++ with optimization
```bash
g++ -Wall -O2 calculator.cpp -o calculator
./calculator
```

### Using MSVC (Visual Studio)
```bash
cl calculator.cpp /EHsc
calculator.exe
```

## Usage Example

```
========================================
    Welcome to C++ Calculator
========================================

Select an operation:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Power (^)
6. Square Root (√)
7. Modulus (%)
8. Exit
----------------------------------------
Enter your choice (1-8): 1

Enter first number: 25
Enter second number: 15

Result: 25 + 15 = 40

========================================
```

## Code Structure

### Main Components

#### Functions
- `main()` - Main program loop and menu handling
- `displayMenu()` - Shows available operations
- `add(double, double)` - Addition operation
- `subtract(double, double)` - Subtraction operation
- `multiply(double, double)` - Multiplication operation
- `divide(double, double)` - Division operation
- `power(double, double)` - Power/exponentiation operation
- `squareRoot(double)` - Square root calculation
- `modulus(int, int)` - Modulus operation for integers
- `getValidInput(double&)` - Validates double input
- `getValidIntInput(int&)` - Validates integer input
- `clearInputBuffer()` - Clears input stream buffer

### Error Handling Examples

**Division by Zero:**
```
Enter dividend (first number): 10
Enter divisor (second number): 0

Error: Division by zero is not allowed!
```

**Negative Square Root:**
```
Enter a number: -25

Error: Cannot calculate square root of a negative number!
```

**Invalid Input:**
```
Enter your choice (1-8): abc

Error: Invalid input! Please enter a number between 1-8.
```

## Future Enhancements

Potential features to add:
- [ ] Trigonometric functions (sin, cos, tan)
- [ ] Logarithmic functions
- [ ] Memory functions (store/recall)
- [ ] Calculation history
- [ ] Scientific notation support
- [ ] Complex number operations
- [ ] Expression parser for compound calculations

## Requirements

- C++ compiler with C++11 support or later
- Standard C++ libraries: `<iostream>`, `<limits>`, `<cmath>`, `<string>`

## License

Free to use and modify for educational purposes.
