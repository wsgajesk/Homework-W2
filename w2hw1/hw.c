/*
 * Adding two Numbers HW
 *
 * @name: William Gajeski
 * @email: wsgajesk@mtu.edu
 * @date: 9/6/2024
 */

#include <stdio.h>

int main()
{
        // Our Values
    int operand1;
    int operand2;
    char operator;

        // Entering expression
    printf("Please enter an integer expression: ");

        // Read the expression from the user
    scanf("%d %c %d", &operand1, &operator, &operand2);

        // Results
    printf("Operand 1: %d\n", operand1);
    printf("Operand 2: %d\n", operand2);
    printf("Operation: %c\n", operator);

    // Exit successfully
    return 0;
}
