#ifndef H_FUNC_
#define H_FUNC_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define MIN 1  //for rand()
//#define MAX 100   //for rand()

void	printMat(const int* mat, int rows, int cols);
void	initRandomMat(int* mat, int rows, int cols, int min, int max);
void	initMatWithNumber(int* mat, int rows, int cols, int number);
void	initRandomArrayWithoutDoubles(int* arr, int maxRow, int maxCol, int minRow, int minCol, int numOfColors);
int     pointExistInArray(int* arr, int rows, int cols, int x, int y);
void	printCoordinates(int* startPoints, int cols, int rows);
void    printSubMat(int* mat, int startSubRow, int startSubCol, int bigRows, int bigCols, int numOfSubRows, int numOfSubCols);

#endif /* H_FUNC_ */
