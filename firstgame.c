#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int choice; int Guess = 0; int inp;
   srand(time(0));
  int random_number = rand() % 20 +1;
  printf("Welcome to the random number guessing game\nPress 1 to enter\nPress 0 to exit\n");
  scanf("%d", &choice);
  if (choice == 1)
  {
    printf("Guess the random number between 1 to 20 now ");
   // printf("%d", random_number);
    for (int i = 0; i < 10; i++)
    {
      Guess += 1;
      scanf("%d", &inp);
      if (inp == random_number)
      {
        
        printf("You guessed the number correcly!\nNumber of guesses taken = %d\n", Guess);
        printf("The number is %d", inp);
        break;
      }
      else if (inp < random_number)
      {
        printf("Too low try again \nAttempts remaining = %d\n Try again ", 10 - Guess);
      }
      else if (inp > random_number)
      {
        printf("Too high try again \nAttempts remaining = %d\n Try again ", 10 - Guess);
      }
      else{
        continue;
      }
    }
  }
  else{
    printf("Thank you !");
    do
    {
      break;
    } while (1);
  }
  return 0;
}
