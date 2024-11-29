# Introduction to Systems Programming in C - 10010

An Introduction to Systems Programming is a part of undergraduate studies in software engineering:
- Pointers
- Memory allocations
- Complex project structure
- Generic functions
- Bits and files
- Process and development tools.

A "warm-up" exercise as an introduction to the course was the following task:
## Biggest Matrix Sum
In this task, we will search for a submatrix within a large matrix that has the maximum sum of its elements.
For example: for a 20X20 matrix in which we are searching for a submatrix of size 2X2, the matrix highlighted in yellow was found.
### Example
![Example]([./images/matrix.png](https://github.com/VeroniMe/Introduction-to-Systems-Programming-in-C---10010/blob/main/images/matrix))

## Colour Game
Given a matrix board  [rows][cols] initialized to 0.
There are COLORS colours. Each colour receives a number. The first colour receives the number 1.
Each color starts from one square in the matrix, a square that was drawn in advance. In a predetermined order.
Each colour occupies one frame further from current square, if the square is not already occupied. 0 indicates that a square is not occupied. The order of the colours in the matrix is ​​in order of their number. In a certain queue, each colour is occupied in order. That is, in the case of 3 colours, a queue is an expansion of the three colours.

For example, in the given drawing:
COLORS = 3
Colour values: 1 = black, 2 = dark gray, 3 = light gray.
### Example
![Example]([./images/colors.png](https://github.com/VeroniMe/Introduction-to-Systems-Programming-in-C---10010/blob/main/images/colors))
In this task, you must colour a matrix with COLOR colours until it is completely coloured (there is no 0 value in the matrix).
