#include "helpFunctions.h"

int randomNumberInRange(int min, int max)
{
	
	return min+(rand()%(max-min+1));

}

void	printMat(const int* mat, int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%5d", *mat);
			mat++;
		}
		printf("\n");
	}
	printf("\n");

}

int pointExistInArray(int* arr, int rows, int cols, int x, int y)
{
	for(int i = 0; i < rows; i++)
	{
		if( (*(arr + cols * i) == x) && (*(arr + cols * i + 1) == y))
		{
			
			return 1;
		}
	}
	return 0;
}


void initRandomArrayWithoutDoubles(int* arr, int maxRow, int maxCol, int minRow, int minCol, int numOfColors)
{
	int* tempArr = arr; //we want to check doubles, but in row 60 we do arr + 2, so need to save address of "real start of array"
	for(int i = 0; i < numOfColors; i++)
	{
		//randomize coordinate for each color
		int x = randomNumberInRange(minRow, maxRow);
		int y = randomNumberInRange(minCol, maxCol);
		while(pointExistInArray((int*) tempArr, numOfColors, 2, x, y))
		{
		    x = randomNumberInRange(minRow, maxRow);
		    y = randomNumberInRange(minCol, maxCol);
		}
		*arr = x;
		*(arr + 1) = y;
		arr = arr + 2;
		
	}
	
}

void	initRandomMat(int* mat, int rows, int cols, int min, int max)
{
	for (int i = 0; i < rows*cols; i++)
	{
		*mat = randomNumberInRange(min, max);
		mat++;
	}

}

//print coordinates of each point
void printCoordinates(int* startPoints, int cols, int rows)
{
	for(int i = 0; i < rows; i++)
	{
		printf("Point number %d:", i + 1);
		printf("\tx = %d, y = %d", *(startPoints+cols*i), *(startPoints +cols*i + 1));
		printf("\n");
	}
}
//print sub matrix in big matrix
void printSubMat(int* mat, int startSubRow, int startSubCol, int bigRows, int bigCols, int numOfSubRows, int numOfSubCols)
{
	for(int i = startSubRow; i < startSubRow + numOfSubRows; i++)
	{
		for(int j = startSubCol; j < startSubCol + numOfSubCols; j++)
		{
			printf("%5d", *(mat + bigCols*i + j));
		}
		printf("\n");
	}
	printf("\n");

}

void	initMatWithNumber(int* mat, int rows, int cols, int number)
{
	for (int i = 0; i < rows*cols; i++)
	{
		*mat = number;
		mat++;
	}

}
