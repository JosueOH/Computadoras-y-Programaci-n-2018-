#include<stdio.h>
int main()
   {          
          int a,b,c;
          printf("introduzca el primer numero:  ");
          scanf("%d" ,&a);
          printf("introduzca el segundo numero: ");
          scanf("%d" ,&b); 
          printf("introduzca el tercer numero: ");
          scanf("%d" ,&c);
          
   if   (a<b && a<c){
        printf("el primer numero es el menor");}
        else{ 
        if(b<a && b<c){ 
        printf("el segundo numero es el menor");
		}
		else{
			printf("el numero menor el tercero");
		}
	}
printf("fin del programa");
}
