#include<stdio.h>
#include<iostream>


int main() {
	int a;
	int b;
	int c; 
    

	
	printf("Dame un numero a:\n");
	scanf("%f",&a);
	printf("Dame otro numero b:\n");
	scanf("%f",&b);
	printf("Ahora dame un numero c:\n");
	scanf("%d",&c);
	
	 if (a>b&&a>c){
	 	printf("a es el numero mayor");
	 	 if(b>a&&b>c){
            printf("b es el numero mayor\n"); 
        }
			else{
			}
        
          if(c>a&&c>b) {
            printf("c es el numero mayor\n");
    }
			else{
			}
        
    
    
       
    
    
    if (a<b&&a<c){
            printf("a es el numero menor\n");
        if (b<a&&b<c){
                printf("b es el numero menor\n");
            }
            else{
			}
            if(c<b&&c<a){
            printf("c es el numero menor\n");
            }
            else{
			}
        
        }
    }
		else{
    	printf("Los numeros son iguales\n");
	}
        
    
    
    
    printf("fin del programa\n");
}


