#include "header.h"

int main(int argc, char *argv[])
{
    char *operand1 = argv[1], *operator1 = argv[2], *operand2 = argv[3];

    int op1 = atoi(operand1), op2 = atoi(operand2);       

    printf("Operand 1 = %d\n", op1);
    printf("Operand 2 = %d\n", op2);

    char signe[4] = {'+', '-', '*', '/'};                                                            
    int (*ptrFctOperator[4])(int op1, int op2) = {addition, soustraction, multiplication, division}; // tableau de pointeur de fonctions
    int i = 0;

    while (signe[i] != operator1[0])
    {
        i++;
    }

    if (signe[i] == operator1[0])
    {
        printf("%d\n", (ptrFctOperator[i](op1, op2)));
    }

    return 0;
}
