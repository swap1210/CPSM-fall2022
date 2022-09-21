#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define MAX_LIMIT 150
int main()
{
		char filename2[MAX_LIMIT];
		char *args[2]={NULL,NULL};
		
		printf("Input Program .c name to execute ");
		fgets(filename2,MAX_LIMIT,stdin);
		
		args[0]=filename2;
		args[0][strcspn(args[0], "\n")] = 0;
		
		execvp(args[0],args);
        
		printf("Invalid or filename do not existant  %s",args[0]);
	
	return 0;
}
