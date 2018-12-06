#include <unistd.h>
#include <stdio.h>

int my_putchar(char c);
int my_putstr(char *str);

int main(int argc, char const *argv[])
{
    char *str = "nathan";

    my_putstr(str);
    return 0;
}

int my_putstr(char *str)
{
    int i = 0;

    while (i <= 6)
    {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_putchar(char c)
{
    write(1, &c, 1);
}