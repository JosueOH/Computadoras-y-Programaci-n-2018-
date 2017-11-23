#include<stdio.h>
#include"info.h"


struct registro {
	int cuenta;
	char nombre[30];
	int balance;
	
};


int main (){
	appInfoData("ejemplo de archivos", "22/11/2017");
	
	
	
	        FILE *cfPtr;
	        struct registro CuentaR;
	        
	        if((cfPtr = fopen ("cuentas.dat", "r"))==NULL){
	        	printf("no se abrió el archivo\n");
	        }else{
              printf("%-6s%-16s%10s\n", "No cuenta", "Nombre", "Balance");
			  
			    while (!feof (cfPtr)){
			    	fread(&CuentaR.balance, sizeof(struct registro), 1,cfPtr);
			    	
			    	if(CuentaR.cuenta !=0){
			    		printf("%-6d%-16s%-10d\n", CuentaR.cuenta, CuentaR.nombre, CuentaR.balance);
					}
			    	
			    }	        	
			}
}
