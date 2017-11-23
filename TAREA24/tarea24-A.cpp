#include<stdio.h>
#include"info.h"
using namespace std;



int main (int agrc, char agrv[])  {
	appInfoData("ejemplo de archivos", "22/11/2017");
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat", "wb");
	
	if(ptrArchivo==NULL) {
		printf("Errorcal abrir archivo\n");
}else{
	
	printf("dame el dato a guardar en el archivo:");
	scanf("%d", &dato);
	
	
	fprintf(ptrArchivo, "%d\n", dato);
    fprintf(ptrArchivo, "%d\n", ++dato);
    fprintf(ptrArchivo, "%d\n", ++dato);
    
    fclose(ptrArchivo);
}

    return 0;
    
}
