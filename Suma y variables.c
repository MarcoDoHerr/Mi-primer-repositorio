#include<stdio.h>
#include<math.h>

float a, b, c; //Declaracion de variables
int a1, b1, c1;
int main()
{
	printf("Dame el \'primer\' numero:");
	scanf("%f",&a);
	
	printf("Dame el \'segundo\' numero:");
	scanf("%f",&b);
	
	printf("Suma\n");
	c= a + b; //Operacion matematica
	printf("\t%0.2f + %0.2f = %0.2f\n", a , b , c);
	
	printf("Resta\n");
	c= a - b; //Operacion matematica
	printf("\t%0.2f - %0.2f = %0.2f\n", a , b , c);
	
	printf("Multiplicacion\n");
	c= a * b; //Operacion matematica
	printf("\t%0.2f * %0.2f = %0.2f\n", a , b , c);
	
	printf("Division\n");
	c= a / b; //Operacion matematica
	printf("\t%0.2f / %0.2f = %0.2f\n", a , b , c);
	
	printf("Modulo\n");
	a1 = a;
	b1 = b;
	c1= a1 % b1; //Operacion matematica
	printf("\tEl modulo de %d / %d = %d\n", a1 , b1 , c1);
	
	printf("Raiz Cuadrada\n");
	c= sqrt(a);
	printf("\tLa Raiz Cuadrada de %f es: %f\n", a, c);
	c= sqrt(b);
	printf("\tLa Raiz Cuadrada de %f es: %f\n", b, c);
	return 0;
}

