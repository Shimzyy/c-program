#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
/*
@Title : ATM MACHINE
@Creator: JORDAN & PELUMI
@Teacher: MR TEMITAYO
@Description: THIS IS A C PROGRAM THAT REGISTER QUALIFIED USER, BY GIVING EACHONE OF THEM ACCESS TO MODERN BANKING 
*/
int user1();
int user2();
int user3();
int user4();
int user5();
int user6();
int regist();
int regist1();
int regist2();
int regist3();
int regist4();
int regist5();
int regist6();
int sign();
int update();
int transact();
int main(){
    int op;
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n\nPRESS 1 TO REGISTER\t\t\t        PRESS 2 TO SIGIN");
     printf("\n\n\nPRESS 3 TO VEIW ACCOUNT PROFILE\t\t\tPRESS 4 TO MAKE TRANSACTION\n");
     printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
     scanf("%d",&op);
     switch (op)
     {
     case 1:
     system ("CLS");
     return regist();
         break;
    case 2:
    system ("CLS");
    return sign();
    break;
    case 3:
    system ("CLS");
    return update();
    break;
    case 4:
    system ("CLS");
    return transact();
    break; 
     default:
     printf("INVALID!!!!\n");
     exit (0);
         break;
     }
return 0;
}
int regist(){
    int op;
    int op1;
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
    printf("DEAR USER PLZ CHOOSE:\n__________________________________________________\nPRESS 1 AS A NEW USER\n_________________________________________________\nPRESS 2 AS AN EXISTING USER\n");
    scanf("%d",&op);
    system("CLS");
     printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
    switch (op)
    {
    case 1:
    printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
    printf("                  WELCOME USER TO FIRST BANK PLC>>>\n");
     printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
    printf("NOTE ANY NUMBER CHOSSEN WILL BE ALLOCATED WITH YOUR DATABASE, LET ENSURE WE REMEBER THEM\n");
        printf("WELCOME PLZ CHOOSE ANY NUMBER FROM 1 TO 6:\n");
        scanf("%d",&op1);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        if(op1 == 1)
    {
        system ("CLS");
        return user1();
    }
    else if(op1 == 2)
    {
        system ("CLS");
        return user2();
    }
    else if (op1 == 3)
    {
        system ("CLS");
        return user3();
    }
    else if(op1 == 4)
    {
        system ("CLS");
        return user4();
    }
    else if(op1 == 5)
    {
        system ("CLS");
        return user5();
    }
    else if (op1 == 6)
    {
        system ("CLS");
        return user6();
    }
    else{
        
         printf("\n______________________________________________________________________________________\n");
         printf("                      INVALID INPUT RECEIVED!!!\n");
     printf("______________________________________________________________________________________\n");
        exit(0);
    }
        break;
        case 2:
        return sign();
    default:
    printf("\n______________________________________________________________________________________\n");
         printf("                      INVALID INPUT RECEIVED!!!\n");
     printf("______________________________________________________________________________________\n");
    exit(0);
        break;
    }
}

