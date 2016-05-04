#include <stdio.h>
#include <unistd.h>

int main()
{
    int ret;
    printf("Hello\n");
    ret = fork();
    
    if(ret == 0)
    {
        // Exclusive child code
        printf("In child, PID = %d, PPID = %d\n", getpid(), getppid());
    }
    else
    {
        // Exclusive parent code
        printf("In parent, PID = %d, PPID = %d\n", getpid(), getppid());
    }
    
    // Common code
    printf("Common code, pid = %d, ppid = %d\n", getpid(), getppid());
    while(1);
}
