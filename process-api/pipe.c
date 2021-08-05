#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fd[2];
    pipe(fd);
    char buf[80];
char *cat_args[] = {"cat", "scores", NULL};
  char *grep_args[] = {"grep", "Villanova", NULL};

    
    pid_t child = fork();
    if (child == 0) {
        close(fd[1]);
        dup2(fd[0], 0);
        read(fd[0], buf, 10);
        printf("%s", buf);
        //execl("/usr/bin/grep", "grep", "Villanova", (char *) 0);
        //execvp("grep", grep_args);
//        execlp("grep", "grep", "Villanova", (char *) 0);
    } else {
        close(fd[0]);
        dup2(fd[1], 1);
        execl("/bin/ls", "ls", (char *) 0);
        //execvp("cat", cat_args);
  //      execlp("cat", "cat", "scores", (char *) 0);
        // shorter is dup2(0, fd[0]);
    }
    return 0;
}
