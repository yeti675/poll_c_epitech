#include <unistd.h>

void my_putchar(char);
int my_isneg(int n);

int main(int ac, char **av) {
    
    my_isneg(-20);

    return(0);
}

void my_putchar(char c ) {

    write(1, &c, 1);
}

int my_isneg(int n) {

    if (n < 0) {  

        my_putchar('N'); 
        my_putchar('\n');
    }
    else { my_putchar('P'); 
    
        my_putchar('\n');
    
    }
}

