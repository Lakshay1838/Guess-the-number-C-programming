#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1; 
    // Genereates a random number from 1 to 100
    // printf("Number is %d\n",number);
    do{
        printf("Enter number from 1 to 100=");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("lower value please\n");
        }
        else if(guess<number)
        {
            printf("Higher value please=\n");
        }
        else{
            printf("You guessed it in %d times\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;   
}