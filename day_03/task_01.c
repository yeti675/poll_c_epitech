#include <unistd.h>

void my_putchar(char);
int my_print_alpha(void);

int main(void) {
   my_print_alpha();

    return(0);
}

void my_putchar(char c ) {   

    write(1, &c, 1);
}

int my_print_alpha(void){

    char letter;
       
    letter = 'a';   

    while (letter <= 'z') {

        my_putchar(letter);
        letter++;  
    }
    my_putchar('\n');
}