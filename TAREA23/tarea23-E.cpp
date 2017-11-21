#include<stdio.h> 
#include<string.h> 
#include "alumnos.h" 
#include"info.h"
#define MAX 3 

int main (int argc, char *argv []) { 
appInfoData("Ejercicio de estructuras", "21/11/2017");


       ALUMNO lista[MAX];

        int j=0;
        for(j=0; j<MAX; j++) {
              printf("Datos del alumno %d\n", j+1);
              lista[j]=nuevoAlumno(); 
        }

        for(j=0; j<MAX; j++) {
               imprimeAlumno(lista[j]);

        }

        return 0;

}
