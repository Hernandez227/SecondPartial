#include <stdio.h>
#include <stdlib.h>

int main(){
int x = 0; 
printf("%p\n", (void *)&x);

int *px, not_a_pointer;
px = &x;
printf("%p\n", (void *)px);
printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer));

printf("%d\n", *px);

(*px)++;
printf("%d\n", *px);
printf("%d\n", x);

(*px)++;
printf("%d\n", *px);
printf("%d\n", *px);

int x_array[20];
int xx;

for(xx= 0; xx < 20; xx++){

	x_array[xx] = 20 - xx;
	printf("%d\n", x_array[xx]);
}

int* x_ptr = x_array;

int arr[10];
int (*ptr_to_arr)[10] = &arr;
char otherarr[] = "foobarbazquirk"; 
int arraythethird[10];
int *ptr =arraythethird; 
printf("%zu, %zu\n", sizeof(arraythethird), sizeof(ptr));
printf("&d\n" , *(x_ptr + 1));
printf("%d\n", x_array[1]);


}
