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
	
	printf("\nSuma\n");
	c= a + b; //Operacion matematica
	printf("\t%0.2f + %0.2f = %0.2f\n", a , b , c);
	
	printf("\nResta\n");
	c= a - b; //Operacion matematica
	printf("\t%0.2f - %0.2f = %0.2f\n", a , b , c);
	
	printf("\nMultiplicacion\n");
	c= a * b; //Operacion matematica
	printf("\t%0.2f * %0.2f = %0.2f\n", a , b , c);
	
	printf("\nDivision\n");
	c= a / b; //Operacion matematica
	printf("\t%0.2f / %0.2f = %0.2f\n", a , b , c);
	
	printf("\nModulo\n");
	a1 = a;
	b1 = b;
	c1= a1 % b1; //Operacion matematica
	printf("\tEl modulo de %d / %d = %d\n", a1 , b1 , c1);
	
	printf("\nRaiz Cuadrada\n");
	c= sqrt(a);
	printf("\n\tLa Raiz Cuadrada de %0.2f es: %0.2f\n", a, c);
	c= sqrt(b);
	printf("\n\tLa Raiz Cuadrada de %0.2f es: %0.2f\n", b, c);
	
	printf("\nPotencia\n");
	c= pow(a,b); //Operacion matematica
	printf("\t%0.2f Elevado a la potencia %0.2f = %0.2f\n", a , b , c);
	c= pow(b,a); //Operacion matematica
	printf("\t%0.2f Elevado a la potencia %0.2f = %0.2f\n", b , a , c);
	
	printf("\nJerarquia de Operaciones\n");
	c= (a/b)*(a+b);
	printf("\t%0.2f / %0.2f * %0.2f + %0.2f= %0.2f\n", a , b , a , b, c);
	
	return 0;
}

