#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    clock_t start_t, end_t, total_t;
    start_t = clock();
    int x = 100;
    FILE *file = fopen("new.txt", "w");
    pid_t pid = fork();
    if (pid < 0) {
        fprintf(stderr, "fork failed");
        exit(1);
    }
    if (pid == 0) {
        x = 120;
        for (int i = 0; i < 10; i++) {
            end_t = clock();
            total_t = end_t - start_t;
            printf("swap");
            printf("%d at time %ld\n", x, total_t);
            fwrite("child", 5, 1, file);
        }
    } else {
        for (int i = 0; i < 10; i++) {
            fwrite("parent",6, 1, file);
            printf("%d at time %ld\n", x, total_t);
        }
    }
    return 0;
}

