/*
SE ENTREGA EL 14/NOVIEMBRE/2018.8
	* JUEGO DEL AHORCADO.
	* Debe tener 5 categorias (20 Palabras C/U):
		1.- Ciudades.
		2.- Comida.
		3.- Postres.
		4.- Animales.
		5.- Computación.
	* Ir dibujando al monito con cada error:
		1.- La Horca.
		2.- La Cabeza.
		3.- El Torso y Brazos.
		4.- Piernas
		5.- Cuerda.
	* Mostrar las letras que ya haya usado el usuario.
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <String.h>
#include <iostream>
#include <time.h>
#include <ctype.h>
#include <locale.h>//Librería para que acepte acentos y Ñ's el programa.
#define NUM_INTENTOS  15
using namespace std;
/***********************************************************DECLARACION DE FUNCINOES**************************************************************/
void Categoria_Ciudades (void);
void Categoria_Comidas (void);
void Categoria_Postres (void);
void Categoria_Animales (void);
void Categoria_Computacion(void);
int Menu();//Funcion Menu
void gotoxy(int,int);//Funcion Gotoxy.
char Validacion_Longitud(char[]);
void Mostrar_Abecedario(void);
void Borrar_Letras(char);
void Dibujar_Horca(void);
/***********************************************************DECLARACION DE FUNCINOES**************************************************************/

/**************VARIABLES UNIVERSALES**********************/
int Intentos_Fallados=0,Longitud_Palabra=0,Perdedor=0,Bandera=0, Ganador=0;
char PalabraTemporal[20]="\0", PalabraGanador[20]="\0", PalabraFinal[20]="\0";
int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X2=0,Y=0,Z=0;
char Caracter[]="";

/**************VARIABLES UNIVERSALES**********************/

/**************MAIN**********************/
main()
{
	setlocale(LC_CTYPE,"Spanish");//Para que muestre caracteres del teclado en español.
	setlocale(LC_CTYPE,"C");//Para que muestre caracteres del ASCII EXTENDIDO.
	char opc='\0';
	fflush(stdin);
	do
	{
		A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X2=0,Y=0,Z=0;
		Intentos_Fallados=0,Longitud_Palabra=0,Perdedor=0,Bandera=0, Ganador=0;
		for(int z=0;z<20;z++)
		{
			PalabraTemporal[z]='\0';//Esto es para dejar la cadena en NULL y no haya problemas a la hora de meter una palabra mas larga.
			PalabraFinal[z]='\0';
			PalabraGanador[z]='\0';
		}
		
		opc=Menu();
		switch(opc)
		{
			case 27://ESC.
				system("color 0C");//Color negro con rojo.
				system("cls");
				gotoxy(40,2);cout<<"Adios, gracias por usar el programa.";
				exit(0);
				
			break;
			
			case 49://Número 1. //Ciudades.
				system("cls");
				fflush(stdin);
				Categoria_Ciudades();
			break;
			
			case 50://Número 2. //Comidas.
				system("cls");
				fflush(stdin);
				Categoria_Comidas();
			break;
			
			case 51://Número 3. //Postres.
				system("cls");
				fflush(stdin);
				Categoria_Postres();
			break;
			
			case 52://Número 4. //Animales.
				system("cls");
				fflush(stdin);
				Categoria_Animales();
			break;
			
			case 53://Número 5. //Computación.
				system("cls");
				fflush(stdin);
				Categoria_Computacion();
			break;
			
			default:
				if(opc!=27)
				{
					Beep(1000,100);
				}
		}
		
	}while(opc!=27);
}
/**************MAIN**********************/

/*
	COLORES:
		* system("color 0F");//Color negro con blanco. //FONDO.
		* system("color 0C");//Color negro con rojo.   //ERROR.
		* system("color 01");//Color negro con azul.   //ENTENDIDO.
		* system("color 02");//Color negro con verde.  //ACERTADO.
*/

