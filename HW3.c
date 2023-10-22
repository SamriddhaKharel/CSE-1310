#include <stdio.h>
#include <math.h>

int main() {

	int a;
	int b;
	
	
	printf("Enter the first number (a)");  
    scanf("%d" ,&a);
	printf("Enter the first number (b)");  
    scanf("%d" ,&b);


	int add = a+b;
	int sub = a-b;
	int multiply = a*b;
	int divide =a/b; 
	int mod = a%b;

	printf("a + b =%d \n",add);  
	printf("a - b =%d \n", sub);  
	printf("a * b =%d \n", multiply);  
	printf("a / b =%d \n", divide);  
	printf("a %% b =%d \n", mod);  

	printf("---------------------------------\n");  

	int aa;
	int bb;
	int cc;
	int dd;
	int ee;

	
	printf("Enter the first number (a)");  
    scanf("%d" ,&aa);
	
	printf("Enter the first number (b)");  
    scanf("%d" ,&bb);
	
	printf("Enter the first number (c)");  
    scanf("%d" ,&cc);
	
	printf("Enter the first number (d)");  
    scanf("%d" ,&dd);
	
	printf("Enter the first number (e)");  
    scanf("%d" ,&ee);
	
	printf("%d %d %d %d %d\n",aa,bb,cc,dd,ee);  

	int sum1 =aa+bb+cc+dd+ee;
	printf("The sum of these numbers is %d \n",sum1);
    int avg = average(aa,bb,cc,dd,ee);
    printf("The average of these number is %d\n", avg);
	
	printf("---------------------------------\n");  
	
	int aaa;
    printf("Enter the first number (a)");  
    scanf("%d" ,&aaa);
    
    int aaao = pow(aaa,2);
    printf("a^2 = %d\n",aaao); 
    
    int bbb = pow(aaa,3);
    printf("a^3 = %d\n",bbb); 

	printf("---------------------------------\n");  

    int abss;
    printf("Enter a negative number (a)");  
    scanf("%d" ,&abss);
    
    int absolute = abs(abss);
    printf("|a| = %d \n", absolute);

	printf("---------------------------------\n");  

	int second;
	printf("Enter the number of seconds:");  
	scanf("%d" ,&second);
	int function2 = hourf(second);
	printf("Hours = %d;",function2);

	int function3 = minutef(second);
	printf(" Minutes = %d;",function3);

	int function4 = secondf(second);
	printf(" Seconds = %d;",function4);
	return 0;
}

// ********************************************************************************************************

	// Functions 

    int average(int num1,int num2 ,int num3,int num4,int num5)  // function prints the average
    {
    int sumf =num1+num2+num3+num4+num5 ;   //function 1
    int avgf = sumf/5;
    return avgf;
    }
//------------------------------------------------------
	int hourf(int second){
    int p2 = second / 3600;                       // function2
    return p2;
    }
//------------------------------------------------------
	int minutef(int second){
	int p2 = second / 60;             // function 3
    int p3 = p2 % 60;
	return p3;
	}
//-------------------------------------------------------
	int secondf(int second){
	int p1 = second % 60;
	return p1;
		
	}

