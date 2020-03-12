#include <stdio.h>
#include <string.h>
#include <math.h>


int less_two_int(int x, int y){
	return x-y;}

int main(int argc, char** argv){

	int i;
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	for(i=0; i<argc; i++){
	printf("argv[%d] is %s\n", i, argv[i]);}


	printf("the substraction is %d\n", less_two_int(num1,num2));
	return(0);

}


