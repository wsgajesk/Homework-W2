/*
 * Adding Two Real Numbers Rounding HW
 *
 * @name: William Gajeski
 * @email: wsgajesk@mtu.edu
 * @date: 9/6/2024
 */

#include <stdio.h>

int main()
{
        // Our Values
	double operand1;
	double operand2;
	char operator;

	 // Entering expression
    printf("Please enter a real number expression: ");

        // Read Expression
    scanf("%lf %c %lf", &operand1, &operator, &operand2);


        // Results
    printf("Operand 1: %.2f\n", operand1);
    printf("Operand 2: %.2f\n", operand2);
    printf("Operation: %c\n", operator);

    // Exit successfully
    return 0;
}
