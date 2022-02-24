#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int threed_array[2][3][3];
   /*Counter variables for the loop*/
   int i, j, k ;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
		 printf("Enter value for threed_array[%d][%d][%d]:", i, j,k);
         scanf("%d", &threed_array[i][j][k]);
     	}
      }
   }
   //Displaying array elements
   printf("Three Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
      	for(k=0;k<3;k++) {
         printf("%d ", threed_array[i][j][k]);
         if(k==2){
        	printf("\n");
        }
         }
      }
   }
   return 0;
}

/* Insert the given number of elements into the specified position of 
the array such as first, last, mid*/
 int pos1,pos2,pos3,num1;
   printf("\Enter Dimension 1 :- [1-5]");
   scanf("%d",&pos1);
   printf("\Enter Dimension 2 :- [1-5]");
   scanf("%d",&pos2);
   printf("\Enter Dimension 3 :- [1-5]");
   scanf("%d",&pos3);
   printf("\nEnter the element to be inserted at that particular position :- ");
   scanf("%d",num1);
   if(pos1>=1 && pos1<=5 && pos2>=1 && pos2<=5 && pos3>=1 && pos3<=5)
     {
	    array1[pos1-1][pos2-1][pos3-1]=num1;
     }
   printf("\nThe elemnets of 3D arrays are :\n");
/* Remove the given number of elements from the array */

/* Remove the given number of elements from the specified position of 
the array such as first, last, mid*/
/* Search the given element in the array and print it's position*/
int element;
    printf("\nEnter the element whose positioned is to be located :- ");
    for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if(array1[i][j][k]==element)
				 {
                    printf("\nThe element %d is found at position (%d, %d, %d) :- ", element,i+1,j+1,k+1);
                 }
             }
         }
     }
/* Check whether the array has non zero values in a position*/
for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if(array1[i][j][k]==0)
				 {
                    printf("\nThe element %d at position (%d, %d, %d) is a zero value.",array1[i][j][k],i+1,j+1,k+1);
                 }
                else
                 { 
                    printf("\nThe element %d at position (%d, %d, %d) is non zero value.",array1[i][j][k],i,j,k);
				 }
             }
         }
     } 
/* Create one more ID array and compare the two ID arrays for values*/
 for(i=0;i<x;i++)
     {
     	for(j=0;j<y;j++)
     	  {
     	  	 for(k=0;k<z;k++)
     	  	   {
				  printf("\n array1[%d][%d][%d] = %d and array2[%d][%d][%d] = %d",i,j,k,array1[i][j][k],i,j,k,array2[i][j][k]);
        	      if(array1[i][j][k]==array2[i][j][k])
        	        {
        	  	        printf("\t They are equal ");
			        }
			      else if(array1[i][j][k]>array2[i][j][k])
			       {
			  	        printf("\t The element of first array is greater than element in second array ");
			       }    
	 	          else
			       {
			  	        printf("\t The element for second array is greater than element in first array ");
			       }
		      }
	    }
     } 
/* Create one more ID character array and compare the two ID char arrays for values*/
/* Find the sum of all elements in an array*/
int sum1=0;
   for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k = 0;k<z;k++)
			 {
                sum1=sum1+array1[i][j][k];
		     }
          }
      }
   printf("\nThe sum of all elements in array1 is :- %d",sum1);
/* Find the maximum elements in an array*/
int max1;
   for(i=0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if (array1[i][j][k]>= max1)
				 {
                    max1=array1[i][j][k];
                 }
             }
         }
      }
   printf("Maximum element in the 1st 3D array is :- %d", max1);
