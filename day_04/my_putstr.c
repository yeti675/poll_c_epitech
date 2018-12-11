#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);

int main(int argc, char const *argv[])
{
    char *str = "phrase de test\n";

    my_putstr(str);
    return 0;
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        my_putchar(str[i]);
    }
    return 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}