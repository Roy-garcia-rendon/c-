#include<stdio.h>//declaracion de varaibles
#include<conio.h>
int main()//inicio de programa
{
	int x;//declaracion de variables tipo flotante
	x=100;//ejcutar x
	printf("PROGRAMA QUE ESCRIBA LOS NUMEROS DEL 100 AL 1");//mostra en pantalla
	printf("\nPROGRAMADOR: GARCIA RENDON RODRIGO ANER-");//mostrar en pantalla
	while(x>=1)//condicion repetitiva
	{
		printf("%d",x);//mostrar en pantalla
		printf(" - ");//mostrar en pantalla
		x=x-1;
	}
	getch();//pausado de pantalla
}//fin de program
