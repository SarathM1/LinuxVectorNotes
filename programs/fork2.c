#include <stdio.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Hello\n");
    fork();
    fork();
    fork();
    printf("Hi, PID = %d, PPID = %d\n", getpid(), getppid());
    while(1);
}
