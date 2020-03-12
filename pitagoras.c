#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float distance_one(float x, float y){   //Se esta declarando las varibles que se van a usar

	return sqrt(x*x+y*y); //En este apartado hace el pitagoras 
}


int main(int argc, char** argv){


	float num1=atof(argv[1]);
	float num2=atof(argv[2]);
	printf("the distance is %f\n",distance_one(num1,num2));

	return(0);

}