void Categoria_Ciudades()
{
	system("color 0F");//Color negro con blanco.
	system("cls");
	
	char P1[]="GUADALAJARA",P2[]="ZAPOPAN",P3[]="TLAQUEPAQUE",P4[]="TONALA",P5[]="TEQUILA",P6[]="OCOTLAN",P7[]="ZAPOTLANEJO",P8[]="MAZAMITLA",P9[]="TAPALPA",P10[]="TALA";
	char P11[]="TOKIO",P12[]="PARIS",P13[]="LONDRES",P14[]="PARIS",P15[]="CHICAGO",P16[]="MOSCU",P17[]="HOUSTON",P18[]="DALLAS",P19[]="BOSTON",P20[]="AMSTERDAM", car='\0';
	int EX=110,Inicio=1,Final=20,RANDOM=0,Long=0,equis=110,equis2=112;
	
	gotoxy(50,0);cout<<"[AHORCADO - CATEGORIA: CIUDADES]";
	srand(time(NULL));
	RANDOM = Inicio + rand() % (Final-Inicio); //Se va a generar el número de la palabra.
	Mostrar_Abecedario();
	
	switch(RANDOM)
	{
		case 1://P1
			Long=strlen(P1);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P1[g];
			}
		break;
		
		case 2://P2
			Long=strlen(P2);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P2[g];
			}
		break;
		
		case 3://P3
			Long=strlen(P3);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P3[g];
			}
		break;
		
		case 4://P4
			Long=strlen(P4);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P4[g];
			}
		break;
		
		case 5://P5
			Long=strlen(P5);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P5[g];
			}
		break;
		
		case 6://P6
			Long=strlen(P6);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P6[g];
			}
		break;
		
		case 7://P7
			Long=strlen(P7);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P7[g];
			}
		break;
		
		case 8://P8
			Long=strlen(P8);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P8[g];
			}
		break;
		
		case 9://P9
			Long=strlen(P9);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P9[g];
			}
		break;
		
		case 10://P10
			Long=strlen(P10);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P10[g];
			}
		break;
		
		case 11://P11
			Long=strlen(P11);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P11[g];
			}
		break;
		
		case 12://P12
			Long=strlen(P12);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P12[g];
			}
		break;
		
		case 13://P13
			Long=strlen(P13);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P13[g];
			}
		break;
		
		case 14://P14
			Long=strlen(P14);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P14[g];
			}
		break;
		
		case 15://P15
			Long=strlen(P15);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P15[g];
			}
		break;
		
		case 16://P16
			Long=strlen(P16);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P16[g];
			}
		break;
		
		case 17://P17
			Long=strlen(P17);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P17[g];
			}
		break;
		
		case 18://P18
			Long=strlen(P18);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P18[g];
			}
		break;
		
		case 19://P19
			Long=strlen(P19);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P19[g];
			}
		break;
		
		case 20://P20
			Long=strlen(P20);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P20[g];
			}
		break;
	}
	
	Longitud_Palabra = strlen(PalabraFinal);
	for(int i=0; i<Longitud_Palabra;i++)
	{
		gotoxy(EX,10);cout<<"_";
		EX=EX+2;
	}
	
	for(int c=0;c<Longitud_Palabra;c++)
		PalabraTemporal[c] = PalabraFinal[c];	
	
	for(int x=0;x<Longitud_Palabra;x++)
	{
		gotoxy(equis2,12);cout<<PalabraFinal[x];
		equis2=equis2+2;
	}
	
	do
	{
		
		fflush(stdin);
		Bandera=0;
		gotoxy(10,3);cout<<"ESCRIBE UNA LETRA:";
		gotoxy(29,3);gets(Caracter);
		
		Validacion_Longitud(Caracter);
		
		for(int j=0;j<1;j++)
			car=Caracter[j];//Esto es para pasarle el varlo de la variable a la otra.
		
		Borrar_Letras(car);
		Dibujar_Horca();
		
		gotoxy(29,3);cout<<"   ";
		
		Ganador=strcmp(PalabraGanador,PalabraTemporal);
		if(Perdedor==1)//Si la bandera perdedor esta activada significa que perdió el juego.
		{
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"HAS PERDIDO EL JUEGO.";
			system("color 0C");//Color negro con rojo.
			for(int i=0; i<Longitud_Palabra; i++)
	     	{
	     		gotoxy(equis,10);cout<<PalabraTemporal[i];
				equis=equis+2;
			}
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
		else if(Ganador==0)//Si son iguales gano la partida.
		{
			system("color 01");//Color negro con azul.
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"¡FELICIDADES, ADIVINASTE LA PALABRA!, HAS GANADO EL JUEGO.";
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
	}while(Intentos_Fallados<5||Ganador==0);
}

void Categoria_Comidas()
{
	system("color 0F");//Color negro con blanco.
	system("cls");
	
	char P1[]="TACOS",P2[]="QUESADILLAS",P3[]="PIZZA",P4[]="HOTDOGS",P5[]="SOPES",P6[]="POZOLE",P7[]="PESCADO",P8[]="MOLE",P9[]="PIPIAN",P10[]="SANDWICH";//LASANA = LASAÑA.
	char P11[]="TORTAS",P12[]="POLLO",P13[]="TINGA",P14[]="HAMBURGUESA",P15[]="SUSHI",P16[]="CAMARONES",P17[]="ENCHILADAS",P18[]="BIRRIA",P19[]="LONCHE",P20[]="LASANA", car='\0';
	int EX=110,Inicio=1,Final=20,RANDOM=0,Long=0,equis=110,equis2=112;
	
	gotoxy(50,0);cout<<"[AHORCADO - CATEGORIA: COMIDAS]";
	srand(time(NULL));
	RANDOM = Inicio + rand() % (Final-Inicio); //Se va a generar el número de la palabra.
	Mostrar_Abecedario();
	
	switch(RANDOM)
	{
		case 1://P1
			Long=strlen(P1);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P1[g];
			}
		break;
		
		case 2://P2
			Long=strlen(P2);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P2[g];
			}
		break;
		
		case 3://P3
			Long=strlen(P3);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P3[g];
			}
		break;
		
		case 4://P4
			Long=strlen(P4);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P4[g];
			}
		break;
		
		case 5://P5
			Long=strlen(P5);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P5[g];
			}
		break;
		
		case 6://P6
			Long=strlen(P6);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P6[g];
			}
		break;
		
		case 7://P7
			Long=strlen(P7);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P7[g];
			}
		break;
		
		case 8://P8
			Long=strlen(P8);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P8[g];
			}
		break;
		
		case 9://P9
			Long=strlen(P9);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P9[g];
			}
		break;
		
		case 10://P10
			Long=strlen(P10);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P10[g];
			}
		break;
		
		case 11://P11
			Long=strlen(P11);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P11[g];
			}
		break;
		
		case 12://P12
			Long=strlen(P12);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P12[g];
			}
		break;
		
		case 13://P13
			Long=strlen(P13);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P13[g];
			}
		break;
		
		case 14://P14
			Long=strlen(P14);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P14[g];
			}
		break;
		
		case 15://P15
			Long=strlen(P15);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P15[g];
			}
		break;
		
		case 16://P16
			Long=strlen(P16);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P16[g];
			}
		break;
		
		case 17://P17
			Long=strlen(P17);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P17[g];
			}
		break;
		
		case 18://P18
			Long=strlen(P18);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P18[g];
			}
		break;
		
		case 19://P19
			Long=strlen(P19);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P19[g];
			}
		break;
		
		case 20://P20
			Long=strlen(P20);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P20[g];
			}
		break;
	}
	
	Longitud_Palabra = strlen(PalabraFinal);
	for(int i=0; i<Longitud_Palabra;i++)
	{
		gotoxy(EX,10);cout<<"_";
		EX=EX+2;
	}
	
	for(int c=0;c<Longitud_Palabra;c++)
		PalabraTemporal[c] = PalabraFinal[c];	
	
	for(int x=0;x<Longitud_Palabra;x++)
	{
		gotoxy(equis2,12);cout<<PalabraFinal[x];
		equis2=equis2+2;
	}
	
	do
	{
		
		fflush(stdin);
		Bandera=0;
		gotoxy(10,3);cout<<"ESCRIBE UNA LETRA:";
		gotoxy(29,3);gets(Caracter);
		
		Validacion_Longitud(Caracter);
		
		for(int j=0;j<1;j++)
			car=Caracter[j];//Esto es para pasarle el varlo de la variable a la otra.
		
		Borrar_Letras(car);
		Dibujar_Horca();
		
		gotoxy(29,3);cout<<"   ";
		
		Ganador=strcmp(PalabraGanador,PalabraTemporal);
		if(Perdedor==1)//Si la bandera perdedor esta activada significa que perdió el juego.
		{
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"HAS PERDIDO EL JUEGO.";
			system("color 0C");//Color negro con rojo.
			for(int i=0; i<Longitud_Palabra; i++)
	     	{
	     		gotoxy(equis,10);cout<<PalabraTemporal[i];
				equis=equis+2;
			}
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
		else if(Ganador==0)//Si son iguales gano la partida.
		{
			system("color 01");//Color negro con azul.
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"¡FELICIDADES, ADIVINASTE LA PALABRA!, HAS GANADO EL JUEGO.";
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
	}while(Intentos_Fallados<5||Ganador==0);
}

void Categoria_Postres()
{
	system("color 0F");//Color negro con blanco.
	system("cls");
	
	char P1[]="TARTAS",P2[]="PASTEL",P3[]="COCADA",P4[]="CAJETAS",P5[]="EMPANADAS",P6[]="POLVORON",P7[]="ATE",P8[]="PICARONES",P9[]="TORRIJA",P10[]="NATILLAS";
	char P11[]="HELADO",P12[]="MAZAPAN",P13[]="CHOLADO",P14[]="MAZAMORRA",P15[]="BUNUELOS",P16[]="JERICALLA",P17[]="GELATO",P18[]="CASSATA",P19[]="MILHOJAS",P20[]="MERENGON", car='\0';
	int EX=110,Inicio=1,Final=20,RANDOM=0,Long=0,equis=110,equis2=112;
	
	gotoxy(50,0);cout<<"[AHORCADO - CATEGORIA: POSTRES]";
	srand(time(NULL));
	RANDOM = Inicio + rand() % (Final-Inicio); //Se va a generar el número de la palabra.
	Mostrar_Abecedario();
	
	switch(RANDOM)
	{
		case 1://P1
			Long=strlen(P1);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P1[g];
			}
		break;
		
		case 2://P2
			Long=strlen(P2);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P2[g];
			}
		break;
		
		case 3://P3
			Long=strlen(P3);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P3[g];
			}
		break;
		
		case 4://P4
			Long=strlen(P4);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P4[g];
			}
		break;
		
		case 5://P5
			Long=strlen(P5);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P5[g];
			}
		break;
		
		case 6://P6
			Long=strlen(P6);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P6[g];
			}
		break;
		
		case 7://P7
			Long=strlen(P7);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P7[g];
			}
		break;
		
		case 8://P8
			Long=strlen(P8);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P8[g];
			}
		break;
		
		case 9://P9
			Long=strlen(P9);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P9[g];
			}
		break;
		
		case 10://P10
			Long=strlen(P10);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P10[g];
			}
		break;
		
		case 11://P11
			Long=strlen(P11);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P11[g];
			}
		break;
		
		case 12://P12
			Long=strlen(P12);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P12[g];
			}
		break;
		
		case 13://P13
			Long=strlen(P13);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P13[g];
			}
		break;
		
		case 14://P14
			Long=strlen(P14);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P14[g];
			}
		break;
		
		case 15://P15
			Long=strlen(P15);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P15[g];
			}
		break;
		
		case 16://P16
			Long=strlen(P16);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P16[g];
			}
		break;
		
		case 17://P17
			Long=strlen(P17);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P17[g];
			}
		break;
		
		case 18://P18
			Long=strlen(P18);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P18[g];
			}
		break;
		
		case 19://P19
			Long=strlen(P19);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P19[g];
			}
		break;
		
		case 20://P20
			Long=strlen(P20);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P20[g];
			}
		break;
	}
	
	Longitud_Palabra = strlen(PalabraFinal);
	for(int i=0; i<Longitud_Palabra;i++)
	{
		gotoxy(EX,10);cout<<"_";
		EX=EX+2;
	}
	
	for(int c=0;c<Longitud_Palabra;c++)
		PalabraTemporal[c] = PalabraFinal[c];	
	
	for(int x=0;x<Longitud_Palabra;x++)
	{
		gotoxy(equis2,12);cout<<PalabraFinal[x];
		equis2=equis2+2;
	}
	
	do
	{
		
		fflush(stdin);
		Bandera=0;
		gotoxy(10,3);cout<<"ESCRIBE UNA LETRA:";
		gotoxy(29,3);gets(Caracter);
		
		Validacion_Longitud(Caracter);
		
		for(int j=0;j<1;j++)
			car=Caracter[j];//Esto es para pasarle el varlo de la variable a la otra.
		
		Borrar_Letras(car);
		Dibujar_Horca();
		
		gotoxy(29,3);cout<<"   ";
		
		Ganador=strcmp(PalabraGanador,PalabraTemporal);
		if(Perdedor==1)//Si la bandera perdedor esta activada significa que perdió el juego.
		{
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"HAS PERDIDO EL JUEGO.";
			system("color 0C");//Color negro con rojo.
			for(int i=0; i<Longitud_Palabra; i++)
	     	{
	     		gotoxy(equis,10);cout<<PalabraTemporal[i];
				equis=equis+2;
			}
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
		else if(Ganador==0)//Si son iguales gano la partida.
		{
			system("color 01");//Color negro con azul.
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"¡FELICIDADES, ADIVINASTE LA PALABRA!, HAS GANADO EL JUEGO.";
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
	}while(Intentos_Fallados<5||Ganador==0);
}

void Categoria_Animales()
{
	system("color 0F");//Color negro con blanco.
	system("cls");
	
	char P1[]="PERRO",P2[]="LEON",P3[]="CUERVO",P4[]="GAVILAN",P5[]="BURRO",P6[]="TIGRE",P7[]="SERPIENTE",P8[]="MOSQUITO",P9[]="CANGURO",P10[]="PEZ";
	char P11[]="GATO",P12[]="LUCIERNAGA",P13[]="PALOMA",P14[]="CABALLO",P15[]="AGUILA",P16[]="ESCORPION",P17[]="MOSCA",P18[]="GUSANO",P19[]="TORTUGA",P20[]="TARANTULA", car='\0';
	int EX=110,Inicio=1,Final=20,RANDOM=0,Long=0,equis=110,equis2=112;
	
	gotoxy(50,0);cout<<"[AHORCADO - CATEGORIA: ANIMALES]";
	srand(time(NULL));
	RANDOM = Inicio + rand() % (Final-Inicio); //Se va a generar el número de la palabra.
	Mostrar_Abecedario();
	
	switch(RANDOM)
	{
		case 1://P1
			Long=strlen(P1);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P1[g];
			}
		break;
		
		case 2://P2
			Long=strlen(P2);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P2[g];
			}
		break;
		
		case 3://P3
			Long=strlen(P3);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P3[g];
			}
		break;
		
		case 4://P4
			Long=strlen(P4);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P4[g];
			}
		break;
		
		case 5://P5
			Long=strlen(P5);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P5[g];
			}
		break;
		
		case 6://P6
			Long=strlen(P6);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P6[g];
			}
		break;
		
		case 7://P7
			Long=strlen(P7);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P7[g];
			}
		break;
		
		case 8://P8
			Long=strlen(P8);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P8[g];
			}
		break;
		
		case 9://P9
			Long=strlen(P9);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P9[g];
			}
		break;
		
		case 10://P10
			Long=strlen(P10);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P10[g];
			}
		break;
		
		case 11://P11
			Long=strlen(P11);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P11[g];
			}
		break;
		
		case 12://P12
			Long=strlen(P12);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P12[g];
			}
		break;
		
		case 13://P13
			Long=strlen(P13);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P13[g];
			}
		break;
		
		case 14://P14
			Long=strlen(P14);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P14[g];
			}
		break;
		
		case 15://P15
			Long=strlen(P15);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P15[g];
			}
		break;
		
		case 16://P16
			Long=strlen(P16);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P16[g];
			}
		break;
		
		case 17://P17
			Long=strlen(P17);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P17[g];
			}
		break;
		
		case 18://P18
			Long=strlen(P18);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P18[g];
			}
		break;
		
		case 19://P19
			Long=strlen(P19);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P19[g];
			}
		break;
		
		case 20://P20
			Long=strlen(P20);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P20[g];
			}
		break;
	}
	
	Longitud_Palabra = strlen(PalabraFinal);
	for(int i=0; i<Longitud_Palabra;i++)
	{
		gotoxy(EX,10);cout<<"_";
		EX=EX+2;
	}
	
	for(int c=0;c<Longitud_Palabra;c++)
		PalabraTemporal[c] = PalabraFinal[c];	
	
	for(int x=0;x<Longitud_Palabra;x++)
	{
		gotoxy(equis2,12);cout<<PalabraFinal[x];
		equis2=equis2+2;
	}
	
	do
	{
		
		fflush(stdin);
		Bandera=0;
		gotoxy(10,3);cout<<"ESCRIBE UNA LETRA:";
		gotoxy(29,3);gets(Caracter);
		
		Validacion_Longitud(Caracter);
		
		for(int j=0;j<1;j++)
			car=Caracter[j];//Esto es para pasarle el varlo de la variable a la otra.
		
		Borrar_Letras(car);
		Dibujar_Horca();
		
		gotoxy(29,3);cout<<"   ";
		
		Ganador=strcmp(PalabraGanador,PalabraTemporal);
		if(Perdedor==1)//Si la bandera perdedor esta activada significa que perdió el juego.
		{
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"HAS PERDIDO EL JUEGO.";
			system("color 0C");//Color negro con rojo.
			for(int i=0; i<Longitud_Palabra; i++)
	     	{
	     		gotoxy(equis,10);cout<<PalabraTemporal[i];
				equis=equis+2;
			}
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
		else if(Ganador==0)//Si son iguales gano la partida.
		{
			system("color 01");//Color negro con azul.
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"¡FELICIDADES, ADIVINASTE LA PALABRA!, HAS GANADO EL JUEGO.";
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
	}while(Intentos_Fallados<5||Ganador==0);
}

void Categoria_Computacion()
{
	system("color 0F");//Color negro con blanco.
	system("cls");
	
	char P1[]="USB",P2[]="SOFTWARE",P3[]="BINARIO",P4[]="COMPUTADORA",P5[]="CIRCUITO",P6[]="DATABASE",P7[]="HEXADECIMAL",P8[]="WINDOWS",P9[]="ALGORITMO",P10[]="RAM";
	char P11[]="MOUSE",P12[]="HARDWARE",P13[]="LAPTOP",P14[]="ARDUINO",P15[]="ALU",P16[]="PROGRAMACION",P17[]="OCTAL",P18[]="ANDROID",P19[]="",P20[]="REDES", car='\0';
	int EX=110,Inicio=1,Final=20,RANDOM=0,Long=0,equis=110, equis2=112;
	
	gotoxy(50,0);cout<<"[AHORCADO - CATEGORIA: COMPUTACION]";
	srand(time(NULL));
	RANDOM = Inicio + rand() % (Final-Inicio); //Se va a generar el número de la palabra.
	Mostrar_Abecedario();
	
	switch(RANDOM)
	{
		case 1://P1
			Long=strlen(P1);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P1[g];
			}
		break;
		
		case 2://P2
			Long=strlen(P2);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P2[g];
			}
		break;
		
		case 3://P3
			Long=strlen(P3);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P3[g];
			}
		break;
		
		case 4://P4
			Long=strlen(P4);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P4[g];
			}
		break;
		
		case 5://P5
			Long=strlen(P5);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P5[g];
			}
		break;
		
		case 6://P6
			Long=strlen(P6);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P6[g];
			}
		break;
		
		case 7://P7
			Long=strlen(P7);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P7[g];
			}
		break;
		
		case 8://P8
			Long=strlen(P8);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P8[g];
			}
		break;
		
		case 9://P9
			Long=strlen(P9);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P9[g];
			}
		break;
		
		case 10://P10
			Long=strlen(P10);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P10[g];
			}
		break;
		
		case 11://P11
			Long=strlen(P11);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P11[g];
			}
		break;
		
		case 12://P12
			Long=strlen(P12);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P12[g];
			}
		break;
		
		case 13://P13
			Long=strlen(P13);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P13[g];
			}
		break;
		
		case 14://P14
			Long=strlen(P14);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P14[g];
			}
		break;
		
		case 15://P15
			Long=strlen(P15);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P15[g];
			}
		break;
		
		case 16://P16
			Long=strlen(P16);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P16[g];
			}
		break;
		
		case 17://P17
			Long=strlen(P17);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P17[g];
			}
		break;
		
		case 18://P18
			Long=strlen(P18);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P18[g];
			}
		break;
		
		case 19://P19
			Long=strlen(P19);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P19[g];
			}
		break;
		
		case 20://P20
			Long=strlen(P20);
			for(int g=0;g<Long;g++)
			{
				PalabraFinal[g] = P20[g];
			}
		break;
	}
	
	Longitud_Palabra = strlen(PalabraFinal);
	for(int i=0; i<Longitud_Palabra;i++)
	{
		gotoxy(EX,10);cout<<"_";
		EX=EX+2;
	}
	
	for(int c=0;c<Longitud_Palabra;c++)
		PalabraTemporal[c] = PalabraFinal[c];	
	
	for(int x=0;x<Longitud_Palabra;x++)
	{
		gotoxy(equis2,12);cout<<PalabraFinal[x];
		equis2=equis2+2;
	}
	
	do
	{
		
		fflush(stdin);
		Bandera=0;
		
		gotoxy(10,3);cout<<"ESCRIBE UNA LETRA:";
		gotoxy(29,3);gets(Caracter);
		
		Validacion_Longitud(Caracter);
		
		for(int j=0;j<1;j++)
			car=Caracter[j];//Esto es para pasarle el varlo de la variable a la otra.
		
		Borrar_Letras(car);
		Dibujar_Horca();
		
		gotoxy(29,3);cout<<"   ";
		
		Ganador=strcmp(PalabraGanador,PalabraTemporal);
		if(Perdedor==1)//Si la bandera perdedor esta activada significa que perdió el juego.
		{
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"HAS PERDIDO EL JUEGO.";
			system("color 0C");//Color negro con rojo.
			for(int i=0; i<Longitud_Palabra; i++)
	     	{
	     		gotoxy(equis,10);cout<<PalabraTemporal[i];
				equis=equis+2;
			}
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
		else if(Ganador==0)//Si son iguales gano la partida.
		{
			system("color 01");//Color negro con azul.
			gotoxy(29,3);cout<<"                                                  ";
			gotoxy(29,3);cout<<"¡FELICIDADES, ADIVINASTE LA PALABRA!, HAS GANADO EL JUEGO.";
			getch();
			break; //Aún no estoy seguro si se debe usar ahí.
		}
	}while(Intentos_Fallados<5||Ganador==0);
}

