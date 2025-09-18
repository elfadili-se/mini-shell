#include<stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

#define size 100
int main(int argc,char *argv[]){
	char buff[size];
 
	while(1){	
		int wstatus;

		printf("Hi elfadili,I am a simpel shell $");
		fgets(buff, size, stdin);
		buff[strlen(buff)-1]=0;
		if (strcmp(buff, "exit") == 0) {
			break;
       		 }
		char  *newargv[5] ;
                char *newenviron[] = { NULL };
		int i = 0;
	        char *token = strtok(buff, " ");
        	while (token != NULL && i< size - 1) {
            		newargv[i++] = token;
            		token = strtok(NULL, " ");
       		 }
       	 	newargv[i] = NULL; // terminate argument list


		pid_t pid=fork();
		if (pid>0){
			wait(&wstatus);
		}else if (pid ==0){
			execve(buff, newargv, newenviron);
			exit(-1);

		
		}else 
			perror("failed");



	}


}
