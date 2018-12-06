#include <unistd.h>
#include <stdio.h>

void my_putchar(char);
void my_put_nbr(int nb);
int my_isneg(int nb);

int main(int ac, char **av)
{
    my_put_nbr(5);
    my_putchar('\n');
    return (0);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    nb = my_isneg(nb);  // ok
    //printf("%d\n", nb); // ok

    if (nb < 10)
    {
        my_putchar(nb); // je comprend pas pourquoi ça affiche pas
    }
    else
    {
        my_put_nbr(nb / 10); // en cours sur papier
    }
}

int my_isneg(int nb) // ok testé
{
    if (nb < 0)
    {
        my_putchar('-');
        return nb / -1;
    }
    return nb;
}