#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    char str[] = "Hello World";
    pid_t pid=fork();
    if(pid==0){
    for(int i=0;i<11;i++){
        if(pid==0)
        {
            pid = fork();
            if(pid == 0)
            {
              printf("%c %d\n",str[i],(int)getpid());
              sleep(rand()%4+1);
            }
            else
            {
                wait(NULL);
            }
        }
       }
    }
    else{
        wait(NULL);
    }}