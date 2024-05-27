#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int number,guess,attempts=1;
  srand(time(0));                                                     //will generate a random number which has to be guessed by hit and trial method basically.
  number = rand()%100 +1;
  printf("Guess the number between 1 to 100\n");
  do
  {
    scanf("%d",&guess);
    if(guess>number)
    {
      printf("Lower number please!\n");
    }
    else if(guess<number)
    {
      printf("Higher number please!\n");
    }
    else
    {
      printf("You guessed it in %d attempts \n",attempts);                 //it will tell you how many attempts it took you to finally guess the number
    }
    attempts++;
  }while(guess!=number);
  return 0;
} 
