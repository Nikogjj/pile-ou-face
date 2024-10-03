#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void sommebetween(int,int);

int main(){
    sommebetween(1,5);
}

void sommebetween(int j,int k){
    int somme1=0;
    for (int i = 0; i <= k; i++)
    {
        somme1=somme1+i;
    }
    printf("%d\n",somme1);
}

