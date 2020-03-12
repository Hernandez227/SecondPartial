#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

	float suma_de_numeros=0;
	float minimo_valor=0;
	float maximo_valor=0;
	float promedio_de_valores=0;
	int cantidad_de_numeros=0;
	int i;
for(i=1;i<argc;i++){
float numero=atof(argv[i]);
cantidad_de_numeros ++;
suma_de_numeros=suma_de_numeros+numero;

promedio_de_valores=suma_de_numeros/cantidad_de_numeros;

if(i==1){
minimo_valor=numero;
maximo_valor=numero;
}else if(numero>maximo_valor){
maximo_valor=numero;
} if (numero<minimo_valor){
minimo_valor=numero;
}
}

printf("El valor minimo de los valores ingresados es: %.2f\n",minimo_valor);
printf("El valor maximo de los valores ingresados es: %.2f\n",maximo_valor);
printf("El promedio de los valores ingresados es: %.2f\n",promedio_de_valores);

return (0);
}
