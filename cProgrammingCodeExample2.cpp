#include<stdio.h>

int b(int a[]);
int c(int a[]);

int main()
{
	int i, a[10],*ptra, Positive_Count, Negative_Count;
 	ptra=a;


 	printf("10 Elemanli a Dizisinin Degerlerini Girin :  ");
		for(i = 0; i < 10; i++)
 		{
        	scanf("%d", &*(ptra+i));
		}
 
	 Negative_Count = b(a);
	 Positive_Count = c(a);
	}

int b(int *ptrb)
{
	int i, Negative_Count = 0;

 		for(i = 0; i < 10; i ++)
 		{
   		    if(*(ptrb+i) < 0)
  		    {
 				printf("%2d  ", *(ptrb+i));
   			}
   		}
}

int c(int *ptrc)
{
  int i, Positive_Count = 0;
  
  	for(i = 0; i < 10; i ++)
  	{
   	    if(*(ptrc+i) >= 0)
    	{
 			printf("%2d  ", *(ptrc+i));
    	}
    }
}




