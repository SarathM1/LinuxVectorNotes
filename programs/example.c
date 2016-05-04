#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    printf("Pid = %d, PPID = %d\n", getpid(), getppid());
    while(1);       // ./p1 will be stuck here
}
