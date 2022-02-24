#include<stdio.h>
int main()
{
   /* Single Dimensional - 1D array declaration*/
   // Syntax : type array_name[array_size];
   int oned_array[5];
   /*Counter variables for the loop*/
   int i ;
   for(i=0; i<5; i++) 
   {
   	printf("Enter value for oned_array[%d]:", i);
    scanf("%d", &oned_array[i]);
    }

   //Displaying array elements
   printf("Single Dimensional array elements:\n");
   for(i=0; i<5; i++) 
   {
    printf("%d ", oned_array[i]);
	}
    return 0;
}

// Insert one element into the array 
 int element;
   printf("\nEnter the element to be inserted in array1[%d] :- ",num);
   scanf("%d",&element);
   if(num==10)
     {
     	printf("\nArray is full . No Extra element can be added!!");
     }
    else
     {
     	array1[num]=element;
     	printf("\nSingle Dimensional array elements after addition of element[0-%d]:- ",num);
        for(i=0; i<=num; i++) 
         {
            printf("%d ",array1[i]);
         }
        num=num+1;
	 }
// Insert the given number of elements into the array 

/* Remove the duplicate elements in an array*/
int temp=num;
	for (i = 0;i<num;i ++)  
     {  
	    for (j=i+1;j<num;j++)  
         {  
            if(array1[i]==array1[j])            
              {  
                for (k=j;k<num-1;k++)           
                  {  
                    array1[k]=array1[k+1];  
                  }  
                num--;                        
                j--;      
             }  
        }  
    } 
/* Remove one element from the array */
 if(choice==1)
      {
      	  printf("\nEnter the element to be deleted from the array :- ");
      	  scanf("%d",&num2);
      	  for(i=0;i<num;i++)
      	    {
      	    	if(array1[i]==num2)
      	    	   {
      	    	   	  index=i;
      	    	   	  break;
				   }
			}
		  if(index!=-1)
		    {
		    	for(i=index;i<num;i++)
		    	  {
		    	  	 array1[i]=array1[i+1];
				  }
				  num=num-1;
/* Search the given element in the array and print it's position*/
 int num3;
	printf("\nEnter the element to be searched from the array :- ");
    scanf("%d",&num3);
      	  for(i=0;i<num;i++)
      	    {
      	    	if(array1[i]==num3)
      	    	   {
      	    	   	  printf("\nThe position of %d in the array[1-%d] is :- %d",num3,num,i+1);
				   }
			}
/* Check whether the array has non zero values in a position*/
int pos;
	printf("\nEnter the position to check the element is a non zero value [1-%d]:- ",num);
	scanf("%d",&pos);
	if(array1[pos-1]!=0)
	  {
	  	 printf("\nThe Element at postion %d is %d and it is a non zero value !",pos,array1[pos-1]);
	  }
	else
	  {
	  	 printf("\nThe Element at postion %d is %d and it is a zero value !",pos,array1[pos-1]);
	  }
/* Create one more ID array and compare the two ID arrays for values*/
    int array2[10];
    for(i=0;i<num;i++) 
     {
   	  printf("\nEnter value for 1 D array2[%d]:- ", i);
      scanf("%d", &array2[i]);
     }
    for(i=0;i<num;i++)
        {
        	printf("\n array1[%d] = %d and array2[%d] = %d",i,array1[i],i,array2[i]);
        	if(array1[i]==array2[i])
        	  {
        	  	 printf("\t They are equal ");
			  }
			else if(array1[i]>array2[i])
			  {
			  	 printf("\t The element of first array is greater than element in second array ");
			  }
			else
			  {
			  	 printf("\t The element for second array is greater than element in first array ");
			  }
		}
/* Create one more ID character array and compare the two ID char arrays for values*/
/* Find the sum of all elements in an array*/
 int sum1=0;
   for(i=0;i<num;i++)
     {
     	 sum1=sum1+array1[i];
     	
	 }
   printf("\nThe sum of elements in array1 is :- %d",sum1);
  
/* Find the maximum number of elements in an array*/
/* Find the minimum number of elements in an array*/

