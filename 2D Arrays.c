#include<stdio.h>
int main(){
   /* 2D array declaration*/
   // Syntax : type array_name[array_size_firstdimension][array_size_seconddimension];
   int twod_array[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for twod_array[%d][%d]:", i, j);
         scanf("%d", &twod_array[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", twod_array[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

/* Insert the elements in all the odd numbered position of the array*/

int oddnos[2][3];

   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(i%2!=0 && j%2!=0){
            printf("Enter value for the array:", i, j);
            scanf("%d", &oddnos[i][j]);
            
         }
      }
      
   }
/* Remove the elements from all the even numbered position of the array*/

int ea[2][3];

   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(i%2==0 && j%2==0){
            printf("Enter value for twod_array[%d][%d]:", i, j);
            scanf("%d", &ea[i][j]);
            
         }
      }
      
   }

/* Remove the elements from all the odd numbered position of the array*/

   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(j%2!=0){
            for(int m = j-1;m<3;m++){
               twod_array[i][m] = twod_array[i][m+1];
            }
            
         }
      }
      
   }

/* Insert the elements in all the even numbered position of the array*/

    for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(j%2==0){
            for(int m = j-1;m<3;m++){
               twod_array[i][m] = twod_array[i][m+1];
            }
            
         }
      }
      
   }

/* Search the given element in the array and print it's position*/

   int des;

   printf("element to search for =");
   scanf("%d", &des);
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j] == des){
            printf("Element Found in %d,%d",i,j);
         }
      }
      
   }

/* Check whether the array has non zero values in a position*/

    int s1,s2;
    
    printf("position =");
    scanf("%d,%d", &s1,&s2);
    if(twod_array[s1][s2] != 0)
    {
        printf("Non Zero Value Is Present\n");
    }
    else
    {
        printf("Zero Value Is Present\n");
    }

/* Find the sum of all elements in an array*/

   int c = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         c += twod_array[i][j];
      }
      
   }
   printf("sum is %d\n",c); 

/* Find the maximum elements in an array*/

   int max = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j]>max){
            max = twod_array[i][j];
         }
      }
      
   }
   printf("max element is %d\n",max);

/* Find the minimum elements in an array*/
   int min = 0;
   for ( int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if(twod_array[i][j]< min){
            min = twod_array[i][j];
         }
      }
      
   }
   printf("min element is %d\n",min);

   return 0;
}
/* Create one more ID array and compare the two ID arrays for values*/
/* Create one more ID character array and compare the two ID char arrays for values*/