#include <stdio.h>
#include <stdlib.h>

int aparitii(int n, int c){
int k, ap;
ap = 0;
while(n != 0){
    k = n % 10;
    n = n / 10;
    if(k == c)
        ap++;
}
return ap;
}


int main()
{
int n, i;

printf("n: ");
scanf("%d", &n);

for(i = 0; i < 10; i++)
    if(aparitii(n, i))
        printf("Numarul de aparitii a cifrei %d: %d.\n", i, aparitii(n, i));
return 0;
}
