#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define COUNT 100 

int copy_file(int argc, char *argv[]) {
    char buff[COUNT];

    if (argc != 3) {
        printf("Usage: %s source_file destination_file\n", argv[0]);
        return 1;
    }

    int cpfile = open(argv[1], O_RDONLY);
    if (cpfile < 0) {
        perror("open source");
        return 1;
    }
    int pfile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (pfile < 0) {
        perror("open destination");
	printf("try %s %s  %s%s \n",argv[0],argv[1],argv[2],argv[1]);
        close(cpfile);
        return 1;
    }

    ssize_t n;
    while ((n = read(cpfile, buff, COUNT)) > 0) {
        if (write(pfile, buff, n) != n) {
            perror("write");
            close(cpfile);
            close(pfile);
            return 1;
        }
    }

    close(cpfile);
    close(pfile);
    return 0;
}

int main(int argc , char*argv[]){

	if (argc<3){
		printf("use : %s source_file file_destination",argv[0]);
	
	}
	int out = rename(argv[1],argv[2]);
	
	if (out==-1){
		copy_file(argc,argv);
	}





}
