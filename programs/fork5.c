#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Hello\n");

    if(fork() == 0)
        printf("In Child 1, pid = %d, ppid = %d\n", getpid(), getppid());
    else
        if(fork() == 0)
            printf("In child2, PID = %d, PPID = %d\n", getpid(), getppid());
        else
            if(fork() == 0)
                printf("In child3, PID = %d, PPID = %d\n", getpid(), getppid());
            else
                printf("In parent PID = %d, PPID = %d\n", getpid(), getppid());
    while(1);
}
