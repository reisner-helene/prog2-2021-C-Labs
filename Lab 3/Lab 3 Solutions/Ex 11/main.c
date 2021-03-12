/*
 * Exercise 11 - Mini-Minesweeper
 *
 * Author: Christian Grévisse
 * Date: 05.03.2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 //size of grid
#define PROBABILITY 75 //proba of hitting the mine

#define MINE 1 //encoding for a mine
#define EMPTY 0 //encoding for an empty cell
#define SET -1 

//global variables - be v careful with using global variables, should be inside of the functions instead! using global ones is not a good idea. 
int grid[N][N]; //define the grid
int numberOfMines = 0; //number of mines is zero in the beginning

void fillGrid() { 
    srand(time(NULL)); //seed for random generator

    for(int i = 0; i < N; i++) //iterate thro lines and columns
        for(int j = 0; j < N; j++) {
            grid[i][j] = (rand() % 100) < PROBABILITY; // each element of the grid will be a random nr btw 0 and 99. it will be a boolean... if this number is btw zero and probability. if it's true it will be a mine, if false wont be a mine!
            numberOfMines += grid[i][j]; // we cound the number of mines
        }
}

void printGrid(int showMines) {
    printf("\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            if(showMines)
                printf("%c ", grid[i][j] == MINE ? '*' : ' '); //if you have a mine at that position, create a start, otherwise create a whitespace. if statement (condition ? yes : no) - if condition is met it will execute first part, if not no
            else
                printf("%c ", grid[i][j] == SET ? ' ' : '?'); //if I dont want to show the mines (if not a mine?), this line comes in

        printf("\n");
    }
    printf("\n");
}

int checkGrid() { //checking if the whole grid has been discovered
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(grid[i][j] == EMPTY)
                return 0;
    return 1;
}

int main() {

    fillGrid();

    printf("Welcome to Mini-Minesweeper. There are %d mines spread across the grid.\n", numberOfMines);

    int x, y;

    while(1) {
        printGrid(0);

        do {
            printf("x = "); //ask user for coordinates
            scanf("%d", &x);
        } while(x < 0 || x >= N); //if not proper coordinates, we will ask them again

        do {
            printf("y = ");
            scanf("%d", &y);
        } while(y < 0 || y >= N);

        if(grid[x][y] == MINE) { //have a look into the grid, if it's a mine then we lose
            printGrid(1);
            printf("BOOM!\n");
            break; //this break refers to the first upper loop (the first while or forloop in which "this" is - line 63!) So we stop the while loop of line 63!
        } else {
            grid[x][y] = SET; //change the value of the grid 

            if(checkGrid()) { //checks if i won by seeing that I discovered the whole greed - otherwise it will loop again and ask for new coordinates
                printGrid(1);
                printf("You win!\n");
                break; 
            }
        }
    }

    return 0;
}
