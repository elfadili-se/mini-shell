#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//#include <stdarg.h>

int main(int argc, char *argv[]) {


    if (argc < 2)
        {               printf("essayer avec %s your_text \n" ,argv[0]);
        }else
            {
                for (int i=0; i<argc;i++){
                        write(1,argv[i+1],strlen(argv[i+1]));
                        write(1," ",1);
                }
                write(1,"\n",1);
        }

}
