#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	int exec_pid,child1_pid,child1_status;
	exec_pid = getpid();
	
	printf("\n---Start LONE_EXEC1.c---\n");
	
	printf("\nI am single.c called by execvp() from different program and the pid is %d\n",exec_pid);
	
	child1_pid = fork();
	
	if (child1_pid == 0)
	{
		printf("HC1: hello from first child\n");
		printf("HC1: bye\n");
		exit(0);
	}
	else
	{
		printf("HP: hello from parent, child1 created with pid %d\n",child1_pid);
		child1_status = wait(&child1_status);
		printf("HP: Child has completed with exit status %d\n\n",WIFEXITED(child1_status));
		printf("---End LONE_EXEC1.c---\n");
	}
	return 0;
}