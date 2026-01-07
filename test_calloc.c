#include <stdlib.h>
#include <stdlib.h>

void *my_calloc(int size) {void *tmp = malloc(size );
return tmp;}


int main (void) {// allocation de 5 kb
char *test = my_calloc(5 * 1024);
printf("%p" , test);
free(test)
}

