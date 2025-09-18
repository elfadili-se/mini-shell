
#include<stdio.h> // pour printf
#include<unistd.h> //getcwd
#include<stdlib.h>

#define size 100 
int main(int argc, char*argv[]) {
        char cwd[size] ;
        if (argc !=1 ){
                printf("usage : %s only \n", argv[0]);
                exit(-1);

        }

        if (getcwd(cwd,sizeof(cwd))!=NULL){
                printf("%s \n",cwd);

        } else {
                perror("failed");
        }
        return 0;

}