char Validacion_Longitud(char val[])
{
	int longitud=0; bool bandera=false;
	char caracter[]=" ",c='\0';
	longitud = strlen(val);
	
	
	
	for(int i=0;i<longitud;i++)
	{
		c=val[i];
		Caracter[i] = val[i];
		for(int i=0; i<1; i++)
     		c = toupper(c); //Convierte a minusculas.
     	
		if(c>=48 && c<=58)
		{
			bandera=true;
			break;
		}
		else if( (c=='A' && A==1)||(c=='B' && B==true) )
		{
			bandera=true;
			break;
		}
		else
		{
			bandera=false;
		}
	}
	do
	{	
		if(longitud>1 ||  bandera==true) //FALTA TERMINAR LAS DEMÁS LETRAS DEL ABC.
		{
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"NO ESCRIBA MÁS DE 1 CARACTER, NI NUMEROS, NI LA MIMSA LETRA.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"                                                             ";
			gotoxy(29,3);gets(caracter);
			longitud = strlen(caracter);
			
			for(int i=0;i<longitud;i++)
			{
				c=caracter[i];
				Caracter[i] = caracter[i];
				for(int i=0; i<1; i++)
     				c = toupper(c); //Convierte a minusculas.
				
				if(c>=48 && c<=58)
				{
					bandera=true;
					break;
				}
				else if( (c=='A' && A==true)||(c=='B' && B==true) )
				{
					bandera=true;
					break;
				}
				else
				{
					bandera=false;
				}
			}
		}
	}while(longitud>1 || bandera==true);
}

