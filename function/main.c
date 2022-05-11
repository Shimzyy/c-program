#include<stdio.h>
int CA_1()
{
    int OE;
   for (int i = 1; i <= 100; i++)
   {
       OE = i % 2;
       if (OE==1)
       {
           printf("%d ",i);
       }
       
   }
   
}

int CA_2()
{
    int size,sum=0;
    printf("how many numbers?: ");
    scanf("%d",&size);
    for (int i = 1; i <= size; i++)
    {
        sum+=i;
        printf(" %d ",sum);
    }
   
    
}

int CA_3()
{
     int size,sum=0;
    printf("how many numbers?: ");
    scanf("%d",&size);
    for (int i = 1; i <= size; i++)
    {   int OE;
         OE = i % 2;
       
        if (OE==0)
        {
             sum+=i;
        printf(" %d ",sum);

        }
        
       
    }
   
}

int CA_4()
{
     int size,sum=0;
    printf("how many numbers?: ");
    scanf("%d",&size);
    for (int i = 1; i <= size; i++)
    {   int OE;
         OE = i % 2;
       
        if (OE==1)
        {
             sum+=i;
        printf(" %d ",sum);

        }
        
       
    }
   
}

int CA_5()
{
    
}

int addition(int a, int b)
{
    printf("First number: ");
    scanf("%d",&a);
    printf("second number: ");
    scanf("%d",&b);
    int result;
    result = a+b;
    printf("addition of %d and %d = %d\n",a,b,result);
}

//MINUS
int subtraction(int a, int b)
{
    printf("First number: ");
    scanf("%d",&a);
    printf("second number: ");
    scanf("%d",&b);
    int result;
    result = a-b;
    printf("subtraction of %d and %d = %d\n",a,b,result);
}

//DIVIDE
int division(int a, int b)
{
    printf("First number: ");
    scanf("%d",&a);
    printf("second number: ");
    scanf("%d",&b);
    int result;
    result = a/b;
    printf("division of %d and %d = %d\n",a,b,result);
}

char func_1(int x, int y)
{
    /*printf("Enter x");
    scanf("%d",&x);
    printf("Enter y");
    scanf("%d",&y);*/

    int z;
    z = x+y;
    return z;
}


int main()
{
    /*int x , y, z ;
    addition(x,y);
    subtraction(x,y);
    division(x,y);*/
    /*CA_1();
    printf("\n");
    CA_2();
    printf("\n");
    CA_3();
    printf("\n");
    CA_4();*/
    int blol=func_1(2,7);
    
    printf("%d",blol);
    return 0;
    
}
