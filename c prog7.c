#include <stdio.h>

void main()
{
  int arr[3][3],i,j,sum;
    
     /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr[i][j]);
  }
  sum=arr[0][0]+arr[0][2]+arr[1][1]+arr[2][0]+arr[2][2];
 printf("\nSum of the diagonal elements is %d: ", sum);
}
