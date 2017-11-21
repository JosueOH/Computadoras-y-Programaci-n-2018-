#include<stdio.h>
#include<string.h>
#include"info.h" 
struct      alumnos 
         {     
                 int edad; 
                 char nombre [60]; 
                 char genero;
                 char carrera [25];
                 char nCuenta [10]; 

           };

typedef struct alumnos ALUMNO;

int main (int argc, char *argv[])  {
	appInfoData("ejemplo de estructuras", "21/11/2017");

       ALUMNO var1; 

       printf ("introduce la edad:");
       scanf("%d", &var1.edad);

       printf("introduce el nombre:");
       fflush(stdin); 
       gets(var1.nombre);

       printf("Edad:%d nombre:%s", var1.edad, var1.nombre);

       return 0;

}
