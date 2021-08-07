#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *ary = (char *)malloc(sizeof(char) * 1000 * 1000 * 1000);
    printf("malloc secured the meories\n");
    printf("memory addr: %p\n", ary);
    printf("%p: %d\n", ary, *ary);
    printf("%p: %d\n", ary+1, *ary);
    printf("%p: %d\n", ary+2, *ary);
    free(ary);
}

