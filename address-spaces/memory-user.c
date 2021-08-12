#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int mem = atoi(*(argv + 1));
    char *largeArray = (char *) malloc(mem);
    if (largeArray == NULL) {
        fprintf(stderr, "Malloc returned null");
        exit(1);
    }
    int i = 0;
    
    while (i < mem) {
        *(largeArray + i) = 'a';
        if (i == mem - 1) {
            i = 0;
            continue;
        }
        i++;
    }
    free(largeArray);
    return 0;

}

