#include<stdio.h>>

int prime(int);
int i;

int main()
{

    int n1,primeNo;	
    printf(" Input any positive number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = prime(n1);//call the function prime

   if(primeNo==1)
        printf(" The number %d is a prime number. \n",n1);
   else
      printf(" The number %d is not a prime number. \n",n1);
   return 0;
}

int prime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
        prime(n1);
      }
}
