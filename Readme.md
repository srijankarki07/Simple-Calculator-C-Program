# Welcome to Simple Calculator C Program!

This is a simple C program that functions as a calculator that I did during my first semester of Computer Engineering. It takes user input in the format "valueOne operator valueTwo" and performs the corresponding mathematical operation.


# Here are some key points about the code:

-   **Header Files:**
    
    -   `#include <stdio.h>`: Provides functions for input and output operations.
    -   `#include <math.h>`: Provides mathematical functions, such as `pow` (exponentiation) and `sqrt` (square root).
-   **Function Definitions:**
    
    -   `float calculate(float valueOne, char operator, float valueTwo)`: This function takes three parameters (two values and an operator) and calculates the result based on the specified mathematical operation. It uses a `switch` statement to handle different operators and includes error handling for division by zero and negative square roots.
-   **Main Function:**
    
    -   `int main()`: The main function is where the program execution begins.
    -   It declares variables `valueOne`, `valueTwo`, and `answer` to store user input and the calculated result.
    -   Prompts the user to enter a calculation in the specified format.
    -   Reads the input values using `scanf`.
    -   Calls the `calculate` function to perform the calculation.
    -   Displays the result or an error message if the input or calculation is invalid.
    -   Returns 0 to indicate successful execution.
-   **Input and Output:**
    
    -   The program expects the user to input values in the format "valueOne operator valueTwo" (e.g., "5.0 + 3.0").
    -   Outputs the calculated result with a precision of six decimal places.
    -   Prints an error message if the input or calculation is invalid.
- 