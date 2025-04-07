---

# Amortizing Loan Calculator

This project is a C++ application that calculates the monthly payments and the amortization schedule for a loan. It uses basic arithmetic functions for multiplication and division and provides a detailed loan breakdown for each month.

## Features

- Calculate monthly loan payments based on principal, interest rate, and loan duration.
- Generate an amortization schedule showing the breakdown of interest, principal payment, and remaining balance.
- Use custom functions for multiplication and division to perform the necessary calculations.

## Prerequisites

Before you begin, ensure that you have the following installed on your machine:

- A C++ compiler (e.g., GCC, Clang, MSVC)
- CMake (for building the project)
- A modern C++ standard (C++17 or higher)

## Getting Started

1. **Clone the repository**

   Clone this repository to your local machine using Git:

   ```bash
   https://github.com/kanyutu707/amortizingengine.git
   ```

2. **Navigate to the project directory**

   ```bash
   cd amortizingengine
   ```

3. **Create a build directory**

   It's recommended to create a build directory to keep the project organized.

   ```bash
   mkdir build
   cd build
   ```

4. **Run CMake to generate the build files**

   ```bash
   cmake ..
   ```

5. **Build the project**

   After generating the build files, compile the project:

   ```bash
   cmake --build .
   ```

6. **Run the program**

   Once the build is complete, you can run the application:

   ```bash
   ./amortizingengine
   ```

   The program will prompt you for the following inputs:
   
   - Principal amount
   - Interest rate (in percentage)
   - Loan duration (in years)

   It will then display the monthly payment and generate a loan amortization schedule showing the breakdown of each payment.

## Code Overview

- **`multiplier.hpp` and `multiplier.cpp`**:
  Defines the `multiplier` function, which takes two numbers and returns their product. This function is used to calculate the total number of months for the loan.
  
- **`divisor.hpp` and `divisor.cpp`**:
  Defines the `divisor` function, which takes two numbers and returns the result of dividing the first by the second. This is used to calculate the interest and monthly payment breakdown.

- **`main.cpp`**:
  The main application logic. It reads input values from the user, performs calculations using `multiplier` and `divisor`, and then generates and prints the loan amortization schedule.

## Example

Here is an example of how the program works:

```
Please enter the principal amount: 10000
Please enter the interest rate: 5
Please enter the years of loan: 5

Payment: 188.71
CM:    1   CI: 41.67   CP: 147.04   Bal:    9852.96
CM:    2   CI: 41.05   CP: 147.66   Bal:    9705.30
...
Loan payments complete
```

In this example:
- The loan principal is $10,000.
- The interest rate is 5%.
- The loan duration is 5 years (60 months).

The program calculates the monthly payment and prints out a breakdown of the interest and principal payments for each month, along with the remaining balance.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
