#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, *v_poz, *v_neg;
    int n, i, k, j, n_poz, n_neg;
    n_neg = n_poz = 0;
    k = j = 0;

    printf("n: ");
    scanf("%d", &n);

    v = (int*)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++){
         scanf("%d", &v[i]);
         if(v[i] < 0)
            n_neg++;
         if(v[i] > 0)
            n_poz++;
    }
    v_neg = (int*)malloc(sizeof(int) * n_neg);
    v_poz = (int*)malloc(sizeof(int) * n_poz);

    for(i = 0; i < n; i++){
        if(v[i] < 0){
            v_neg[k] = v[i];
            k++;
        }
        if(v[i] > 0){
            v_poz[j] = v[i];
            j++;
        }
    }
    printf("\nVerctor initial:\n");
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\nVerctor negativ:\n");
    for(i = 0; i < n_neg; i++)
        printf("%d ", v_neg[i]);
    printf("\nVerctor pozitiv:\n");
    for(i = 0; i < n_poz; i++)
        printf("%d ", v_poz[i]);

    free(v);
    free(v_poz);
    free(v_neg);
    return 0;
}
