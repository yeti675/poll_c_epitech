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
       
    digits = 48;   

    while (digits <= 57) {

        my_putchar(digits);
        digits++;  
    }
    my_putchar('\n');
    
}
