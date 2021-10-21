#include <stdio.h>

//Main
void main()
{
	// Declare variables
	int input, factorial=0, fact;

	//Ask User for Number
	printf("Please enter a number:\t");
	scanf("%d", &input);

	//Update Variables
	fact = input;
	factorial = input;

	//Positive or 0 is entered
	if (input >= 0)
	{
		//Until 1 is reached
		do
		{
			//Update Variables
			fact--;
			factorial = factorial * fact;
		} while (fact > 1);
	}
	
	//Negative is Entered
	if(input < 0)
	{
		//Until -1 is reached
		do
		{
			//Update Variables
			fact++;
			factorial = factorial * fact;
		} while (fact < -1);
	}

	//Display answer
	printf("\n%d! Factorial is equals to: %d\n\n", input, factorial);
}