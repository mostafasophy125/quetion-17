/*
 Write a C program to input two numbers and display the smaller number using the ternary operator.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    printf("enter Two number:");
    scanf("%d%d",&a,&b);
    int smaller= (a<b)? a:b;
    printf("smaller=%d",smaller);

}
