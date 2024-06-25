//3D matrix
#include <stdio.h>
int main(){
    int sum = 0;
    int matrix[2][3][3] = { {{1,2,3}, {4,5,6}},{{6,5,4},{8,9,7}},{{5,2,4},{6,4,8}} }; 
    
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                 printf("Matrix[%d][%d] = %d\n", i,j,k, matrix[i][j][k]);
            sum = sum + matrix[i][j][k];
            }
           
        }
    }
    printf("\n The sum is %d", sum);
    //matrix[0][0]
    //matrix[0][1]
    
    return 0;
}