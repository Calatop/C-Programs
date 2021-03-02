#include <stdio.h>
#include <stdlib.h>
void main() {
    int n,c,r,s,t,temp,i;

    	do{
    	printf("\n Choose your pick: \n 1 = Armstrong Number \n 2 = Palindrome Number \n 3 = Perfect Number \n 4 = Exit\n");
    	printf("\n Choose your pick: \n");
    	scanf("%d",&c);
    	if (c==4)
    	{
    		printf("\n Closing the program");
    		
    		exit(0);
		}
		printf("\n Enter the number for checking: ");
		scanf("%d",&n);
		switch(c)
		{
			case 1:
				{
					t=n;
					s=0;
					while(t!=0)
					{
						r=t%10;
						t=t/10;
						s=s+r*r*r;
					}
					if (s==n)
					printf("\n Entered Number is an Armstrong Number! ");
					else
					printf("\n Entered Number is Not an Armstrong Number! ");
					break;
				}
			case 2:
				{
					s=0;
					temp=n;
					while(n)
					{
						r=n%10;
						n=n/10;
						s=s*10+r;
					}
				if (temp==s)
				printf("%d is a Palindrome", temp);
				else 
				printf("%d is not a Palindrome", temp);
				break;
				}
			case 3:
			{
				s=0;
				for(i=1;i<=n/2;i++)
				{
					if(n%i==0)
					{
						s=s+i;
					}
				}
					if (s==n)
					printf("\n The number is perfect!\n");
					else
					printf("\n The number is not perfect!\n");
					break;
				}
				default:
					printf("\n Type properly smh");
					break;
				}
			}
			while(n!=0);
			getch();
		}
					
	