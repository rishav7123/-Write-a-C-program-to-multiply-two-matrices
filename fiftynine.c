// Write a C program to multiply two matrices
#include<stdio.h>
int main(){
    int i,j,k;
    int n = 2;
    int mat1[2][2] = {{1,2},{3,5}};
    int mat2[2][2] = {{4,6},{4,7}};
    int mul[2][2] = {0};

    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            for(k = 0; k<n; k++){
            mul[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
};
    printf("Multiplication of two matrices are: \n");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}