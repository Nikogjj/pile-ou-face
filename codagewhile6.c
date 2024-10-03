#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>
#include <string.h>
int produitbetween(int,int);

int main(){
    produitbetween(produitbetween(-5,5),-100);
    printf("%ld\n",produitbetween);
}

int produitbetween (int from,int to){
    int produit=1;
    for (int i = from; i <= to; i++)
    {
        if (i!=0){
        produit=i*produit;
        }
    }
    printf("%d\n",produit);
    return produit;
    
}
    

