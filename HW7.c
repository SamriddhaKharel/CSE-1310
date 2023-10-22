#include <stdio.h>
#include <stdbool.h>

int function1(int arr2[10])
{
    bool x = false;
    int count =0;
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(arr2[i] == arr2[j])
            {
                x = true;
                break;
            }
        }
    }

return x;
    
}

int function2(int arr[5][5])
{
 for(int i=0; i<5; i++) 
 {
    for(int j=0; j<5; j++) 
    {
      printf("%-5d ",255-arr[i][j]);
    }
    printf("\n"); 
 } 
}

void function3()
{
int upc[10];
float price[10];
for (int i = 0; i < 10; i++)
{
    printf("Enter UPC #%d: ",i+1);
    scanf("%d",&upc[i]);  
    printf("Enter price #%d: ",i+1);
    scanf("%f",&price[i]);
}
    printf("Item Code Price\n");
    
     for(int i = 0; i <10 ; i++)
   {
      printf("%d\t%.2f\n", upc[i],price[i]);
   }
float total =0;
for (int i = 0; i < 10; i++)
{
    total += price[i];
}
printf("Total\t%.2f",total);
}


int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
    printf("Enter input %d: ",i+1);
    scanf("%d:\n",&arr[i]);
    }
    function1(arr);
    if (function1(arr) == true)
    {
    printf("There are duplicate values\n");
    }
    else 
    {
    printf("All unique values\n");
    }
    
    
    printf("------------------------------------------\n");
    
    int arr2 [5][5] = {{183, 226, 180, 117, 222},{193, 188, 0, 124, 52},{46, 157, 214, 49, 246},{1, 78, 167, 143, 204}, {98, 175, 159, 152, 248}};
    
    function2(arr2);
    
    printf("------------------------------------------\n");
    
    function3();
    
    return 0;


}