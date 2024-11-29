#ifndef Q1_H_
#define Q1_H_

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#define ROWS 20
#define COLS 20

#define MIN 1
#define MAX 100

void biggestMatrixSum();
int doFindMaxSubMatrix(int* mat, int rows, int cols, int subRows, int subCols, int* rowIndex, int* colIndex);
int calculateSumInSubMatrix(int* mat, int row, int col, int colInMat, int subRows, int subCols);

#endif /* Q1_H_ */
