#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Intitial screen
int a,amt_2, choice;

    printf("WITHDRAWAL\n");
printf("-------------------------------------------------------\n");
printf("\nselect the account you want to withdraw from\n");
printf("\n>SAVINGS(1)\n\n>CURRENT(2)\n\n>CREDIT(3)\n\n");
scanf("%d",&choice);

//The initial screen will loop if given the wrong input
while (choice>3)
{
printf("\nOPTION NOT AVAILABLE\n");
printf("-------------------------------------------------------\n");
       printf("WITHDRAWAL\n");
printf("-------------------------------------------------------\n");
printf("\nselect the account you want to withdraw from\n");
printf("\n>SAVINGS(1)\n\n>CURRENT(2)\n\n>CREDIT(3)\n\n");
scanf("%d",&choice);
}

//Switch for all 3 accounts
switch (choice)
{
case 1:
    WS_1();
    break;

case 2:
     WS_1();
    break;

case 3:
     WS_1();
    break;

default:
printf("OPTION NOT FOUND");
    break;
}

}



//First function; used to select the amount to withdraw 
int WS_1()
{
    int amt_1;
    printf(" >500(1)\t\t\t\t>10,000(5)\n >1,000(2)\t\t\t\t>20,000(6)\n >2,000(3)\t\t\t\t>50,000(7)\n >5,000(4)\t\t\t\t>SELECT AMOUNT(8)\n ");
   printf("Please select the amount you wish to withdraw: ");
   scanf("%d",&amt_1);
   
   if (amt_1<=7)
   {
       WS_2(); 
   }
   else if (amt_1==8)
   {
       WS_3();
   }
   
   
}

//Second function; used for the processing screen 
int  WS_2()
{
    int a;

     printf("PROCESSING");

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < sleep(1); j++)
        
            a = j;
        
        printf(".");
    }
    
    printf("\nPLEASE TAKE YOUR CASH.");
}

//Third function; used to manually input an amount to withdraw
int WS_3()
{
    int amt_2;
    printf("Please enter the amount which you want to withdraw\nPLEASE NOTE THE AMOUNT MUST BE A MULTIPLE OF 500: ");
   scanf("%d",&amt_2);
   int mult = amt_2 % 500;

  
   

 if (mult==0)
 {
       WS_2();
 }
 else
     printf("AMOUNT WAS NOT A MULTIPLE OF 500\n");
    
 
    
 

}