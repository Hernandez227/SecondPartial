#include<stdio.h>
#include<stdlib.h>

float suma(float x, float y){
	float resultado;
	resultado= x+y;
	return resultado;
}
float resta(float x, float y){
	float resultado;
	resultado=x-y;
	return resultado;
}
float multiplicacion(float x, float y){
	float resultado;
	resultado=x*y;
	return resultado; 
}
float division(float x, float y){
	float resultado;
	resultado= x/y;
	return resultado;
}
const char *operacion= NULL;
int main( int argc, const char *argv[]){
	
	operacion=argv[1];
	float a=atof(argv[2]);
	float b=atof(argv[3]);
	switch(*operacion){
		case '+':
				printf("Resultado: %.2f\n", suma(a,b));
				break;
		case '-':
				printf("Resultado: %.2f\n", resta(a,b));
				break;
		case '*':
				printf("Resultado: %.2f\n", multiplicacion(a,b));
				break;
		case '/':
				printf("Resultado: %.2f\n", division(a,b));
				break;
		default: 
			printf("Digita un numero porfavor\n");
			break;	
		
	}		
	
}
