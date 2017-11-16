#include <stdio.h>
#include<stdlib.h>
#include "info.h" 
#define MAX 10 

int main( int argc, char const *argv[]) {
appInfoData("ejemplo de punteros", "10/10/2016");

    int cals[MAX] = {8, 9, 8, 8, 6, 7, 9, 8, 10, 10}; 
    int   *ptrCals; 

    printf("valor del primer elemento: %d\n", cals[0]);
    printf("dirección del primer elemento: %d\n", &cals[0]);
    printf("Dirección del primer elemento: %d\n", cals);

    ptrCals = cals; 

printf("valor del primer elemento: %d\n", *ptrCals); 
ptrCals++;
printf("valor del primer elemento: %d\n", *ptrCals); 
ptrCals++;
printf("valor del primer elemento: %d\n", *ptrCals); 

return 0;

}
