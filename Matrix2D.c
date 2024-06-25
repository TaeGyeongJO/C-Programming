//2D matrix
#include <stdio.h>
int main(){
    int sum = 0;
    int matrix[2][3] = { {1,2,3}, {4,5,6} }; 
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Matrix[%d][%d] = %d\n", i,j, matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    printf("The sum is %d", sum);
    //matrix[0][0]
    //matrix[0][1]
    
    return 0;
}