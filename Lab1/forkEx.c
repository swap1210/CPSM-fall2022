//***********************************************************
//**** Author: Swapnil Patel
//***********************************************************
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid1, pid2;

    pid1 = fork();
    pid2 = fork();

    // first child1 created by Parent fork(pid1)
    for (int i = 1; i < 100 && (pid1 == 0 && pid2 != 0); i = i + 2)
        printf("C1: %d\n", i);
    // Second child2 created by Parent for fork(pid2)
    for (int i = 101; i < 200 && (pid1 != 0 && pid2 == 0); i = i + 2)
        printf("C2: %d\n", i);

    // Third child created by child2
    for (int i = 201; i < 300 && (pid1 == 0 && pid2 == 0); i = i + 2)
        printf("C3: %d\n", i);

    if (pid1 != 0 && pid2 != 0)
    {
        /* parent will wait for the child to complete */
        wait(NULL);
        /* When the child is ended, then the parent will continue to execute its code */
        printf("Childrens Complete.\n");
    }
}