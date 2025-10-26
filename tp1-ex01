// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n;
    printf("Enter size of square matrix (n * n):");
    scanf("%d",&n);
    int arr[n][n],i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
      printf("\nMatrix before swapping lower and upper triangles:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\nMatrix after swapping lower and upper triangles:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
