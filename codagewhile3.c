#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void affichepair();

int main(){
    affichepair(18);
}

void affichepair(int j){
    for (int i = 0; i < j; i++)
    {
        if (!(i%2))
        {
            printf("%d\n",i);
        }
        
    }
}

