/*************************************************************************\
* Filename:      cards.c                                                  *
* Author:        Matt Morrison                                            *
*                                                                         *
* This program will simulate the drawing of a card randomly from a deck   *
* of 52 cards, ask the user to guess that card, and report either a win   *
* or a loss.                                                              *
\*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Declarations */
int  GetValidInt (int min, int max);
void PrintInstructions (void);
void SetRandomSeed (void);
int  GetRandomNumber (int low, int high);
void PrintCard(int pip, int suit);
void PrintResults (int pip, int suit, int playerPip, int playerSuit);

#define MINPIP   1
#define MAXPIP  13
#define MINSUIT  1
#define MAXSUIT  4

#define ACE      1
#define JACK    11
#define QUEEN   12
#define KING    13

#define HEARTS   1
#define SPADES   2
#define DIAMONDS 3
#define CLUBS    4

int main ( )
{
   int pip, suit, playerPip, playerSuit;

   /*seed the random number generator*/
   SetRandomSeed( );

   /*computer draws a card randomly*/
   pip = GetRandomNumber (MINPIP, MAXPIP);
   suit = GetRandomNumber (MINSUIT, MAXSUIT);

   /*greet user and get the user's card*/
   PrintInstructions( );
   fprintf(stdout, "Pick the face value of your card.\n");
   playerPip = GetValidInt (MINPIP, MAXPIP);
   fprintf(stdout, "Pick the suit of your card.\n");
   playerSuit = GetValidInt (MINSUIT, MAXSUIT);

   PrintResults(pip, suit, playerPip, playerSuit);

   return 0;
} 


/*Function: GetValidInt()                           */
/*GetValidInt gets an integer from the user between */
/*specified minimum and maximum values, and will    */
/*reprompt the user until it gets one that is valid.*/
/*                                                  */
/*Inputs: min and max, the minimum and maximum      */
/*       (inclusive) values for the entered integer */
/*Outputs: returns an integer between min and max,  */
/*         inclusively                              */

int GetValidInt(int min, int max)
{
   /* is set greater than max so the loop will be entered*/
   int input = max + 1;

   /* Loop assures valid input */
   while( input < min || input > max )
   {
      fprintf(stdout, "Please enter an integer between");
      fprintf(stdout, " %d and %d.\n", min, max);
      scanf("%d", &input);
   }

   return input;
}


/*Function: PrintInstructions()                 */
/*                                              */
/*PrintInstructions prints the greeting for the */
/*the grades program                            */
/*                                              */
/*Inputs: none                                  */
/*Outputs: none (Side-effect: prints to screen) */
    
void PrintInstructions (void)
{
   fprintf(stdout, "\n\n");
   fprintf(stdout, "***************************************\n");
   fprintf(stdout, "*This program draws a card randomly   *\n");
   fprintf(stdout, "*from a deck of 52 cards.  You should *\n");
   fprintf(stdout, "*guess a card by entering a number    *\n");
   fprintf(stdout, "*between 1 and 13 that shows the face *\n");
   fprintf(stdout, "*value of the card, where Jack is 11, *\n");
   fprintf(stdout, "*Queen is 12, and King is 13 and then *\n");
   fprintf(stdout, "*Indicate the suit of the card using  *\n");
   fprintf(stdout, "*1 through 4, where a 1 is hearts, a  *\n");
   fprintf(stdout, "*2 is spades, 3 is diamonds and  4 is *\n");
   fprintf(stdout, "*clubs.  A win or a loss is declared. *\n");
   fprintf(stdout, "***************************************\n\n");
}


/*********************************************
** Function: GetRandomNumber
** Usage:    x = GetRandomNumber();
**
** GetRandomNumber() returns a pseudo-random integer
** between the values passed into the function: low and 
** high, inclusive.
**
** Inputs: low - an int which is the lowest value 
**         in the range of acceptable random numbers
**         high - an int which is the highest value
**         in the range of acceptable random numbers
** Output: returns a random integer between low and 
**         high, inclusive
**
** Assumptions:
**         random number generator has been seeded
*********************************************/
int GetRandomNumber (int low, int high) 
{
   int num ;

   /* Call rand() to get a large random number. */
   num = rand() ;

   /* Scale the random number within range. */
   num = num % (high - low + 1) + low ;

   return num ;
}


/*********************************************
** Function: SetRandomSeed
** Usage:    SetRandomSeed();
**
** The pseudo-random number generator is seeded
** with a call to time() assuring a different
** seed everytime the program runs.
**
** Inputs: None
** Output: No value is returned
*********************************************/
void SetRandomSeed (void) 
{
   unsigned int timeSeed ;

   /* Use the time function to set the seed. */
   timeSeed = (unsigned int) time(0) ;
   srand(timeSeed) ;
}


/*********************************************
** Function: PrintCard
** Usage:    PrintCard(pip, suit);
**
** Prints the name of the card.
**
** Inputs: pip - an integer between 1 and 13
**         indicating and Ace - King
**	   suit - an integer between 1 and 4
**	   indicating the card's suit
** Output: None 
**
** Assumptions: Relies on #defines for suits and
**              Ace, Jack, Queen & King.
*********************************************/

void PrintCard(int pip, int suit)
{
   /*print the pip of the card*/
   switch (pip)
   {
      case ACE: 
	 fprintf(stdout, "Ace ");
	 break;
      case JACK:
	 fprintf(stdout, "Jack ");
	 break;
      case QUEEN:
	 fprintf(stdout, "Queen ");
	 break;
      case KING:
	 fprintf(stdout, "King ");
	 break;
      case 2:   
      case 3:   
      case 4:
      case 5:   
      case 6:   
      case 7:
      case 8:   
      case 9:   
      case 10:
	 fprintf(stdout, "%2d ", pip);
	 break;
      default: 
	 fprintf(stdout, "%d - Not Valid\n", pip);
	 break;
   }

   /*print the suit of the card*/
   switch (suit)
   {
      case HEARTS: 
	 fprintf(stdout, "of Hearts\n");
	 break;
      case SPADES:
	 fprintf(stdout, "of Spades\n");
	 break;
      case DIAMONDS:
	 fprintf(stdout, "of Diamonds\n");
	 break;
      case CLUBS:
	 fprintf(stdout, "of Clubs\n");
	 break;
      default: 
	 fprintf(stdout, "%d - Not Valid\n", suit);
	 break;
   }
}


/******************************************************************
** Function: PrintResults
** Usage:    PrintResults(pip, suit, playerPip, playerSuit);
**
** Prints the two cards and the results of the game (win or lose)
**
** Inputs: pip - an integer between 1 and 13 indicating  
**         Ace - King that was drawn by the computer
**	   suit - an integer between 1 and 4 indicating
**	   the card's suit that was drawn by the computer
**         playerPip - an integer between 1 and 13 
**         indicating Ace - King chosen by the user
**	   playerSuit - an integer between 1 and 4
**	   indicating the card's suit chosen by the user
** Output: None 
*****************************************************************/

void PrintResults (int pip, int suit, int playerPip, int playerSuit)
{
   /*print the cards*/
   fprintf(stdout, "\n\nI picked the ");
   PrintCard(pip, suit);
   fprintf(stdout, "and you picked the ");
   PrintCard(playerPip, playerSuit);

   /*compare the cards and declare winner pr loser*/
   if (pip == playerPip && suit == playerSuit)
   {
      fprintf(stdout, "\nYou Win !!!\n\n");
   }
   else
   {
      fprintf(stdout, "\nSorry, you lose\n\n");
   }
}