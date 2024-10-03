#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/random.h>

void afficheimpair();

int main(){
    afficheimpair(18);
}

void afficheimpair(int j){
    for (int i = 0; i < j; i++)
    {
        if (i%2)
        {
            printf("%d\n",i);
        }
        
    }
}