void Mostrar_Abecedario()
{
	gotoxy(0,21);cout<<"---------------------------------------------------ABECEDARIO------------------------------------------------\n";
	
	gotoxy(1,23);cout<<"A";gotoxy(12,23);cout<<"D";gotoxy(23,23);cout<<"G";gotoxy(34,23);cout<<"J";gotoxy(45,23);cout<<"M";gotoxy(56,23);cout<<"P";gotoxy(67,23);cout<<"S";gotoxy(78,23);cout<<"V"; gotoxy(89,23);cout<<"Y";
	gotoxy(1,24);cout<<"B";gotoxy(12,24);cout<<"E";gotoxy(23,24);cout<<"H";gotoxy(34,24);cout<<"K";gotoxy(45,24);cout<<"N";gotoxy(56,24);cout<<"Q";gotoxy(67,24);cout<<"T";gotoxy(78,24);cout<<"W"; gotoxy(89,24);cout<<"Z";
	gotoxy(1,25);cout<<"C";gotoxy(12,25);cout<<"F";gotoxy(23,25);cout<<"I";gotoxy(34,25);cout<<"L";gotoxy(45,25);cout<<"O";gotoxy(56,25);cout<<"R";gotoxy(67,25);cout<<"U";gotoxy(78,25);cout<<"X";
	
	gotoxy(0,27);cout<<"---------------------------------------------------ABECEDARIO------------------------------------------------\n";
}

