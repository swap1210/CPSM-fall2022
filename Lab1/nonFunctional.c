//***********************************************************
//**** Author: Swapnil Patel
//***********************************************************
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1;
    int i;
    pid1 = fork();
    if (pid1 == 0)
    {
        for (i = 0; i < 20; i++)
        {
            printf("%d ", i);
        }
    }
    wait(NULL);
}