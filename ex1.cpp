// IMC
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//declaração das variaveis
	float peso;
	float altura;
	float imc;
	
	//entrada
	printf ("digite a altura:");
	scanf ("%f",&altura);
	printf ("digite o peso");
	scanf ("%f",&peso);
	
	//processamento
	imc=peso/(altura*altura);
	
	//criticar para saber em que escala 
	// do imc se encontra
	
	if (imc<=18.4)
{
	printf ("abaixo do peso!!!");
	printf ("parabens");
}
else if (imc>=18.5&&imc<=24.9)
{
	printf ("peso normal!!");
	printf ("mantiguinha");
}
else if (imc>=25&&imc<=29.9)
{
	printf ("peso sobre");
	printf ("cuidado!!!");
}
else if (imc>=30&&imc<=39.9)
{
	printf ("obesidade");
}
else
{
	printf ("diego");
}
}