void Dibujar_Horca()
{
	char Torso=176, Cabeza=64, BrazoIzquierdo=92;
	if(Bandera==0)//Si la bandera queda desactivada, siginifica que no hubo una letra acertada. Por lo tanto entra a este if a dibujar la horca
	{
		//Habrá cada if para que cada intento sea fallado se dibuje una parte del ahorcado.
		if(Intentos_Fallados==1)//1.- La Horca.
		{
			system("color 0C");//Color negro con rojo.
			gotoxy(105,3);cout<<"|";gotoxy(105,2);cout<<"_________________";
			gotoxy(105,4);cout<<"|";
			gotoxy(105,5);cout<<"|";
			gotoxy(105,6);cout<<"|";
			gotoxy(105,7);cout<<"|";
			gotoxy(105,8);cout<<"|";
			Sleep(1000);
			system("color 0F");//Color negro con blanco.
		}
		else if(Intentos_Fallados==2)//2.- La Cabeza.
		{
			system("color 0C");//Color negro con rojo.
			gotoxy(121,4);cout<<Cabeza;//Dibuja la cabeza.
			Sleep(1000);
			system("color 0F");//Color negro con blanco.
		}
		else if(Intentos_Fallados==3)//3.- El Torso y Brazos.
		{ 
			system("color 0C");//Color negro con rojo.
			gotoxy(121,5);cout<<Torso;//Dibuja el torso.
			gotoxy(120,5);cout<<"/";//Dibuja el brazo derecho.
			gotoxy(122,5);cout<<BrazoIzquierdo;//Dibuja el brazo izquierdo.
			Sleep(1000);
			system("color 0F");//Color negro con blanco.
		}
		else if(Intentos_Fallados==4)//4.- Piernas
		{
			system("color 0C");//Color negro con rojo.
			gotoxy(120,6);cout<<"/";
			gotoxy(122,6);cout<<BrazoIzquierdo;
			Sleep(1000);
			system("color 0F");//Color negro con blanco.
		}
		else if(Intentos_Fallados==5)//5.- Cuerda.
		{//Aquí mandar mensaje de que perdió.
			system("color 0C");//Color negro con rojo.
			gotoxy(121,3);cout<<"|";
			Sleep(1000);
			system("color 0F");//Color negro con blanco.
			Perdedor=1;
		}
	}
}

