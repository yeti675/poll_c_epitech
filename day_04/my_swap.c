#include <stdio.h>

void my_swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;

    printf("Avant a = %d\nAvant b = %d\n", a, b);

    my_swap(&a, &b);

    printf("Apres a = %d\nApres b = %d\n", a, b);

    return 0;
}

void my_swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}
