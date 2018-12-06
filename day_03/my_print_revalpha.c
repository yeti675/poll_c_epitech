#include <unistd.h>

void my_putchar(char);
int my_print_revalpha(void);

int main(void)
{
    my_print_revalpha();

    return (0);
}

void my_putchar(char c)
{

    write(1, &c, 1);
}

int my_print_revalpha(void)
{

    char letter;

    letter = 'z';

    while (letter >= 'a')
    {

        my_putchar(letter);
        letter--;
    }
    my_putchar('\n');
}