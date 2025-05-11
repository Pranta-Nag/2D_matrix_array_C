//2D array / Matrix array //
#include<stdio.h>

int main(){

    int i,j;
    int rows,cols;

    printf("Enter the Rows Number: ",rows);
    scanf("%d",&rows);

    printf("Enter the columns number: ",cols);
    scanf("%d",&cols);

    int A[10][10], B[10][10], C[10][10], D[10][10];

    //input A matrix
    printf("\nStart A matrix: \n");
    for(i=0;i<rows;i++){
        printf("Enter %d values for row %d: ", cols, i);
        for(j=0;j<cols;j++){
            scanf("%d",&A[i][j]);
        }
    }
    //input B matrix
    printf("\nStart B matrix: \n");
    for(i=0;i<rows;i++){
        printf("Enter %d values for row %d: ", cols, i);
        for(j=0;j<cols;j++){
            scanf("%d",&B[i][j]);
        }
    }

    //Print A matrix
    printf("\nThe A matrix is: \n");
     for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     //Print B matrix
    printf("\nThe B matrix is: \n");
     for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //Addition A+B matrix
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
          C[i][j] = A[i][j] + B[i][j];
        }
    }

     //Print C matrix
    printf("\nA + B : \n");
     for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
   
    //Subtraction A+B matrix
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
          D[i][j] = A[i][j] - B[i][j];
        }
    }

     //Print D matrix
    printf("\nA - B : \n");
     for(i=0;i<rows;i++){
        printf("\t");
        for(j=0;j<cols;j++){
            printf("%d ",D[i][j]);
        }
        printf("\n");
    }

    return 0;
}