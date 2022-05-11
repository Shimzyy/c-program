#include <stdio.h>
#include <string.h>
int longest(char lines_arr[5][20]);



int main()
{
    //STRING  EXERCISE 1
    /*char name[100];
    printf("NAME?: ");
    gets(name);
    int namesize = strlen(name);
    printf("%d",namesize);*/

    //STRING EXERCISE 2
    /*char names[3][50];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name %d: ",i+1);
        gets(names[i]);
    }
    
    printf("\nNAMES STORED: \n");

    for (int i = 0; i < 3; i++)
    {
     puts(names[i]);
    }*/

    //STRING EXERCISE 3 (USING ARRAYS)
    char lines[5][20];
    int ctr, long_ctr=0;
    
    

    //clrscr();
    for ( ctr = 0; ctr < 5; ctr++)
    {
        printf("\nEnter string %d: \n",ctr+1);
        gets(lines[ctr]);
    }
    
    long_ctr = longest(lines);
    printf("the longest string is %s",lines[long_ctr]);
    
    
}

int longest(char lines_arr[][20])
{
    int i = 0,   l_ctr=0, prev_len=0, new_len=0; 
    prev_len = strlen(lines_arr[i]);

    for ( i++; i < 5; i++)
    {
       new_len=strlen(lines_arr[i]);
       if (new_len>prev_len)
       {
          prev_len=new_len;
       }
       l_ctr = i;
       return l_ctr;
    }
    
}