#include <stdio.h>
#include <stdlib.h>

int prim(int n){
int i;
for(i = 2; i <= n/2; i++)
    if(n%i == 0)
        return 0;
return 1;
}


int main()
{
int n, k;

printf("n: ");
scanf("%d", &n);
k = n + 1;
while(!prim(k))
    k++;
printf("Cel mai mic numar prim strict mai pare decat %d este %d", n, k);
return 0;
}
