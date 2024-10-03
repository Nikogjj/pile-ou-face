#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void attend(int);


int main(){
    printf("Attend 3 secondes\n");
    attend(10);
    attend(10);
    printf("voilà\n");
}



void attend(int attente){
    int temps=time(NULL)+attente;  
    for (int i=0; time (NULL)!=temps ; i++){
        ;
    }
    return ;
}

