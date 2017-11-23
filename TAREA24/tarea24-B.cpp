#include<stdio.h>
#include<conio.h>
#include"info.h"
struct registro {
	int cuenta;
	char nombre[30];
	int balance;
};
typedef struct registro Cuenta;


int main (){
	appInfoData("ejemplo de archivos", "22/11/2017");
	FILE *cfPtr;
	Cuenta c;
	int j=0;
if((cfPtr=fopen("cuentas.txt", "w"))==NULL){
	printf("no se abrió el archivo");
}else{
printf("dame la cuenta:");
scanf("%d", &c.cuenta);

printf("Dame el nombre;");
fflush(stdin);
gets(c.nombre);

printf("Dame el balance:");
scanf("%d", &c.balance);
for(j=0; j<10; j++){
	fprintf(cfPtr, "%d%s%d\n", c.cuenta, c.nombre, c.balance);

  }
 
 }
 
 fclose(cfPtr);
 getch();
 return 0;
}
