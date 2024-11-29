#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "q1.h"
#include "q2.h"

void intro()
{
	printf("\nPlease choose one of the following options\n"
			"S/s - Biggest Matrix Sum\n"
			"C/c - Color Game\n"
			"E/e - Quit\n");
}

int main()
{
	
	srand(time(NULL));
	int run = 1;
	char userChoise;
	while(run)
	{
		intro();		
		scanf(" %c", &userChoise);
		//getchar(); //clear the buffer from the '\n'
		switch(userChoise)
		{
			case 'S':
			case 's':
				
				biggestMatrixSum();
				break;
			case 'C':
			case 'c':
				
				colorGame();
				break;
			case 'E':
			case 'e':
				run = 0;
				printf("Bye Bye\n");
				break;
			default:
				printf("----Wrong input! Please try again!----\n");
		
		}
	} 
	return 0;	
	

}
