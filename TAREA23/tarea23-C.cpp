#include<stdio.h>
#include<string.h> 
#include "alumnos.h" 
#include"info.h" 

int main (int argc, char *argv[])  {
	appInfoData("ejemplo de estructuras con fuonciones", "21/11/2017");
  
              ALUMNO var1;
      
              var1=nuevoAlumno();

       printf("Edad:%d nombre:%s", var1.edad, var1.nombre);
    
          return 0;
}

