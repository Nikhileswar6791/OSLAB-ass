#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc,char*argv[]){
         pid_t pid;
         pid = fork();
         if(pid >0){
          printf("Twice: Current process id: %d, Current result: %d\n",(int)getpid(),atoi(argv[argc-1])*2);
         if(argc == 2){
            return 0;
         }
         else if(strcmp(argv[1],"./square") == 0){
            char res[100];
            sprintf(res,"%d",atoi(argv[argc-1])*2);
            argv[argc-1] = res;
            execvp(argv[1],argv+1);
         }
         else if(strcmp(argv[1],"./twice") == 0){
            char res[100];
            sprintf(res,"%d",atoi(argv[argc-1])*2);
            argv[argc-1] = res;
            execvp(argv[1],argv+1);
         }
          else if(strcmp(argv[1],"./half") == 0){
            char res[100];
            sprintf(res,"%d",atoi(argv[argc-1])*2);
            argv[argc-1] = res;
            execvp(argv[1],argv+1);
         }
 
                 }        }