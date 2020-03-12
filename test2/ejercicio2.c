#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){


if((argc-1) % 2!=0){

	return 0;
}


float resultado_vectores=0;
int i;

for(i=1; i<=argc/2; i++){

float A= atof(argv[i]);
float B= atof(argv[(argc/2)+i]);
resultado_vectores= resultado_vectores+(A*B);

}

printf("El resultado escalar de los vectores es:%.2f\n",resultado_vectores);


}
