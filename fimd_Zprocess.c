#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void){

    pid_t processo_pai = getppid();
    printf("Processo pai: %d\n", getppid());

    pid_t processo = fork();
    
    if ( processo > 0 ){
        printf("Processo filho %d\n", processo);
        sleep(12);

        execlp("ps", "ps", "-l", (char *)NULL);
    }
    else if ( processo == 0 ){

        printf("Processo filho: %d\n", processo); 
    }
    
    else if ( processo < 0 ){
        printf("Erro");
    }

    return 0;
}