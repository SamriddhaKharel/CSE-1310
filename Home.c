#include <stdio.h>
#include <stdlib.h>

    int rowcheck(int a[9][9],int fp2 )
    {
    int c[10]={0};
    for(int i=0;i<9;i++)
    {
    for(int j=0;j<9;j++)
    {
    c[a[i][j]]++;
    }
    for(int k=1;k<=9;k++)
    if(c[k]!=1)
    {
    printf("The value %d came %d times in %d row.\n",k,c[k],i+1);
    return 0;
    }
    for(int k=1;k<=9;k++)

    c[k]=0;
    }
    return 1;
    }

//---------------------------------------------------------------------------------------------------------
    int colcheck(int a[9][9],int fp3)
    {
     int c[10]={0};
    for(int i=0;i<9;i++)
    {
    for(int j=0;j<9;j++)
    {
    c[a[i][j]]++;
    }
    for(int k=1;k<=9;k++)
    if(c[k]!=1)
    {
    printf("The value %d came %d times in %d c.\n",k,c[k],i+1);
    return 0;
    }
    for(int k=1;k<=9;k++)

    c[k]=0;
    }
    return 1;
    }

//----------------------------------------------------------------------------------

    int cubecheck(int a[9][9],int fp4)
    {
    int c[10]={0},count=0;
    for(int m=0;m<9;m+=3)
    {
    for(int b=0;b<9;b+=3)
    {
    for(int i=m;i<m+3;i++)
    {
    for(int j=b;j<b+3;j++)
    {
    c[a[i][j]]++;
    }
    }
    count++;
    for(int k=1;k<=9;k++)
    if(c[k]!=1)
    {
    printf("The value %d came %d times in %d square\n",k,c[k],count);
    return 0;
    }
    for(int k=1;k<=9;k++)
    c[k]=0;
    }
    }
    return 1;
    }
//--------------------------------------------------------------
int main()
{
    FILE *fp ,*fp2,*fp3,*fp4;
    int puzzle[9][9];
    int puzzle1[9][9];
    int puzzle2[9][9];
    int puzzle3[9][9];



    fp=fopen("sudoku_correct.txt", "r");
    if (fp == NULL)
    {
        return 1;
    }
    fp2 = fopen("sudoku_row.txt", "r");
    if (fp2 == NULL)
    {
        return 2;
    }
    fp3 = fopen("sudoku_column.txt", "r");
    if (fp3 == NULL)
    {
        return 3;
    }
    fp4 = fopen("sudoku_square.txt", "r");
    if (fp4  == NULL)
    {
        return 4;
    }

    for(int i=0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    fscanf (fp, "%d",& puzzle[i][j]);
    }
    }
    printf("-----------------------------\n");
    printf("Sudoku correct\n");
    printf("-----------------------------\n");

    for(int i = 0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    printf("%d", puzzle[i][j]);
    }
    printf("\n");

    }

    for(int i=0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    fscanf (fp2, "%d",& puzzle1[i][j]);
    }
    }
    printf("-----------------------------\n");
    printf("Sudoku row\n");
    printf("-----------------------------\n");

    for(int i = 0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    printf("%d", puzzle1[i][j]);
    }
    printf("\n");

    }
    if(rowcheck(puzzle1,fp2) == 1)
    printf("Vaid solution\n");
    else
    printf("Invalid Solution\n");

    for(int i=0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    fscanf (fp3, "%d",& puzzle2[i][j]);
    }
    }
    printf("-----------------------------\n");
    printf("Sudoku column\n");
    printf("-----------------------------\n");

    for(int i = 0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    printf("%d", puzzle2[i][j]);
    }
    printf("\n");

    }
    if(colcheck(puzzle2,fp3) == 0)
    printf("Valid solution\n");
    else
    printf("Invalid Solution\n");
    for(int i=0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    fscanf (fp4, "%d",& puzzle3[i][j]);
    }
    }
    printf("-----------------------------\n");

    printf("Sudoku cube\n");
    printf("-----------------------------\n");
    for(int i = 0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    printf("%d", puzzle3[i][j]);
    }
    printf("\n");
    }
    if(cubecheck(puzzle2,fp3) == 1)
    printf("Vaid solution\n");
    else
    printf("Invalid Solution\n");
    for(int i=0; i<9; i++)
    {
    for(int j=0; j<9; j++)
    {
    fscanf (fp, "%d",& puzzle[i][j]);
    }
    }
    printf("-----------------------------\n");

    return 0;

}
