#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
    printf("Hello!\n pid = %d, ppid = %d\n",getpid(),getppid());

    printf("Waiting (while(1))\n");
    while(1);
}
