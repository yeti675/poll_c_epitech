#include <unistd.h>

void my_putchar(char);
void my_put_nbr(int nb);
void afficheChiffre(int nb);
int my_isneg(int nb);

int main(int ac, char **av)
{
    my_put_nbr(-2147483647);
    my_putchar('\n');
    return (0);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    nb = my_isneg(nb);

    if (nb < 10)
    {
        afficheChiffre(nb);
    }
    else
    {
        my_put_nbr(nb / 10);
        afficheChiffre(nb % 10);
    }
}

void afficheChiffre(int nb)
{
    my_putchar(nb + '0');
}

int my_isneg(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        return (nb * -1);
    }
    return (nb);
}