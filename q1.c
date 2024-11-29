#include "q1.h"
#include "helpFunctions.h"



void getLegalInput(int maxR, int maxC, int* rows, int* cols)
{
	printf("Enter number of rows between 1 and %d:\n", maxR);
	int input;
	scanf("%d", &input);
	while(input < 1 || input > maxR)
	{
		printf("Wrong range! Try again!\n");
		scanf("%d", &input);
		
	}
	*rows = input;
	printf("Enter number of colomns between 1 and %d:\n", maxC);
	scanf("%d", &input);
	while(input < 1 || input > maxR)
	{
		printf("Wrong range! Try again!\n");
		scanf("%d", &input);
		
	}
	*cols = input;

}

int calculateSumInSubMatrix(int* mat, int row, int col, int colInMat, int subRows, int subCols)
{
	int sum = 0;
	for(int i = row; i < row+subRows; i++)
	{
		for(int j = col; j < col+subCols; j++)
		{
			sum = sum + *(mat + colInMat*i + j);
		
		}
	
	}
	return sum;

}


int doFindMaxSubMatrix(int* mat, int rows, int cols, int subRows, int subCols, int* rowIndex, int* colIndex)
{
	//indexes for return(first left upper sub matrix)
	int indexI = 0;
	int indexJ = 0;
	
	int currentSum , maxSum;
	//initilize maxSum as a sum of first sub matrix
	maxSum = calculateSumInSubMatrix((int*) mat, indexI, indexJ, cols, subRows, subCols);
	for(int i = 0; i <= rows-subRows; i++)
	{
		for(int j = 0; j <= cols-subCols; j++)
		{
			currentSum = calculateSumInSubMatrix((int*)mat, i, j, cols, subRows, subCols);
			if(currentSum > maxSum)
			{
				maxSum = currentSum;
				indexI = i;
				indexJ = j;
			}
		
		}
	
	
	}
	*rowIndex = indexI;
	*colIndex = indexJ;
	return maxSum;
}

void biggestMatrixSum()
{
	int mat[ROWS][COLS];
	printf("Matrix size: %d rows and %d colomns\n", ROWS, COLS);
	
	int rows, cols;
	getLegalInput(ROWS, COLS, &rows, &cols);
	printf("Effectve matrix size: %d rows and %d colomns\n", rows, cols);
	
	int subRows, subCols; //cols and rows for sub matrix we search
	getLegalInput(rows, cols, &subRows, &subCols);	
	printf("Size of sub matrix with max sum to search: %d rows and %d colomns\n", subRows, subCols);
	
	initRandomMat((int*)mat, rows, cols, MIN, MAX);
	printMat((int*)mat, rows, cols);
	
	//indexes of sub matrix
	int rowIndex, colIndex;

	int s = doFindMaxSubMatrix((int*) mat, rows, cols, subRows, subCols, &rowIndex, &colIndex);

	printf("Answer: sum = %d in row %d and col %d\n", s, rowIndex, colIndex);
	printf("Sub matrix founded:\n");
	printSubMat((int*)mat, rowIndex, colIndex, rows, cols, subRows, subCols);


}
