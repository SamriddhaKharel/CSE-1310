#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void function1(char ch)
{
if(ch>='a' && ch<='z')
{
    printf("You entered a lower case letter\n");
}
else if(ch>='A' && ch<='Z')
{
    printf("You entered a Upper case letter\n");
}
else if(ch>='0' && ch<='9')
{
    printf("You have entered a number\n");
}
else if(ch== ' ' || ch ||'\t' && ch || '\n')
{
    printf("You have entered a white space\n");
}
else
    printf("You have entered a special character\n");
}


void function2(int x)
{
if (x % 4 == 0)
        if (x % 100 == 0)
            if (x % 400 == 0)
                printf("It is a leap year\n");
            else
                printf("It is not a leap year\n");
        else
            printf("It is a leap year\n");
    else
        printf("It is not a leap year\n");

}


float function3(int a) 
{
    float bill;
    if (a / 2000 >= 1)
        bill = (float) (500*0.15 + 500*0.12 + 1000*0.14 + (a - 2000)*0.17);
    else if (a / 1000 >= 1)
        bill = (float) (500*0.15 + 500*0.12 + (a - 1000)*0.14);
    else if (a / 500 >= 1)
        bill = (float) (500*0.15 + (a - 500)*0.12);
    else
        bill = (float) (a*0.15);
    return bill;
}

int function4(int x,char op,int y) 
{
    int sum =0;
    switch(op) 
    {
        case '+':
        sum = x + y;
            break;
        case '-':
        sum = x - y;
            break;
        case '*':
        sum = x * y;
            break;
        case '/':
        sum = x / y;
            break;
        case '%':
        sum = x % y;
            break;
    }
    return sum;

   
}



int function5(int n)
{
    int i =1;
    int f =1;
    
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    
    return f;
     
}

int power(int p)  
{
    int y =p+1;
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
    
    for(int i =1; i <y; i++) 
{
        printf("%-9d", i);
        printf("%-9.0lf", pow(i, 2));
        printf("%-14.0lf", pow(i, 3));
        printf("%-7.3lf", pow(i, -1));
        printf("%.6lf\n", pow(i, -2));

}
}

int function7()
{
    int num;
    int sum = 0;
    do
    {
    printf("Please input a number ");
    scanf("%d",&num);
    sum = sum + num; 
    }
    while(num != 0);
    return sum;

}


void function8(int x)
{
for (int i=1;i<= x;i++)
{
    for(int j =1;j<=i;j++)
    {
    printf("*");
    }
    printf("\n");

}

}


int main()
{
    char inp;
    int leap;
    int kwh;
    int fact;
    int num;
    int p;
    char str;
    int one;
    int two;
    printf("Please enter a character: ");
    scanf("%c",&inp);
    function1(inp);
    printf("--------------------------------\n");
    
    printf("Please enter a number: ");
    scanf("%d",&leap);
    function2(leap);
    printf("--------------------------------\n");
       
    printf("How many kWh did you use this month? ");
    scanf("%d",&kwh);
    printf("You owe $ %.2f.\n",function3(kwh));
    
    printf("--------------------------------\n");
    printf("Please enter an operation in the format of ""1+1"". You may change the numbers and the operation.\n");
    scanf("%d %c %d",&one,&str,&two);
    printf("%d%c%d=%d\n", one, str, two, function4(one, str, two));


    printf("--------------------------------\n");
    printf("Please enter an int: ");
    scanf("%d",&fact);
    printf("%d! = %d\n",fact,function5(fact));

    
    printf("--------------------------------\n");
    printf("Please enter an int: ");
    scanf("%d",&p);
    power(p);
    
    printf("--------------------------------\n");
    printf("The total is %d\n",function7());
    
    printf("--------------------------------\n");
    printf("Please enter an int: ");
    scanf("%d",&num);
    function8(num);

    return 0;
}
