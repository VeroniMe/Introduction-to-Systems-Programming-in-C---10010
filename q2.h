#ifndef Q2_H_
#define Q2_H_

#include "helpFunctions.h"

#define ROWS2 6
#define COLS2 5

#define COLOR 3

int expandColor(int* board, int rows, int cols, int startRow, int startCol, int color, int turn);
void colorTheBoard(int* board, int rows, int cols, int numOfColors, int* startPoints);
void colorGame();

#endif /* Q2_H_ */
