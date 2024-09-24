#include<stdio.h>
#include<conio.h>
int main()
{
	int opc;
	float num1,num2,num3,suma,resta;
	while (opc!=3)
	{
		printf("1.-suma de dos numeros");
	    printf("2.-resta de dos numeros");
	    printf("3.-salir");
	    printf("igrese la opcion deseada");
	    scanf("%d",&opc);
	    switch(opc)
	    {
	    	case 1:
	    		printf("ingrese el primer numero:");
	    		scanf("%f",&num1);
	    		printf("ingresa el segundo numero:");
	    		scanf("%f",&num2);
	    		suma=num1+num2;
	    		printf("la suma es:%f",suma);
	    		getch();
	    		break;
	    		case 2:
	    		printf("ingresa el primer numero:");
	    		scanf("%f",&num1);
	    		printf("ingresa el segundo numero:");
	    		scanf("%f",&num2);
	    		resta=num1-num2;
	    		printf("la resta es:%f",resta);
				getch();
				break;
				case 3:
				printf("el programa a terminado:");
	    		break;
	    		default:
	    		printf("opcion no valida... intente nuevamente");
	    		getch();
	    		break;
		}
	}
}
