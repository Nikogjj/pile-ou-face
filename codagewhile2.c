#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void bouclecoucou();


int main(){
    bouclecoucou(18);
}

void bouclecoucou(int j){
    for (int i = 0; i < j; i++)
    {
        printf("Coucou\n");
    }
}

