//calcula la media de dos numeros
#include<stdio.h>
#include<conio.h>
int calcula_media(int, int); //declaracion
int main()
{
	int numero1,numero2;
	printf("introdusca el primer numero:");
	scanf("%d",&numero1);
	printf("introdusca el segundo numero:");
	scanf("%d",&numero2);
	
	int,resultado =  calcula_media(numero1, numero2);
	printf("la media de %d y %d",numero1, numero2);
}

	int calcula_media(int num1, int num2)
{
	int media;
	media=(num1+num2)/2;
	return media;
	}	

