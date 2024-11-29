#include "q2.h"



int expandColor(int* board, int rows, int cols, int startRow, int startCol, int color, int turn)
{
	int coloredCells = 0;
	for(int i = startRow - turn; i <= startRow + turn; i++)
	{
		for(int j = startCol - turn; j <= startCol + turn; j++)
		{
			if(i >= 0 && i < rows && j >= 0 && j < cols)
			{
				if(*(board + cols*i + j) == 0 )
				{
					*(board + cols*i + j) = color;
					coloredCells++;
				}
			}
		}
	}	
	return coloredCells;
}



void colorTheBoard(int* board, int rows, int cols, int numOfColors, int* startPoints)
{
	int totalColoredCells = 0;
	int turn = 0;
	
	while(totalColoredCells != rows * cols)
	{
	    //for-loop for one turn
		for(int i = 0; i < numOfColors; i++)
		{
			int startRow = *(startPoints+2*i); // start row of color number i
			int startCol = *(startPoints +2*i + 1);// start colomn of color number i
			//we use i+1 cause our colors arr starts with "0" 
			totalColoredCells += expandColor((int*)board, rows, cols, startRow, startCol, i+1, turn);
		}
		//print board after each turn
		printf("---Turn number %d---\n", turn);
		printMat((int*)board, rows, cols);
		turn++;
		
	}
}

void colorGame()
{
	int board[ROWS2][COLS2];
	
	printf("Board size: %d rows and %d colomns\n", ROWS2, COLS2);	
	printf("In this game we will play with %d colors\n", COLOR);
	initMatWithNumber((int*)board, ROWS2, COLS2, 0);
	printMat((int*)board, ROWS2, COLS2);
	
	int startValues[COLOR][2]; //starting points of colors
	initMatWithNumber((int*)startValues, COLOR, 2, -1);
	initRandomArrayWithoutDoubles((int*) startValues, ROWS2-1, COLS2-1, 0, 0, COLOR);
	
	printCoordinates((int*)startValues, 2, COLOR);

	//start the game
	colorTheBoard((int*) board, ROWS2, COLS2, COLOR, (int*) startValues);
}