int user2(){
   system("CLS");
    int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
    fptr = fopen("database.txt","r");
   if(fptr != NULL)
     {
          printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________\n");
       printf("\nPRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();
     }
   fptr = fopen("database.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    
   printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
            printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
         printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!");
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("YOUR USERNAME IS %s\n",user);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
       int pin,count=0;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40];
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
         printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr); 
        system("CLS"); 
   return main();   
    }
    return 0;
}
int user1(){
   system("CLS");
   int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
    fptr = fopen("database1.txt","r");
   if(fptr != NULL)
     {
 printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________");
       printf("\nPRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();
     }
   fptr = fopen("database1.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
            printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
          printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!"); 
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("YOUR USERNAME IS %s\n",user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
int pin;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
      printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40];
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1); 
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");   
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr); 
   printf("REGISTRATION SUCESSFUL!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
   getch();
        system("CLS"); 
   return main();
  }   
}
int user3(){
   system("CLS");
    int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("database3.txt","r");
   if(fptr != NULL)
     {
 printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________");
       printf("PRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();
     }
   fptr = fopen("database3.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
            printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
         printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!");
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("YOUR USERNAME IS %s\n",user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        int pin,count=0;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40];
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr); 
   printf("REGISTRETION SUCESSFUL!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
   getch();
        system("CLS"); 
   return main(); 
    }
}
int user4(){
   system("CLS");
    int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
    fptr = fopen("database4.txt","r");
   if(fptr != NULL)
     {
  printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________");
       printf("PRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();
     }
   fptr = fopen("database4.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
            printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
         printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!");
            
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("YOUR USERNAME IS %s\n",user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        int pin,count=0;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40];  
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr); 
   printf("REGISTRETION SUCESSFUL!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
   getch();
        system("CLS"); 
   return main();  
    }
}
int user5(){
   system("CLS");
    int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("database5.txt","r");
    if(fptr != NULL)
   {
     printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________");
       printf("PRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();  
      exit(1);             
   }
   fptr = fopen("database5.txt","w");
   if(fptr==NULL)
   {
       printf("INVALID!!!!\n");
   }
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
            printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s\n",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
         printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!");   
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("YOUR USERNAME IS %s\n",user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
int pin,count=0;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40]; 
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n"); 
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr);
   printf("REGISTRETION SUCESSFUL!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
   getch(); 
        system("CLS");
   return main();
    }
}
int user6(){
   system("CLS");
    int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
    fptr = fopen("database6.txt","r");
   if(fptr != NULL)
     {
  printf("\n______________________________________________________________________________________");
           printf("\nTHIS ACCOUNT NUMBER HAS BEEN ALLOCATED TO ANOTHER USER \nKINDLY CHOSE ANOTHER NUMBER FROM ONE TO SIX");
 printf("\n______________________________________________________________________________________");
       printf("PRESS ENTER KEY TO CONTINUE!!\n");
       getchar();
       getchar();
       system("CLS");
       return main();
     }
   fptr = fopen("database6.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    
    printf("\n______________________________________________________________________________________\n");
    printf("                       WELCOME TO REGISTRATION PORTAL\n");
     printf("______________________________________________________________________________________\n");
        printf("\n\n______________________________________________________________________________________\n");
       printf("______________________________________________________________________________________\n");
       printf("WELCOME DEAR USER\n");
       printf("PLEASE ENTER YOUR FIRST AND LAST NAME ONLY\n");
       char name[20];
       char fame[20];
       scanf("%s %s",name,fame);    
       printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("WELCOME %s %s\n",name,fame);
         printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
                 printf("CURRENT PROCESS SAVED!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
                 getch();
                 system("CLS");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("\n______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("DEAR %s %s PLEASE INPUT YOUR DATE OF BIRTH (MM/DD/YY)\n",name,fame);
        printf("YOU MUST BE OLDER THAN 18 BEFORE YOU CAN USE THIS OPERATION\n");
        int dd,mm,yy;
        printf("ENTER MONTH OF BIRTH MM 03: \n");
        scanf("%d",&mm);
        printf("ENTER DATE OF BIRTH DD E.G 09: \n");
        scanf("%d",&dd);
        printf("ENTER YEAR OF BIRTH YYYY E.G 2013: \n");
        scanf("%d",&yy);
        printf("______________________________________________________________________________________\n");
        if(mm>12 || dd>31 || yy>2004)
        {
            printf("INVALID !!!!"); 
            exit(0);
        }
        else{
            int y = 2022;
        int a;
        a = y - yy;
        printf("YOU ARE %d YEARS OF AGE %s\n",a,fame);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char user[40];
        printf("PLZ INPUT YOUR USERBANE \n");
        scanf("%s",&user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("YOUR USERNAME IS %s\n",user);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
int pin;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        char det[40],pp[40],pp2[40],det1[40],det2[40];
        printf("DEAR USER ENTER HOUSE ADDRESS\n");
        scanf("%s %s %s",&det,&pp,&pp2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER EMAIL\n");
        scanf("%s",&det1);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
        printf("ENTER MOBILE LINE\n");
        scanf("%s",&det2);
        printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");    
      fprintf(fptr,"%s\n",user); 
         fprintf(fptr,"%d\n",pin);
         fprintf(fptr,"%s %s\n",name,fame);
   fclose(fptr); 
   printf("REGISTRETION SUCESSFUL!!!!, PRESS ANY ENTER TO CONTINUE!!!\n");
   getch();
        system("CLS"); 
   return main();    
    }
}
int sign(){
        printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
    printf("\n______________________________________________________________________________________\n");
    printf("                  WELCOME TO SIGNIN\n");
     printf("______________________________________________________________________________________\n");
     printf("INPUT YOUR ACCOUNT NUMBER\n");
     int acct;
     scanf("%d",&acct);
     printf("\n______________________________________________________________________________________\n");
     printf("______________________________________________________________________________________\n");
     switch (acct)
     {
     case 1:
     system ("CLS");
     return regist1();
         break;
    case 2:
    system ("CLS");
    return regist2();
        break;
    case 3:
    system ("CLS");
    return regist3();
        break;
    case 4:
    system ("CLS");
    return regist4();
        break;
    case 5:
    system ("CLS");
    return regist5();
        break;
    case 6:
    system ("CLS");
    return regist6();
    break;  
     default:
     printf("\n______________________________________________________________________________________\n");
          printf("                       INVALID ACCT NUMBER !!!\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
     return sign();
         break;
     }
}
int regist1(){
    int ope;
    char usernamee[40];
    char use[40];
    int pine;
    char namee[40],fnamee[40];
    FILE *fptr1;
    if ((fptr1 = fopen("database1.txt", "r")) == NULL)
     {
          printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
       system("CLS");
        return regist();    
     }
      fscanf(fptr1,"%s\n",&usernamee);
    fscanf(fptr1,"%d\n",&ope);
    fscanf(fptr1,"%s",&namee);
    fscanf(fptr1,"%s",&fnamee);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
 printf("WELCOME %s %s\n",namee,fnamee);
 int count=0;
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pine);
 if(ope == pine)
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________");
     printf("\n______________________________________________________________________________________\n");
      printf("                 WELCOME %s %s\n",namee,fnamee);
     printf("______________________________________________________________________________________\n"); 
     printf("PLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT..");    
 }
 else
 {
     printf("\n______________________________________________________________________________________\n");
     printf("                                WRONG PIN !!!!\n");
     printf("______________________________________________________________________________________\n");
     printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
     system ("CLS");
     return regist1();
 }
}
int regist2(){
int op1a;
    char username1a[40];
    char us1a[40];
    int pin1a;
    char name1a[40],fname1a[40];
    FILE *fptr2;
     fptr2 = fopen("database4.txt","r");
    if ((fptr2 = fopen("database.txt", "r")) == NULL)
     {
          printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
        return regist(); 
     }
      fscanf(fptr2,"%s\n",&username1a);
    fscanf(fptr2,"%d\n",&op1a);
    fscanf(fptr2,"%s",&name1a);
    fscanf(fptr2,"%s",&fname1a);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
printf("\nWELCOME %s %s\n",name1a,fname1a);
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin1a);
 if(op1a == pin1a)
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________");
     printf("\n\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________");
      printf("\n______________________________________________________________________________________");
     printf("\n                 WELCOME %s %s",name1a,fname1a);
      printf("\n______________________________________________________________________________________");
     printf("\nPLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT..\n");   
 }
 else
 {
     printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
     return regist2();
     system("CLS");
 }
}
int regist3(){
    int op2r;
    char username2r[40];
    char us2r[40];
    int pin2r;
    char name2r[40],fname2r[40];
    FILE *fptr3;
    if ((fptr3 = fopen("database3.txt", "r")) == NULL)
     {
                 printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
        return regist();
     }
      fscanf(fptr3,"%s\n",&username2r);
    fscanf(fptr3,"%d\n",&op2r);
    fscanf(fptr3,"%s",&name2r);
    fscanf(fptr3,"%s",&fname2r);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
 printf("WELCOME %s %s\n",name2r,fname2r);
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin2r);
 if(op2r == pin2r)
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n______________________________________________________________________________________\n");
     printf("                 WELCOME %s %s\n",name2r,fname2r);  
     printf("\n______________________________________________________________________________________\n");
     printf("PLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT..\n"); 
 }
 else
 {
      printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
     return regist3();
     system("CLS");   
 }
}
int regist4(){
    int op3t;
    char username3t[40];
    char us3t[40];
    int pin3t;
    char name3t[40],fname3t[40];
    FILE *fptr4;
    if ((fptr4 = fopen("database4.txt", "r")) == NULL)
     {
                printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
        return regist();
     }
      fscanf(fptr4,"%s\n",&username3t);
    fscanf(fptr4,"%d\n",&op3t);
    fscanf(fptr4,"%s",&name3t);
    fscanf(fptr4,"%s",&fname3t);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
printf("WELCOME %s %s\n",name3t,fname3t);
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin3t);
 if(op3t == pin3t)
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n______________________________________________________________________________________\n");
     printf("                 WELCOME %s %s\n",name3t,fname3t);
     printf("\n______________________________________________________________________________________\n");
     printf("PLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT.."); 
 }
 else
 {
    printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
     return regist4();
     system("CLS");
 }
}
int regist5(){
    int op4y;
    char username4y[40];
    char us4y[40];
    int pin4y;
    char name4y[40],fname4y[40];
    FILE *fptr5;
    if ((fptr5 = fopen("database5.txt", "r")) == NULL)
     {
                  printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
        return regist();
     }
    
      fscanf(fptr5,"%s\n",&username4y);
    fscanf(fptr5,"%d\n",&op4y);
    fscanf(fptr5,"%s",&name4y);
    fscanf(fptr5,"%s",&fname4y);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
printf("WELCOME %s %s\n",name4y,fname4y);
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin4y);
 if(op4y == pin4y)
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n______________________________________________________________________________________\n");
     printf("                  WELCOME %s %s\n",name4y,fname4y);
     printf("\n______________________________________________________________________________________\n");
    printf("PLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT.."); 
 }
 else
 {
printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
     return regist5();
     system("CLS"); 
 }
}
int regist6(){
    system("CLS");
    int op5u;
    char username5u[40];
    char us5u[40];
    int pin5u;
    char name5u[40],fname5u[40];
    FILE *fptr6;
    if ((fptr6 = fopen("database6.txt", "r")) == NULL)
     {
                  printf("\n______________________________________________________________________________________\n");
                 printf("        DEAR USER YOUR DATA WAS NOT FOUND, PLZ REGISTER AGAIN!!!.\n");
     printf("______________________________________________________________________________________\n");
     system("CLS");
        return regist();
     }
    fscanf(fptr6,"%s\n",&username5u);
    fscanf(fptr6,"%d\n",&op5u);
    fscanf(fptr6,"%s",&name5u);
    fscanf(fptr6,"%s",&fname5u);
    printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
 printf("WELCOME %s %s\n",name5u,fname5u);
  printf("ENETR YOUR PIN:\n");
  scanf("%d",&pin5u);
 if(op5u == pin5u )
 {
     printf("CORRECT PASSCODE\n");
     system("CLS");
     printf("\n\n______________________________________________________________________________________\n");
     printf("\t\t          WELCOME TO FIRST BANK PLC......");
     printf("\n______________________________________________________________________________________\n");
     printf("\n______________________________________________________________________________________\n");
     printf("                       WELCOME       %s       %s.\n",name5u,fname5u);
     printf("\n______________________________________________________________________________________\n");
    printf("PLZ CHOOSE YOUR OPERATION.\nPRESS 1 TO SEND MONEY\n\nPRESS 2 TO WITHDRAW\n\nPRESS 3 TO DEPOSITE\n\nPRESS 4 SIGNOUT.."); 
 }
 else
 {
      printf("WRONG PIN !!!!\nPRESS ANY KEY TO CONTINUE!!!!");
     getch();
      system("CLS");
     return regist6();
    
 }

}
int transact(){

}
int update(){
}