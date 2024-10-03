#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void produitbetween(int,int);

int main(){
    produitbetween(-5,5);
}

void produitbetween (int j,int k){
    int produit=1;
    for (int i = j; i <= k; i++)
    {
        if (i==0){
        }
        else{
        produit=i*produit;
        }
    }
    printf("%d",produit);
    
}
    

