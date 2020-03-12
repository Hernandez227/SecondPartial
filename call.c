#include <stdio.h>
#include <stdlib.h>
void inc_count(int *count_ptr){
	(*count_ptr)++;
}

void swapTwoNumbers(int *a, int *b){

	int temp= *a;
	*a = *b;
	*b = temp;
}

int main(){

	int x=10, y=5;

	int count=0; //Number of times through
	while(count < 10){
	inc_count(&count);
	printf("%d\n",count);
	}



	swapTwoNumbers(&x,&y);	
	printf("%d\n %d\n", x, y);
	return (0);
}


