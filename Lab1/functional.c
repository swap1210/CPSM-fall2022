//***********************************************************
//**** Author: Swapnil Patel
//***********************************************************
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void oneTo100()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    pid_t pid1;

    pid1 = fork();

    if (pid1 == 0)
    {
        oneTo100();
    }

    wait(NULL);
}