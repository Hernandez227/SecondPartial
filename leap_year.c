// Programa que demuestra si un año es bisiesto

#include<stdlib.h>
#include<stdio.h>

int main(){

	int numero;
	printf("Introduzca el año que desea comprobar\n");
	scanf("%d", &numero);

	if(numero%4==0 && numero%100!=0 || numero%400==0){
	printf("El año es bisiesto\n");
	}else printf("El año no es bisiesto\n");


}
