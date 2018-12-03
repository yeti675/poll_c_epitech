#include <stdio.h>
#include <string.h>

int main()
{
    char *src = "ok";
    char dest[100];

    memset(dest, '\0', sizeof(dest));
   // strcpy(src, "test");
    strcpy(dest, src);

    printf("Final copied string : %s\n", dest);

    return (0);
}