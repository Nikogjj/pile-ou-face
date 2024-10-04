#include <stdio.h>
#include <stdlib.h>

int main(){
    int notes[5]={10,20,15,4,8};
    int a=10;
    for (int i = 0; i < 5; i++)
    {
        if (notes[i]==a)
        {
            printf("%d Egale à 10\n",notes[i]);
        }
        if (notes[i]>a)
        {
            printf("%d Supérieur à 10\n",notes[i]);
        }
        if (notes[i]<a)
        {
            printf("%d inférieur à 10\n",notes[i]);
        }
        
        
        
    }
    




}