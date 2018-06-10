#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, *v_poz;
    int i, j, n, k, max;
    max = j = k = 0;

    printf("n: ");
    scanf("%d", &n);

    v = (int*)malloc(sizeof(int) * n);
    printf("Elementele vectorului:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(v[i] > max)
            max = v[i];
    }
    for(i = 0; i < n; i++)
        if(v[i] == max)
            j++;

    v_poz = (int*)malloc(sizeof(int) * j);

    for(i = 0; i < n; i++){
        if(v[i] == max){
            v_poz[k] = i;
            k++;
        }
    }

    printf("Maximul vectorului se gaseste pe pozitiile: ");
    for(i = 0; i < j; i++)
        printf("%d ", v_poz[i]);

    free(v);
    free(v_poz);
    return 0;
}
