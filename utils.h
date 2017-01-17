#ifndef __UTILS_H__
#define __UTILS_H__
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

static const int WIDTH = 10;
static const int HEIGHT = 10;
static const int ALIVE = 1;
static const int DEAD = 0;
static const int NO_STEPS = 1000;
static int width;
static int height;
static int **grid;
static int **old_grid;

//Used for slave matrixes initialization
int **initializedMatrix(int);

//This function initializes the grid
void initGrid(int, int);

//This function shows the grid
void printGrid();

//Check adjacent life
int getAlive(int, int);

//Function that randomly brings cells to life
void setRandomAlive(int);

//Function that generates a step for each cell
void gridStep();
#endif