void Borrar_Letras(char c)
{//Aquí se comprueba y borra las letras que ya haya dado el usuario.'
	char caracter='\0',Usada=223;
	caracter=c;
	int X=110;
	for(int i=0; i<1; i++)
     	caracter = toupper(caracter); //Convierte a minusculas.
	if(caracter=='A' && A==0)
	{
		gotoxy(1,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='A')
     		{
			 	system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"A";
     			system("color 0F");//Color negro con blanco. //FONDO.
     			Bandera=1; //Si existe la palabra la bandera se activa.
     			PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		A=1;
	}
	else if(caracter=='B' && B==0)
	{
		gotoxy(1,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='B')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"B";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		B=1;
	}
	else if(caracter=='C' && C==0)
	{
		gotoxy(1,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='C')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"C";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		C=1;
	}
	else if(caracter=='D' && D==0)
	{
		gotoxy(12,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='D')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"D";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		D=1;
	}
	else if(caracter=='E' && E==0)
	{
		gotoxy(12,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='E')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"E";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		E=1;
	}
	else if(caracter=='F' && F==0)
	{
		gotoxy(12,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='F')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"F";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		F=1;
	}
	else if(caracter=='G' && G==0)
	{
		gotoxy(23,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='G')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"G";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		G=1;
	}
	else if(caracter=='H' && H==0)
	{
		gotoxy(23,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='H')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"H";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		H=1;
	}
	else if(caracter=='I' && I==0)
	{
		gotoxy(23,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='I')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"I";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		I=1;
	}
	else if(caracter=='J' && J==0)
	{
		gotoxy(34,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='J')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"J";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		J=1;
	}
	else if(caracter=='K' && K==0)
	{
		gotoxy(34,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='K')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"K";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		K=1;
	}
	else if(caracter=='L' && L==0)
	{
		gotoxy(34,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='L')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"L";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		L=1;
	}
	else if(caracter=='M' && M==0)
	{
		gotoxy(45,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='M')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"M";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		M=1;
	}
	else if(caracter=='N' && N==0)
	{
		gotoxy(45,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='N')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"N";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		N=1;
	}
	else if(caracter=='O' && O==0)
	{
		gotoxy(45,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='O')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"O";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		O=1;
	}
	else if(caracter=='P' && P==0)
	{
		gotoxy(56,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='P')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"P";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		P=1;
	}
	else if(caracter=='Q' && Q==0)
	{
		gotoxy(56,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='Q')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"Q";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		Q=1;
	}
	else if(caracter=='R' && R==0)
	{
		gotoxy(56,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='R')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"R";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		R=1;	
	}
	else if(caracter=='S' && S==0)
	{
		gotoxy(67,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='S')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"S";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		S=1;
	}
	else if(caracter=='T' && T==0)
	{
		gotoxy(67,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='T')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"T";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		T=1;
	}
	else if(caracter=='U' && U==0)
	{
		gotoxy(67,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='U')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"U";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		U=1;
	}
	else if(caracter=='V' && V==0)
	{
		gotoxy(78,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='V')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"V";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		V=1;
	}
	else if(caracter=='W' && W==0)
	{
		gotoxy(78,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='W')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"W";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		W=1;
	}
	else if(caracter=='X' && X2==0)
	{
		gotoxy(78,25);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='X')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"X";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		X2=1;
	}
	else if(caracter=='Y' && Y==0)
	{
		gotoxy(89,23);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='Y')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"Y";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		Y=1;
	}
	else if(caracter=='Z' && Z==0)
	{
		gotoxy(89,24);cout<<Usada;
		for(int i=0; i<Longitud_Palabra; i++)
     	{
     		if(PalabraTemporal[i]=='Z')
     		{
     			system("color 02");//Color negro con verde.  //ACERTADO.
			 	Sleep(1000);
     			gotoxy(X,10);cout<<"Z";
     			system("color 0F");//Color negro con blanco. //FONDO.
				Bandera=1; //Si existe la palabra la bandera se activa.
				PalabraGanador[i] = PalabraTemporal[i];//Se va llenando el arreglo.
			}
			else if(Bandera != 1)//POR SI NO EXISTE ESA LETRA LE DE ERROR.
			{
				Bandera=0;//Si no existe la bandera no se activa.
			}
			X=X+2;
		}
		if(Bandera==0)
		{
			Intentos_Fallados++;
			system("color 0C");//Color negro con rojo.
			gotoxy(29,3);cout<<"FALLASTE.";
			Sleep(1000);
			system("color 0F");//Color negro con blanco
			gotoxy(29,3);cout<<"           ";
		}
		Z=1;
	}
	else
	{
		//Intentos_Fallados++;
		system("color 0C");//Color negro con rojo.
		gotoxy(29,3);cout<<"NO ESCRIBA LA MIMSA LETRA.";
		Sleep(1000);
		system("color 0F");//Color negro con blanco
		gotoxy(29,3);cout<<"                          ";
	}
}
/***************************************************************************MENU************************************************************************/

int Menu()
{
	system("color 0F");
	char opc1='\0';
	system("cls");
	fflush(stdin);
	gotoxy(38,2);cout<<"********Menú Ahorcado********";
	gotoxy(46,4);cout<<"[ESC] Salir.";
	gotoxy(46,5);cout<<"[ 1 ] CIUDADES.";
	gotoxy(46,6);cout<<"[ 2 ] COMIDA.";
	gotoxy(46,7);cout<<"[ 3 ] POSTRES.";
	gotoxy(46,8);cout<<"[ 4 ] ANIMALES.";
	gotoxy(46,9);cout<<"[ 5 ] COMPUTACIÓN.";
	
	gotoxy(56,13);opc1=getch();
}
/***************************************************************************MENU************************************************************************/

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
