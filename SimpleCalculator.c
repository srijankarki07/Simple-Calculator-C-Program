#include <stdio.h>
#include <math.h>

// Function to calculate the result based on the provided values and operator
float calculate(float valueOne, char operator, float valueTwo) {
    float result;

    // Switch statement to determine the operation based on the provided operator
    switch (operator) {
        case '/': result = valueOne / valueTwo; break;
        case '*': result = valueOne * valueTwo; break;
        case '+': result = valueOne + valueTwo; break;
        case '-': result = valueOne - valueTwo; break;
        case '^': result = pow(valueOne, valueTwo); break;
        case ' ': result = sqrt(valueTwo); break;
        default: result = NAN; // Use NAN for undefined values
    }

    // Return the calculated result
    return result;
}

// Main function where the program execution starts
int main() {
    // Declare variables to store input values and the calculated result
    float valueOne, valueTwo, answer;
    char operator;

    printf("Welcome to Simple Calculator!\n");
    // Prompt the user to enter a calculation in the specified format
    printf("Enter your calculation in the format: Number1 operator Number2\n");

    // Check if input is valid
    if (scanf("%f %c %f", &valueOne, &operator, &valueTwo) != 3) {
        printf("Invalid input. Please provide valid input.\n");
        return 1;
    }

    // Perform the calculation using the calculate function
    answer = calculate(valueOne, operator, valueTwo);

    // Check if the calculation is valid
    if (!isnan(answer)) {
        printf("%.2f %c %.2f = %.6f\n", valueOne, operator, valueTwo, answer);
    } else {
        printf("Invalid input or calculation.\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}