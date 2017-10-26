#include<stdio.h>
#include<iostream>


int main() {
	int a;
	int b;
	int c; 
 
	
	printf("Dame un numero a:");
	scanf("%f",&a);
	printf("Dame otro numero b:");
	scanf("%f",&b);
	printf("Ahora dame un numero c");
	scanf("%d",&c);
	
	 if (a>b&&a>c){
	 	printf("a es el numero mayor");
	 	 if(b>a&&b>c){
            printf("b es el numero mayor"); 
        }
        else {
            printf("c es el numero mayor");
        }
        
       } 
    
    else {
        printf("Todos los numeros son iguales");
        
            }
    if (a<b&&a<c){
            printf("a es el numero menor");
        if (b<a&&b<c){
                printf("b es el numero menor");
            }
            else{
            printf("c es el numero menor");
        }
        
        }
    printf("fin del programa");
}
