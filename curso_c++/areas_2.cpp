#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
int main()
{
	int opc,nl,x,f;
	float perimetro,area,volumen,base,altura,lado,apotema,r,dm,D,d,basem,suma;
	system("color 70");
	x=1;
	while(opc!=4)
	{
		system("cls");
		gotoxy(41,2);printf("1.calcular area");
		gotoxy(41,3);printf("2.calcular perimetro");
		gotoxy(41,4);printf("3.calcular volumen ");
		gotoxy(41,5);printf("4.salir");
		gotoxy(41,7);printf("eliga el numero de opcion y escribalo aqui:");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				system("cls");
				gotoxy(41,2);printf("selccione la figura para aplicar la operacion");
				gotoxy(41,3);printf("1.triangulo");
				gotoxy(41,4);printf("2.circulo");
				gotoxy(41,5);printf("3.cuadrado");
				gotoxy(41,6);printf("4.rectangulo");
				gotoxy(41,7);printf("5.rombo");
				gotoxy(41,8);printf("6.trapecio");
				gotoxy(41,9);printf("7.romboide");
				gotoxy(41,10);printf("8.poligonos regulares");
				gotoxy(41,12);printf("por favor,escriba el numero de opcion deseada aqui :");
				scanf("%d",&opc);
				if(opc==1)
				{
					system("cls");
					gotoxy(41,2);printf("escriba la medida de la base del triangulo:");
					scanf("%f",&base);
					gotoxy(41,3);printf("escribe la medida de la altura del triangulo:");
					scanf("%f",&altura);
					area=(base*altura)/2;
					gotoxy(41,5);printf("el area del triangulo es:%.2f",area);
				}
				else if(opc==2)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida del radio del circulo:");
					scanf("%f",&r);
			    	area=3.1416*(r*r);
					gotoxy(41,4);printf("el area del circulo es :%.2f");
				}
				else if(opc==3)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida del lado del cuadrado:");
					scanf("%f",&lado);
					area=lado*lado;
					gotoxy(41,4);printf("el area del cuadrado es:%.2f",area);
				}
				else if(opc==4)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida de la base del rectangulo:");
					scanf("%f",&base);
					gotoxy(41,3);printf("escribe la medida de la altura del rectangulo:");
					scanf("%f",&altura);
					area=base*altura;
					gotoxy(41,5);printf("el area del rectangulo es :%.2f",area);
				}
				else if(opc==5)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida de la diagonal mayor del rombo:");
					scanf("%f",&D);
					gotoxy(41,3);printf("escribe la medida de la diagonal menor del rombo");
					scanf("%f",&d);
					area=(D*d)/2;
					gotoxy(41,4);printf("el area del rombo es:");
				}
				else if(opc==6)
				{
					system("cls");
				gotoxy(41,2);printf("escribe la medida de la altura del trapecio");
				scanf("%f",&altura);
				gotoxy(41,3);printf("escribe la medida de la base mayor del trapecio:");
				scanf("%f",&base);
				gotoxy(41,4);printf("escribe la medidda de la base menor del trapecio:");
				scanf("%f",&basem);
				area=(base+basem)/2*altura;
				gotoxy(41,6);printf("el area del trapecio es:%.2f");
				}
				else if(opc==7)
				{
					system("cls");
				gotoxy(41,2);printf("escribe la medida de la base del romboide:");
				scanf("%f",&base);
				gotoxy(41,3);printf("escribe la medida de la altura del romboide:");
				scanf("%f",&altura);
				area=base*altura;
				gotoxy(41,4);printf("el area del romboide es:%.2f");
				}
				else if(opc==8)
				{
					system("cls");
					gotoxy(41,2);printf("escribe el numero delados de tu poligono:");
					scanf("%d",&nl);
					gotoxy(41,3);printf("escribe la medida del lado de tu poligono:");
					scanf("%f",&lado);
					gotoxy(41,4);printf("escribe la medida del apotema de tu poligono:");
					scanf("%f",&apotema);
					perimetro=nl*lado;
					area=(perimetro*apotema)/2;
					gotoxy(41,6);printf("el area de tu poligono es:%.2f",area);
				}
				getch();
				break;
				case 2:
					system("cls");
				gotoxy(41,2);printf("selccione la figura para aplicar la operacion");
				gotoxy(41,3);printf("1.triangulo");
				gotoxy(41,4);printf("2.circulo");
				gotoxy(41,5);printf("3.cuadrado");
				gotoxy(41,6);printf("4.rectangulo");
				gotoxy(41,7);printf("5.rombo");
				gotoxy(41,8);printf("6.trapecio");
				gotoxy(41,9);printf("7.romboide");
				gotoxy(41,10);printf("8.poligonos regulares");
				gotoxy(41,12);printf("por favor,escriba el numero de opcion deseada aqui:");
				scanf("%d",&opc);
				if(opc==1)
				{
					system("cls");
					gotoxy(41,2);printf(" escribe la medida del lado del triangulo:");
					scanf("%f",&base);
					gotoxy(41,3);printf("escribe la medida del lado del triangulo:");
					scanf("%f",&lado);
					gotoxy(41,4);printf("escribe la medida del lado del triangulo:");
				    scanf("%f",&altura);
				    perimetro=base+lado+altura;
				    gotoxy(41,6);printf("el perimetro del triangulo es:%.2f",perimetro);
				}					
				else if(opc==2)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la meida del diametro del circulo:");
					scanf("%f",&dm);
					perimetro=3.1416*dm;
					gotoxy(41,4);printf("el perimetro del circulo es:%.2f",perimetro);
				}
				else if(opc==3)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida del lado del cuadrado:");
					scanf("%f",&lado);
					perimetro=lado*4;
					gotoxy(41,4);printf("el perimetro del cuadrado es:%.2f",perimetro);
				}
				else if(opc==4)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida de la base del rectangulo:");
					scanf("%f",&base);
					gotoxy(41,3);printf("escribe la medida de la altura del rectangulo:");
					scanf("%f",&altura);
					perimetro=(base*2)+(altura*2);
					gotoxy(41,5);printf("el perimetro del rectangulo es:%.2f",perimetro);
				}
				else if(opc==5)
				{
					system("cls");
					gotoxy(41,2);printf("escribe la medida del lado del rombo:");
					scanf("%f",&lado);
					perimetro=lado*4;
					gotoxy(41,4);printf("el perimetro del rombo es:%.2f",perimetro);
				}
				else if(opc==6)
				{
					system("cls");
					for(f=1;f<=4;f++)
					{
						printf("escribe la medida del lado:");
						scanf("%f",&lado);
						suma=lado+suma;
					}
					perimetro=suma;
					gotoxy(41,7);printf("el perimetro del trapecio es:%.2f",perimetro);
				}
				else if(opc==7)
				{
					system("cls");
					do
					{
						printf("escribe la medida del lado del romboide:");
						scanf("%f",&lado);
						suma=lado+suma;
						x++;
					}while(x<=4);
					perimetro=suma;
					gotoxy(41,7);printf("el perimetro del romboide es:%.2f",perimetro);
					
				}
				else if(opc==8)
				{
					system("cls");
					gotoxy(41,2);printf("escribe de cuantos lados es tu poligono:");
					scanf("%d",&nl);
					gotoxy(41,3);printf("escribe la medida del lado de tu poligono:");
					scanf("%f",&lado);
					perimetro=lado*nl;
					gotoxy(41,5);printf("el perimetro de tu poligono es:%&.2f",perimetro);
				}
				getch();
				break;
				case 3:
					system("cls");
					printf("seleccione la figura para aplicar la operacion");
					gotoxy(41,2);printf("1.cubo");
					gotoxy(41,3);printf("2.esfera");
					gotoxy(41,4);printf("3.prisma cuadrangular");
					gotoxy(41,5);printf("4.prisma rectangular");
					gotoxy(41,6);printf("5.prisma triangular");
					gotoxy(41,7);printf("6.prismas con bases de poligonos regulares");
					gotoxy(41,8);printf("7.piramide");
					gotoxy(41,9);printf("8.piramide cuadrangular");
					gotoxy(41,10);printf("9.piramide rectangular");
					gotoxy(41,11);printf("10.piramides con bases de poligonos regulares");
					gotoxy(41,12);printf("11.cono");
					gotoxy(41,13);printf("12.cilindro");
					gotoxy(41,14);printf("13.paralelepipedo");
					gotoxy(41,16);printf("porfavor escriba el numero de opcion deseada aqui:");
					scanf("%d",&opc);
					if(opc==1)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida del lado de la base del cubo:");
						scanf("%f",&lado);
						volumen=lado*lado*lado;
						gotoxy(41,4);printf("el volumen del cubo es de:%.2f",volumen);
					}
					else if(opc==2)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida del radio de la esfera");
						scanf("%f",&r);
						volumen=4/3*3.1416*(r*r*r);
						gotoxy(41,4);printf("el volumen de la esfera es de:%.2f",volumen);
					}
					else if(opc==3)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida de lado de la base del prisma:");
						scanf("%f",&lado);
						gotoxy(41,3);printf("escribe la medida de la altura del prisma:");
						scanf("%f",&altura);
						area=lado*lado;
						volumen=area*altura;
						gotoxy(41,5);printf("el volumen del prisma es de:%.2f",volumen);
					}
					else if(opc==4)
					{
						system("cls");
						gotoxy(41,2);printf("escribe el largo de la base del prisma:");
						scanf("%f",&lado);
						gotoxy(41,3);printf("escribe el ancho de la base del prisma:");
						scanf("%f",&base);
						gotoxy(41,4);printf("escribe la altura del prisma");
						scanf("%f",&altura);
						area=base*lado;
						volumen=area*altura;
						gotoxy(41,6);printf("el volumen del prisma es de:%.2f",volumen);
					}
					else if(opc==5)
					{
						system("cls");
						gotoxy(41,2);printf("escribe el lado de la base del prisma:");
						scanf("%f",&lado);
						gotoxy(41,3);printf(" escribe la altura de la base del triangulo:");
						scanf("%f",&r);
						gotoxy(41,4);printf("escribe la altura del prisma:");
						scanf("%f",&altura);
						area=(lado*r)/2;
						volumen=area*altura;
						gotoxy(41,6);printf("el volumen del prima es de:%.2f",volumen);
					}
					else if(opc==6)
					{
						system("cls");
						gotoxy(41,2);printf("escribe el numero de lados de la base del prisma:");
						scanf("%d",&nl);
						gotoxy(41,3);printf("escribe la medida del lado de la base:");
						scanf("%f",lado);
						gotoxy(41,4);printf("escribe la medida del apotema de la base:");
						scanf("%f",&apotema);
						gotoxy(41,5);printf("escribe la altura del prisma:");
						scanf("%f",&altura);
						perimetro=nl*lado;
						area=(perimetro*apotema)/2;
						volumen=area*altura;
						gotoxy(41,7);printf("el volumen del prisma es de:%.2f",volumen);
					}else if(opc==7)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida del lado de la base de la piramide:");
						scanf("%f",&lado);
						gotoxy(41,3);printf("escribe la altura de la base:");
						scanf("%f",&base);
						gotoxy(41,4);printf("escribe la altura de la piramide");
						scanf("%f",&altura);
						area=lado*base;
						volumen=(area*altura)/3;
						gotoxy(41,6);printf("el volumen de la piramide es de:%.2f",volumen);
					}
					else if(opc==8)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida de la base de la piramide");
						scanf("%f",&lado);
						gotoxy(41,3);printf("escribe la altura de la piramide");
						scanf("%f",&altura);
						area=lado*lado;
						volumen=(area*altura)/3;
						gotoxy(41,5);printf("el volumen de la piramide es de:%.2f",volumen);
					}
					else if(opc==9)
					{
						system("cls");
						gotoxy(41,2);printf("escribe el ancho de la base de la piramide:");
						scanf("%f",&base);
						gotoxy(41,3);printf("escribe el largo de la base de la piramide:");
						scanf("%f",&lado);
						gotoxy(41,4);printf("escribe la altura de la piramide:");
						scanf("%f",&altura);
						area=lado*base;
						volumen=(area*altura)/3;
						gotoxy(41,6);printf("el volumen de la piramide es de:%.2f",volumen);
					}
					else if(opc==10)
					{
						system("cls");
						gotoxy(41,2);printf("escribe de cuantos lados es la base de la piramide:");
						scanf("%f",&nl);
						gotoxy(41,3);printf("escribe la medida del lado de la base:");
						scanf("%f",&lado);
						gotoxy(41,4);printf("escribe la medida del apotema de la base:");
						scanf("%f",&apotema);
						gotoxy(41,5);printf("escribe la altutra de la piramide:");
						scanf("%f",&altura);
						perimetro=lado*nl;
						area=(perimetro*apotema)/2;
						volumen=(area*altura)/3;
						gotoxy(41,7);printf("el volumen de la piramide es de :%.2f",volumen);
					}
					else if(opc==11)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida del radio de la base del cono:");
						scanf("%f",&r);
						gotoxy(41,3);printf("escribe la altura del cono:");
						scanf("%f",&altura);
						area=3.1416*(r*r);
						volumen=(area*altura)/3;
						gotoxy(41,5);printf("el volumen del cono es de:%.2f",volumen);
					}
					else if(opc==12)
					{
						system("cls");
						gotoxy(41,2);printf("escribe la medida del radio de la base:");
						scanf("%f",&r);
						gotoxy(41,3);printf("escribe la altura del cilindro");
						scanf("%f",&altura);
						area=3.1416*(r*r);
						volumen=area*altura;
						gotoxy(41,5);printf("el volumen del cilindro es de:%.2f",volumen);
					}
					else if(opc==13)
					{
						system("cls");
						gotoxy(41,2);printf("escribe el ancho de la base:");
						scanf("%f",&base);
						gotoxy(41,3);printf("escribe el largo de la base:");
						scanf("%f",&lado);
						gotoxy(41,4);printf("escribe la altura del paralelepipedo:");
						scanf("%f",&altura);
						area=base*lado;
						volumen=area*altura;
						gotoxy(41,6);printf("el volumen del paralelepidedo es de:%.2f",volumen);
					}
					getch();
					break;
					
						case 4:
							system("cls");
							gotoxy(41,5);printf("programa finalizado....");
							getch();
							break;
							
							default:
								system("cls");
								gotoxy(41,5);printf("opcion no valida,lo sentimos :(...");
								getch();
								break;
			}
		}
	}
