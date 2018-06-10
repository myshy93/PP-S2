#include <stdio.h>
#include <stdlib.h>

int suma_interval(int* v, int n, int start, int stop){
int s, aux, i;
s = 0;

if(start == stop)
    return v[start];

if(start > stop){
    aux = start;
    start = stop;
    stop = aux;
    }
for(i = start; i <= stop; i++)
    s = s + v[i];
return s;
}

int main()
{
    int i, n, start, stop;
    int* v;
    printf("n: ");
    scanf("%d", &n);
    printf("i: ");
    scanf("%d", &start);
    printf("j: ");
    scanf("%d", &stop);

    v = (int*)malloc(sizeof(int)*n);
    printf("Valorile vectorului: ");
    for(i = 0; i < n; i++)
         scanf("%d", &v[i]);
    printf("Suma: %d", suma_interval(v, n, start, stop));
    return 0;
}
