 #include<stdio.h>
 #include<math.h>
 #define PI 3.1416
 
 int main(){
 	int r;
	float per, a;
	printf("Introduce radio (entero): ");
	scanf("%d", &r);
	per=(PI*2)*r;
	a= PI * (pow(r,2));
 	printf("\nLa longitud de la circunferencia es: %0.2f\n", per);
 	printf("\nEl area del circulo es %0.2f\n", a );
 }
