#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

#define TAB_SIZE 255

float aleatoire (float,float);
int genEntropicSeed();

int main(){
   genEntropicSeed();
    
    int joueur;
    while(1)
    {    
        int r= aleatoire(1,3);
        printf("Entrez un nombre 1(Pile) 2(Face):\n");
        scanf("%d",&joueur);

        if (joueur==r)
        {
            printf("gagné\n");
            printf("%d\n",r);
        }
        if (joueur!=r)
        {
            printf("perdu\n");
            printf("%d\n",r);
        }

    }

}

int genEntropicSeed(){
    int tab[TAB_SIZE];
    getentropy(tab,sizeof(tab));
    int seed=0;
    for (int i = 0; i < TAB_SIZE; i++)
    {
        seed=seed+tab[i];
    }
    srand(seed);
}

float aleatoire(float minimum,float maximum){
    int minetmax = minimum+(float)rand()/RAND_MAX*(maximum-minimum); 
    return minetmax;
}
    