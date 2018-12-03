#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int op1, int op2);
int soustraction(int op1, int op2);
int multiplication(int op1, int op2);
int division(int op1, int op2);

int main(int argc, char *argv[])
{
    char *operand1 = argv[1];
    char *operator1 = argv[2];
    char *operand2 = argv[3];

    int op1 = atoi(operand1);
    int op2 = atoi(operand2);
    // int signe = atoi(operator1);   // test

    // char *test = "natho";                // test
    // printf("char *test == %s\n", *test); // test
    // printf("char[0] == %c\n", test[0]);  // test

    printf("Operand 1 = %d\n", op1);
    printf("Operand 2 = %d\n", op2);
    //  printf("Operator = %d\n", signe); test

    switch (*operator1)
    {
    case '+':
        printf("resultat == %d\n", addition(op1, op2));
        break;
    case '-':
        printf("resultat == %d\n", soustraction(op1, op2));
        break;
    case 'x':
        printf("resultat == %d\n", multiplication(op1, op2));
        break;
    case '/':
        printf("resultat == %d\n", division(op1, op2));
        break;
    default:
        printf("error !!");
        break;
    }

    // EN If Else
    // if (*operator1== '+')
    // {
    //     printf("resultat == %d\n", addition(op1, op2));
    // }
    // else if (*operator1== '-')
    // {
    //     printf("resultat == %d\n", soustraction(op1, op2));
    // }
    // else if (*operator1== '*')
    // {
    //     printf("resultat == %d\n", multiplication(op1, op2));
    // }
    // else if (*operator1== '/')
    // {
    //     printf("resultat == %d\n", division(op1, op2));
    // }

    return 0;
}

int addition(int op1, int op2)
{
    return op1 + op2;
}

int soustraction(int op1, int op2)
{
    return op1 - op2;
}

int multiplication(int op1, int op2)
{
    return op1 * op2;
}

int division(int op1, int op2)
{
    return op1 / op2;
}