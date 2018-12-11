#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int op1, int op2);
int soustraction(int op1, int op2);
int multiplication(int op1, int op2);
int division(int op1, int op2);

/* /!\ !! LE SYMBOLE '*' NE FONCTIONNE PAS POUR MULTIPLIER A CORRIGER !! /!\ */

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

#endif /* HEADER_H_ */
