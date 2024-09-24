#include<stdio.h>//declaracion de variables
#include<conio.h>
int  main()//inicio de programa
{
	int x,calif,suma,promedio;//declaracion de variables tipo flotante
	x=1;//ejecutar x
	printf("PROGRAMA QUE CALCULE EL PROMEDIO DE 10 CALIFICACIONES");//mostrar en pantalla
	printf("PROGRAMADOR: Garcia Rendon Rodrigo Aner");//mostrar en pantalla
	while(x<=10)//condicion repetitiva
	{
		printf("ingrese la calificacion:");//mostrar en pantalla
		scanf("%d",&calif);//leer y guardar calif en memoria
		suma=suma+calif;//ejcutar suma
		x=x+1;
	}
	promedio=suma/10;//ejecutar promedio
	printf("el promedio es:%d",promedio);//mostrar en pantalla
	getch();//pausado de pantalla
}//fin de programa
