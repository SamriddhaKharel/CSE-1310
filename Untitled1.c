#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EndOfWord word[i][j] == ' ' || word[i][j] == ','\
 || word[i][j] == '.' || word[i][j] == '\n'

int main()
{


// PART1 Project

    FILE *filename;
    char ch[1000],c;
    filename = fopen("sxk8170.txt","w");
    if (filename == NULL)
    {
        return 1;
    }
    fprintf(filename,"Samriddha Kharel\n");
    fclose(filename);


    filename = fopen("sxk8170.txt","a");
    fprintf(filename,"%s","1001918169\n");
    if (filename == NULL)
    {
        return 2;
    }
    fclose(filename);



    filename = fopen("sxk8170.txt","r");
    if (filename == NULL)
    {
        return 3;
    }

    c = fgetc(filename);

    while (c != EOF)
    {
    printf ("%c", c);
    c = fgetc(filename);
    }

    fclose(filename);


    printf("%s","-----------------------------\n");



//---------------------------------------------------------------------------------

// PART 2 project
    FILE *fpp;
    char filename2[1000];
    char ch2;
    int line, w, ccount;

    line = 0;
    w = 0;
    ccount = 0;
    fpp = fopen("Part2.txt","r");

    if (fpp == NULL)
    {
        return 4;
    }

	while ((ch2=getc(fpp)) != EOF)
    {
      if(ch2 =='\n')
      {
         line++;
         w++;
      }

      else
      {

         if(ch2==' '||ch2 =='\t')
         {
            w++;
            ccount++;
         }
         else {
            ccount++;
         }
      }
   }

    printf("Characters : %d \n", ccount);
    printf("Words : %d \n", w+1);
    printf("Lines : %d \n", line+1);
    printf("%s","-----------------------------\n");

    fclose(fpp);

    // PART3 Project





    FILE *f1,*f2,*f3;
    char cd;
    f1 = fopen("Part3_1.txt","r");
     if (f1 == NULL)
        {
            return 5;
            exit(1);
        }

    f2 = fopen("Part3_2.txt","r");
    if (f2 == NULL)
        {
            return 6;
            exit(1);

        }

    f3 = fopen("Part3_3.txt","w");
    cd = getc(f1);
    while(cd!= EOF)
    {
    fputc(cd,f3);
    cd = getc(f1);

    }

    cd = getc(f2);
    while(cd!= EOF)
    {
    fputc(cd,f3);
    cd = getc(f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    char ch3;

	f3 = fopen("Part3_3.txt", "r");
	if (f3 == NULL)
	{
		puts("\nCannot open the file.\n");
		exit(1);
	}
	char wordc[10];


	char word[30][20];
	int i = 0, j, count = 0, k1 = 0, k2 = 0;

	for (j = 0; 1; j++)
	{
		word[i][j] = fgetc(f3);
		if (word[i][j] == EOF)
			break;
		if (EndOfWord)
		{
			if (j != 0)
			{
				word[i][j] = '\0';
				i++;

				count++;
			}

			j = -1;
		}
	}

	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (word[i][k1] > word[j][k2])
			{
            char three[20];
	        strcpy(three, word[i]);
	        strcpy(word[i], word[j]);
        	strcpy(word[j], three);
				k1 = k2 = 0;

				continue;
			}
			if (word[i][k1] < word[j][k2])
			{
				k1 = k2 = 0;

				continue;
			}
			if (word[i][k1] == word[j][k2])
			{

				if (word[i][k1 + 1] == '\0' && word[j][k2 + 1] == '\0')
				{
					k1 = k2 = 0;
					continue;
				}

				if (word[i][k1 + 1] != '\0')
					k1++;
				if (word[j][k2 + 1] != '\0')
					k2++;
				j--;
			}

		}
	}
	for (i = 0; i < count; i++)
    printf("%d : %s\n", i + 1, word[i]);
    printf("\n");
	fclose(f3);
	return 0;
}

