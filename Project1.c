/******************************************************************************

* Program Name: COP 2220 Project 1
* Description: A program that calculates a student's grade
* Author: Monica Barrow (N01505878)
* Date: September 27th, 2021

*******************************************************************************/
//Pre-processor derective 
#include <stdio.h> 

//Constants- MAX
#define QUIZ_MAX 400
#define MIDTERM_MAX 200
#define FINAL_MAX 100

//Constants - WEIGHT
#define QUIZ_WEIGHT 30.00
#define MIDTERM_WEIGHT 40.00
#define FINAL_WEIGHT 30.00

int main (void)
{
  //Declarations
  float quizOne;
  float quizTwo;
  float quizThree;
  float quizFour;
  float midtermOne;
  float midtermTwo;
  float final;
  float quizAverage;
  float midtermAverage;
  float finalAverage;

  //Quiz Header
  printf
    ("============================QUIZZES============================\n");

  //Quiz One
  printf ("Enter the score earned on quiz one: ");
  scanf ("%f", &quizOne);

  //Quiz Two
  printf ("Enter the score earned on quiz two: ");
  scanf ("%f", &quizTwo);

  //Quiz Three
  printf ("Enter the score earned on quiz three: ");
  scanf ("%f", &quizThree);

  //Quiz Four
  printf ("Enter the score earned on quiz four: ");
  scanf ("%f", &quizFour);


  //Midterm Header
  printf
    ("============================MIDTERMS============================\n");

  //Midtrm One
  printf ("Enter the score earned on midterm one: ");
  scanf ("%f", &midtermOne);

  //Midterm Two
  printf ("Enter the score earned on midterm two: ");
  scanf ("%f", &midtermTwo);

  
  //Final Header
  printf ("============================Final============================\n");

  //Final
  printf ("Enter the score earned on the final: ");
  scanf ("%f", &final);

  //Results Header
  printf
    ("============================Results============================\n");

  //Quiz Results
  printf ("First Quiz: %.2f\n", quizOne);
  printf ("Second Quiz: %.2f\n", quizTwo);
  printf ("Third Quiz: %.2f\n", quizThree);
  printf ("Fourth Quiz: %.2f\n", quizFour);
  printf ("Total Quiz Score: %.2f\n\n",
	  (quizOne + quizTwo + quizThree + quizFour));

  //Midterm Results
  printf ("First Midterm: %.2f\n", midtermOne);
  printf ("Second Midterm: %.2f\n", midtermTwo);
  printf ("Total Midterm Score: %.2f\n\n", (midtermOne + midtermTwo));

  //Final Results
  printf ("Final %.2f\n", final);


  //Calucations Header
  printf
    ("============================Calculations============================\n");
  //Quiz Calcuations
  quizAverage = (quizOne + quizTwo + quizThree + quizFour) * QUIZ_WEIGHT / QUIZ_MAX;
  printf ("Quizzes:%7.2f%\n", quizAverage);

  //Midterm Cacluations
  midtermAverage = (midtermOne + midtermTwo) * MIDTERM_WEIGHT / MIDTERM_MAX;
  printf ("Midterms:%8.2f%\n", midtermAverage);

  //Final Cacluations
  finalAverage = (final) * FINAL_WEIGHT / FINAL_MAX;
  printf ("Final:%10.2f%\n\n", finalAverage);

//Total Calculations
  printf ("Total:%9.2f%\n",
	  (quizAverage + midtermAverage + finalAverage));


  return 0;			//End of Main 
}