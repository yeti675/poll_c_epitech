#include <stdio.h>

int my_strlen(char const *str);

int main(int argc, char const *argv[])
{

    char str[] = "nathan";
    int returnMystrlen = 0;

    returnMystrlen = my_strlen(str);
    printf("\nIl y as %d lettres dans le mot %s.\n", returnMystrlen, str);

    return 0;
}

int my_strlen(char const *str)
{

    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}