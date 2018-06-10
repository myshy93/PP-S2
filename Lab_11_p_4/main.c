#include <stdio.h>
#include <stdlib.h>

int main()
{
int **matrix, **no_diag;
int n, j, i, k, q;
k = q = 0;

printf("n: ");
scanf("%d", &n);

matrix = malloc(sizeof(int*) * n);
no_diag = malloc(sizeof(int*) * n);

printf("Matrice: \n");

for(i = 0; i < n; i++){
    matrix[i] = (int*)malloc(sizeof(int) * n);
    no_diag[i] = (int*)malloc(sizeof(int) * n-1);
}

for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
        scanf("%d", &matrix[i][j]);

for(i = 0; i < n; i++){
    q = 0;
    for(j = 0; j < n; j++){
        if(i != j){
            no_diag[i][q] = matrix[i][j];
            q++;
        }
    }
}
printf("Mtricea fara diagonala:\n");
for(i = 0; i < n; i++){
    for(j = 0; j < n-1; j++)
        printf("%d ", no_diag[i][j]);
    printf("\n");
}
free(matrix);
return 0;
}
