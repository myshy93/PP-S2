#include <stdio.h>
#include <stdlib.h>

int main()
{
int **matrix;
int n, j, i;

printf("n: ");
scanf("%d", &n);

matrix = malloc(sizeof(int*) * n);
for(i = 0; i < n; i++){
    matrix[i] = (int*)malloc(sizeof(int) * i+1);
    for(j = 0; j <= i; j++ )
        matrix[i][j] = j+1;
}

for(i = 0; i < n; i++){
    for(j=0; j <= i; j++)
        printf("%d ", matrix[i][j]);
    printf("\n");
}
free(matrix);
return 0;
}
