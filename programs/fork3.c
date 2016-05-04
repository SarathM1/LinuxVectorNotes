#include <stdio.h>
#include <unistd.h>
int main()
{
    int ret;
    printf("Hello\n");
    ret = fork();
    printf("ret = %d\n", ret);
    while(1);
}
