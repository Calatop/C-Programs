#include<stdio.h>
void main()
{
 int factorial(int);
 int FACT,NUM;
 printf("ENTER NUMBER : ");
 scanf("%d",&NUM);
 FACT=factorial(NUM);
 printf("\nFACTORIAL OF GIVEN NUMBER IS %d ",FACT);
 getch();
}
 
int factorial(int N)
{
 int RESULT=1,I;
    for(I=N;I>0;I--)
    RESULT=RESULT*I;
 return(RESULT);
}
