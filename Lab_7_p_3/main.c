#include <stdio.h>
#include <stdlib.h>

void zero_to_end(int* v, int n){
int i, j, aux;
for(i = 0; i < n-1; i++)
    for(j = i; j < n; j++)
        if (v[i] < v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            }
}

int main()
{
    int v[100], n, k, i;
    printf("n: ");
    scanf("%d", &n);
    printf("k: ");
    scanf("%d", &k);
    for(i = 0; i < n; i++)
         scanf("%d", &v[i]);
    zero_to_end(v, n);
    if(v[k-1] != 0)
        for(i = 0; i < k; i++)
            printf("%d\n", v[i]);
    else
        printf("NU EXISTA");
    return 0;
}

