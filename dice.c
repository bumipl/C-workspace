/* simple dice.c game */

/* INFORMATION
Develop a game where you have $1000 from the start. You bet fake dollars, you
throw the dice and either lose the bet or you win and triple your bet. The goal of the
game is winning as much money as possible and then quit playing the game while on
top.
Code a couple of points of the instructions below, then compile and try out your
program. Then continue on with more coding points. 

INSTRUCTIONS
• Create a variable named balance and assign the value of 1000.
• Ask the user to bet.
• Read the bet into the variable bet.
• Ask the user for a guess between one and six (and tell the user to guess zero in
order to quit). Read the guess into the variable guess.
• If the guess is zero, then quit the game.
• Pause the game for two seconds.
• Generate a random number between one and six; put the value in the variable
dice.
• Check if the guess matches the dice.
• If they don’t: subtract the bet from the balance.
• If they do match: multiply the bet by three and add that to the balance.
• If the balance is zero, quit the game.
• If the balance is positive, loop the game to be able to play more rounds.
• Add some texts in order to better communicate with the user (e.g. ”throwing
the dice…”, ”congratulations”, ”you lost”, “your balance is…”, etcetera).
• Add comments to your code in order to better explain the different parts of it.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int myRandom(int max)
{
  int x;
  // create a random no between 1 and "max"
  x = rand() % max +1;

  return x;
}

int main ()
{
  int balance, bet, guess, dice;
  
  // seeding the random generator 
  srand(getpid());

  balance = 1000;
  
  while (1)
  {
    printf("[Casino] Please make your bet: ");
    fflush(stdout);
    scanf("%d", &bet);

    printf("[Casino] Please guess the number 1-6, 0 means break:\n");
    scanf("%d", &guess);

    // user presses 0 in order to quit
    if ( guess == 0 )
      return 0;
  
    printf("Throwing the dice...\n");
    sleep(2);
    dice = myRandom(6);
    printf("Dice results: %d\n", dice);
  
    if ( guess != dice )
    {
      balance = balance - bet;
      printf("Sorry, you lost!\n");
    }
    else
    {
      bet = bet * 3;
      balance = balance + bet;
      printf("You won - congratulations!\n");
    }

    if ( balance == 0)
    {
      printf("GAME OVER\n");
      return 0;
    }

    printf("Balance : $%d\n", balance);
  }


    return 0;
}
