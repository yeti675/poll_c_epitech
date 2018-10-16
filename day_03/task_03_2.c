#include <unistd.h>

void my_putchar(char);
int my_print_digits(void);

int main(void) {
   my_print_digits();

    return(0);
}

void my_putchar(char c ) {   

    write(1, &c, 1);
}

int my_print_digits(void){

    char digits;
       
    my_putchar(48);
    my_putchar(49);
    my_putchar(50);
    my_putchar(51);
    my_putchar(52);
    my_putchar(53);
    my_putchar(54);
    my_putchar(55);
    my_putchar(56);
    my_putchar(57);
    
    my_putchar('\n');
    
}
