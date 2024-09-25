/* Write a function to add two matrix */

#include <stdio.h>

// function defination 

void addMatrix( int rows, int col, int mat1[][col], int mat2[][col], int result[][col]){
    for(int i = 0; i < rows; i++)
     for(int j = 0; j < col; j++)
      result[i][j] = mat1[i][j] + mat2[i][j];

}

int main(){
   //To get the number of rows and coloumns
  int rows, col;
     
     printf("Enter number of rows: ");
     scanf("%d",&rows);
     printf("Enter number of col: ");
     scanf("%d",&col);

   // To get the elements of the two matrices
   int mat1[rows][col], mat2[rows][col], result[rows][col];

     printf("Enter the elements of the first matrix: ");
     for(int i = 0; i < rows; i++)
       for(int j = 0; j < col; j++) 
         scanf("%d",&mat1[i][j]);

     printf("Enter the elements of the second matrix: ");
     for(int i = 0; i < rows; i++)
       for(int j = 0; j < col; j++) 
         scanf("%d",&mat2[i][j]); 

  // Calling the function to add the matrix
    addMatrix(rows, col, mat1, mat2, result);

  // To print the resultant matrix
   printf("The resultant matrix is:\n");
   for(int i = 0; i < rows; i++){
       for(int j = 0; j < col; j++) {
         printf("%d\t",result[i][j]); 
       }
       printf("\n");
   }

   return 0;
}