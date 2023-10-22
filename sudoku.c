#include <stdio.h>
#include <stdlib.h>

int rowChecker(int arr[][9], int row) {
    for (int x = 0; x < 9; x++)
        for (int y = x+1; y < 9; y++)
            if (arr[row-1][x] == arr[row-1][y]) {
                printf("Incorrect row on %d", row);
                return 0;
            }
    return 1;
}

int colChecker(int arr[][9], int col) {
    for (int x = 0; x < 9; x++)
        for (int y = x+1; y < 9; y++)
            if (arr[x][col-1] == arr[y][col-1]) {
                printf("Incorrect column on %d", col);
                return 0;
            }
    return 1;
}

int squareChecker(int arr[][9], int square) {
    int rowShift = 0;
    int colShift = 0;

    if (square == 2 || square == 5 || square == 8)
        colShift = 3;
    if (square == 3 || square == 6 || square == 9)
        colShift = 6;
    if (square == 4 || square == 5 || square == 6)
        rowShift = 3;
    if (square == 7 || square == 8 || square == 9)
        rowShift = 6;

    int row = rowShift;
    int col = colShift;
    for (int x = 0; x < 9; x++)
        for (int y = x+1; y < 9; y++)
            if (arr[row+x/3][col+x%3] == arr[row+y/3][col+y%3]) {
                printf("Incorrect square on %d", square);
                return 0;
            }
    return 1;
}

int main()
{
    int grid1[9][9];
    int grid2[9][9];
    int grid3[9][9];
    int grid4[9][9];

    FILE* correct;
    FILE* row;
    FILE* column;
    FILE* square;

    correct = fopen("sudoku_correct.txt", "r");
    row = fopen("sudoku_row.txt", "r");
    column = fopen("sudoku_column.txt", "r");
    square = fopen("sudoku_square.txt", "r");

    for(int a = 0; a < 9; a++) {
        for(int b = 0; b < 9; b++)
            fscanf(correct, "%d", &grid1[a][b]);
    }
    for(int c = 0; c < 9; c++) {
        for(int d = 0; d < 9; d++)
            fscanf(row, "%d", &grid2[c][d]);
    }

    for(int e = 0; e < 9; e++) {
        for(int f = 0; f < 9; f++)
            fscanf(column, "%d", &grid3[e][f]);
    }
    for(int g = 0; g < 9; g++) {
        for(int h = 0; h < 9; h++)
            fscanf(square, "%d", &grid4[g][h]);
    }

    int x1 = 1;
    while (x1 < 10) {
        //printf("%d", 1);
        if (rowChecker(grid1, x1) == 0) {
            printf("Not a valid solution");
            break;
        }
        if (colChecker(grid1, x1) == 0) {
            printf("Not a valid solution");
            break;
        }
        if (squareChecker(grid1, x1) == 0) {
            printf("Not a valid solution");
            break;
        }
        x1++;
    }
    if (x1 == 10)
        printf("Valid solution");


    return 1;
}
