#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    // Function 1
    float func1(float num1)
{
       printf("Original Value = %f\n",num1);
    int a = floor(num1);
    printf("Floor of Value = %d\n",a);
    int b = ceil(num1);
    printf("Ceiling of Value = %d\n",b);
    int c = round(num1);
    printf("Round of Value = %d\n",c);
    printf("int value = %d\n",(int)num1);
}


    float power()   // Function 2
{
    char* a = "n";
    char* b = "n^2";
    char* c = "n^3";
    char* d = "n^-1";
    char* e = "n^-2";
    printf("%-9s", a);
    printf("%-9s", b);
    printf("%-14s",c);
    printf("%-7s", d);
    printf("%s\n", e);
    
    for(int i =1; i <11; i++) 
{
        printf("%-9d", i);
        printf("%-9.0lf", pow(i, 2));
        printf("%-14.0lf", pow(i, 3));
        printf("%-7.3lf", pow(i, -1));
        printf("%.6lf\n", pow(i, -2));

}
}

    int func3(char ch)            // Function 3
{
    char ch2 =ch;
    printf("Char value:%c\n", ch);
    printf("Decimal value:%d\n",ch);  
    printf("Hex value:%X\n",ch);
    printf("Decimal value again:%d\n",ch);  
    
    
    printf("Char value:%c\n",toupper(ch2));
    printf("Decimal value:%d\n",toupper(ch2));  
    printf("Hex value:%X\n",toupper(ch2));
    printf("Decimal value again:%d\n",toupper(ch2));  
}
    int main()
{


    float num1;
    printf("Please input a float: ");
    scanf("%f",&num1);
    func1(num1);
    
    printf("--------------------------------------------------------------------\n");


    power();

    printf("--------------------------------------------------------------------\n");
  
    printf("Please input a character: ");
    char ch;
    scanf(" %c", &ch);
    func3(ch);

    return 0;
}


    

    