#include<stdio.h>
using namespace std;

void fnAltoCuadro(){
	printf("+\n");
}

void fnAnchoCuadro() {
	printf("+");
}

int main (int argc, char *argv [] ){
	
	int j=0;
	
	for(j=1; j<=10; j=j++){ 
     fnAltoCuadro ();
     
    for(j=1; j<=10; j=j++){ 
     fnAnchoCuadro ();
     }
}
}
