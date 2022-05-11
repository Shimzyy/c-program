#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr_1;
    fptr_1 = fopen("test_1.txt","w");
    fputs("hello guys",fptr_1);
    fclose(fptr_1);
}