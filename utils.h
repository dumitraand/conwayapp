#ifndef __UTILS_H__
#define __UTILS_H__
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALIVE 1
#define DEAD 0

static const int WIDTH = 10;
static const int HEIGHT = 10;
static const int NO_STEPS = 100;
static int width;
static int height;
static char **grid;
static char **old_grid;

//Used for slave matrixes initialization
char **initializedMatrix(int);

//This function initializes the grid
void initGrid(int, int);

//This function shows the grid
void printGrid();

//Check adjacent life
int getAlive(int, int);

//Function that randomly brings cells to life
void setRandomAlive(int);

char* newGeneration(char *h_cells, char *h_borderTop, char *h_borderBot,
                   char *h_borderRight, char *h_borderLeft, int height, int width);

//Function that generates a step for each cell
void gridStep();
#endif
