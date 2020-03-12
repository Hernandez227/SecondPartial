#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

	int a;
	int b;
	int c; 
	printf("Escribir un numero\n");
	scanf("%d",&a);
	printf("Escribe el segundo numero\n");
	scanf("%d",&b);
	printf("Escribe el tercer numero\n");
	scanf("%d",&c);

	if((a>b)&&(a>c)&&(c<b)){
	printf("El orden seria:\n");
	printf(" %d",a);
	printf("%d",b);
	printf("%d",c);
 	}else if((a>b)&&(a>c)&&(c>b)){
	printf("El orden es:\n");
	printf("%d %d %d",a,c,b);
	}else if((b>a)&&(b>c)&&(a>c)){
	printf("El orden es:\n");
	printf("%d %d %d",b,a,c);
	}else if((b>a)&&(b>c)&&(c>a)){
	printf("El orden es:\n");
	printf("%d %d %d",b,c,a);}
	else if((c>a)&&(c>b)&&(a>b)){
	printf("El orden es:\n");
	printf("%d %d %d", c, a, b);}
	else if((c>a)&&(c>b)&&(b>a)){
	printf("El orden es:\n");
	printf("%d %d %d", c, b, a);}


	return (0);
}
