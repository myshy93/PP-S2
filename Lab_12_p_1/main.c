#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int lenght;
    int* pointer;
}Vector;

Vector el_poz(int* v, int n){
    Vector w;
    int k, i;
    k = 0;

    for(i = 0; i < n; i++)
        if(v[i] > 0)
            k++;

    w.lenght = k;
    w.pointer = (int*)malloc(sizeof(int) * k);

    k = 0;
    for(i = 0; i < n; i++)
        if(v[i] > 0){
            w.pointer[k] = v[i];
            k++;
        }
    return w;
}

void read(int* v, int n){
    int i;
    printf("Introduceti valorile vectorului:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
}

void multiply(int* v, int n, int x){
    int i;
    for(i = 0; i < n; i++)
        v[i] =  v[i] * x;
}

void sort(int* v, int n){
    int i, aux, j;
    for(i = 0; i < n-1; i++)
    for(j = i+1; j < n; j++)
        if(v[i] > v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
}


void display(int* v, int n){
    int i;
    printf("Vectorul final:\n");
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
}
int main()
{
    int *vector, *vector_pozitiv;
    int n, n_pozitive;
    Vector w;

    printf("n: ");
    scanf("%d", &n);
    vector = (int*)malloc(sizeof(int) * n);
    read(vector, n);
    multiply(vector, n, -1);
    w = el_poz(vector, n);
    n_pozitive = w.lenght;
    vector_pozitiv = w.pointer;
    sort(vector_pozitiv, n_pozitive);
    multiply(vector_pozitiv, n_pozitive, -1);
    display(vector_pozitiv, n_pozitive);
    free(vector);
    free(vector_pozitiv);
    return 0;
}
