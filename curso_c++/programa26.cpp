#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int o,p,opc;
	float num1,num2,suma,resta;
	while(opc!=3)
	{
		system("cls");
		printf("1.-AREA DE UN TRIANGULO");
		printf("2.-AREA DE UN RECTANGULO");
		ptintf("3.-salir");
		printf("ingrese la opcion deseada");
		scanf("%f",opc);
		
		switch(opc)
		{
			case 1:
				system("cls");
				printf("AREA DE UN TRIANGULO");
				getch();
				break;
				case 2:
					system("cls");
					printf("AREA DE UN RECTANGULO");
					getch();
					break;
					case 3:
						systam("cls");
						printf("EL RPOGRAMA A TERMINADO");
						break;
						deafult:
							system("cls");
							printf("OPCION NI VALIDA... INTENTE NUEVAMENTE");
							getch();
							break;
		}
	}
	
}
