#include <stdio.h>
#include <stdlib.h> 
#include "info.h" 

int main( int argc, char const *argv[]) {
appInfoData("ejemplo de punteros", "10/10/2016"); 

int a;
a=10;
int *puntero; 
puntero=&a;

printf("%d\n", *puntero); 

return 0;

}
