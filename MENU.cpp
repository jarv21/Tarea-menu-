#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h> 
#include <time.h> 
#include <windows.h> 
#include <cmath>
using namespace std;
int main()
{
    int opcion;
    bool repetir = true;
    do {
        system("cls");
        cout << "\n\n Programas" << endl;
        cout << "\nSeleccione opcion" << endl;
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Determinar si una palabra o un numero es pali ndromo" << endl;
        cout << "5. Conversion de numeros arabigos a romanos" << endl;
        cout << "6. Conversion de numeros enteros a letras" << endl;
        cout << "7. Conversion de numeros enteros con decimal a letras " << endl;
        cout << "8. Una tabla de multiplicar" << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Conversión de numeros decimales a binario " << endl;
        cout << "12. Conversión de numeros decimales a hexadecimales " << endl;
        cout << "13. Crear Figuras Geometricas Basicas." << endl;
        cout << "14. Mover un punto en toda la pantalla " << endl;
        cout << "15. Simular un Cajero Automatico (Automata) " << endl;
        cout << "16. Calcular la hipotenusa" << endl;
        cout << "17. Area de triangulo" << endl;
        cout << "18. Circunferencia" << endl;
        cout << "19. Area y perimetro trapecio " << endl;
        cout << "20. Area y perimetro de un rectangulo" << endl;

        cout << "0. SALIR DEL MENU" << endl;
        
        cout << "\nDigite una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
int num1, n2;
printf("primer numero: ");
scanf("%d", &num1);
printf("segundo numero: ");
scanf("%d", &n2);

printf("\n la suma: %d", num1+n2);
printf("\n la resta: %d", num1-n2);
printf("\n la multiplicacion: %d", num1*n2);
printf("\n la division: %d \n", num1/  n2);    

printf ("Presiona ENTER para elegir otro programa \n");               
system("pause>nul"); 
                break;
                
            case 2:
int numero;
printf("Ingrese un numero: ");
scanf("%d", &numero);
	if(numero % 2 == 0)
        printf("%d es par \n", numero);
	else
        printf("%d es impar \n", numero);
        
printf ("Presiona ENTER para elegir otro programa \n");           
                        
system("pause>nul"); 
                break;
                
            case 3:             
float M, K, M2, Met, Pulg, Pulg2, L, Kl, Kl2;
printf ("Introduce Los Kilometros a Convertir:\n");
scanf ("%f", &K);
printf ("Introduce Las Millas a Convertir:\n");
scanf ("%f", &M2);
printf ("Introduce Los Metros a Convertir:\n");
scanf ("%f", &Met);
printf ("Introduce Las pulgadas a Convertir:\n");
scanf ("%f", &Pulg2);
printf ("Introduce Las libras a Convertir:\n");
scanf ("%f", &L);
printf ("Introduce Los kilos a Convertir:\n");
scanf ("%f", &Kl2);

M= K*0.623;
K= M2*1.60934;

Pulg= Met*39.37;
Met= Pulg2/39.37;

Kl= L/2.205;
L= Kl2*2.205;

printf ("El Total De Millas Son: = %.5f \n", M);
printf ("El Total De Kilometros Son: = %.5f \n", K);

printf ("El Total De Pulgadas Son: = %.5f \n", Pulg);
printf ("El Total De Metros Son: = %.5f \n", Met);

printf ("El Total De Kilos Son: = %.5f \n", Kl);
printf ("El Total De Libras Son: = %.5f \n", L);
system("pause>nul");            
                break;
                
            case 4:		

char palabra[80];
 int x,y,z;
   printf("\nEscribe una palabra: ");
   scanf(" %s",palabra);
   x=strlen(palabra);
   x=x-1;
 for(y=0,z=x;y<=x/2;y++,z--)
          if(palabra[y]==palabra[z])
             printf("Es palindromo \n");
 else
            printf("No es palindromo \n");
 getch();
system("pause>nul");             
                break;
         
        case 5:		
int num, a;
cout << "Escribe el numero, que sea mayor o igual a 1 y menor o igual a 4999" << endl;
cin >> a;
num=a;
while(num!=0)
{
if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
printf ("Presiona ENTER para elegir otro programa \n"); 
system("pause>nul");                
                break;       
  case 6:		
int jarr;
    cout<<"ingrese un numero"<<endl;
    cin>>jarr;
if((jarr<1)||(jarr>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(jarr>=900)   {cout<<"NOVECIENTOS " ;jarr=jarr-900;}
       else if(jarr>=800)   {cout<<"OCHOCIENTOS " ;jarr=jarr-800;}
       else if(jarr>=700)   {cout<<"SETECIENTOS " ;jarr=jarr-700;}
       else if(jarr>=600)   {cout<<"SEISCIENTOS " ;jarr=jarr-600;}
       else if(jarr>=500)   {cout<<"QUINIENTOS "  ;jarr=jarr-500;}
       else if(jarr>=400)   {cout<<"CUATROCIENTOS "   ;jarr=jarr-400;}
       else if(jarr>=300)   {cout<<"TRESCIENTOS " ;jarr=jarr-300;}
       else if(jarr>=200)   {cout<<"DOSCIENTOS "  ;jarr=jarr-200;}
       else if(jarr>100)    {cout<<"CIENTO "  ;jarr=jarr-100;}
       else if(jarr==100)  {cout<<"CIEN"     ;jarr=jarr-100;}
        if(jarr>90) {cout<<"NOVENTA Y "   ;jarr=jarr-90; }
            if(jarr==90)   {cout<<"NOVENTA"  ;jarr=jarr-90; }  
            if(jarr>80) {cout<<"OCHENTA Y "   ;jarr=jarr-80; }
            if(jarr==80)   {cout<<"OCHENTA"  ;jarr=jarr-80; }
            if(jarr>70) {cout<<"SETENTA Y "   ;jarr=jarr-70; }
            if(jarr==70)   {cout<<"SETENTA"  ;jarr=jarr-70; }
            if(jarr>60) {cout<<"SESENTA Y "   ;jarr=jarr-60; }
            if(jarr==60)   {cout<<"SESENTA"  ;jarr=jarr-60; }
            if(jarr>50) {cout<<"CINCUENTA Y " ;jarr=jarr-50; }
            if(jarr==50)   {cout<<"CINCUENTA"    ;jarr=jarr-50; }
            if(jarr>40) {cout<<"CUARENTA Y "  ;jarr=jarr-40; }
            if(jarr==40)   {cout<<"CUARENTA" ;jarr=jarr-40; }
            if(jarr>30) {cout<<"TREINTA Y "   ;jarr=jarr-30; }
            if(jarr==30)   {cout<<"TREINTA"  ;jarr=jarr-30; }
            if(jarr>20) {cout<<"VEINTI"       ;jarr=jarr-20; }
            if(jarr==20)   {cout<<"VEINTE"       ;jarr=jarr-20; }
        if(jarr>=16)    {cout<<"DIECI"        ;jarr=jarr-10; }
       else if(jarr==15)   {cout<<"QUINCE"       ;jarr=jarr-15; }
       else if(jarr==14)   {cout<<"CATORCE"  ;jarr=jarr-14; }
       else if(jarr==13)   {cout<<"TRECE"        ;jarr=jarr-13; } 
       else if(jarr==12)   {cout<<"DOCE"     ;jarr=jarr-12; }
       else if(jarr==11)   {cout<<"ONCE"     ;jarr=jarr-11; }
       else if(jarr==10)   {cout<<"DIEZ"     ;jarr=jarr-10; }      
        if(jarr==9)    {cout<<"NUEVE"        ;jarr=jarr-9;  }
        if(jarr==8)    {cout<<"OCHO"     ;jarr=jarr-8;  }
        if(jarr==7)    {cout<<"SIETE"        ;jarr=jarr-7;  }
            if(jarr==6)    {cout<<"SEIS"     ;jarr=jarr-6;  }
       else if(jarr==5)    {cout<<"CINCO"        ;jarr=jarr-5;  }
       else if(jarr==4)    {cout<<"CUATRO"       ;jarr=jarr-4;  }
       else if(jarr==3)    {cout<<"TRES"     ;jarr=jarr-3;  }
       else if(jarr==2)    {cout<<"DOS"      ;jarr=jarr-2;  }
       else if(jarr==1)    {cout<<"UNO"      ;jarr=jarr-1;}
       }
system("pause>nul");                
                break;         
case 7:		
   
system("pause>nul");                 
                break;
                
case 8:		
				cout<<"\n TABLA DEL 10";
				cout<<"\n 10X1= 5"; 
				cout<<"\n 10X2= 10"; 
				cout<<"\n 10X3= 15"; 
				cout<<"\n 10X4= 20"; 
				cout<<"\n 10X10= 25"; 
				cout<<"\n 10X6= 30"; 
				cout<<"\n 10X7= 35"; 
				cout<<"\n 10X8= 40"; 
				cout<<"\n 10X9= 45"; 
				cout<<"\n 10X10= 50";
system("pause>nul");               
                break;   
case 9:		
int tabla; 
	printf("INTRODUCZCA UN NUMERO: "); 
	scanf("%d", &tabla); 
	tabla == 1;
	tabla == 2;
	tabla == 3;
	tabla == 4;
	tabla == 5;
	tabla == 6;
	tabla == 7;
	tabla == 8;
	tabla == 9;
	tabla == 10;
	switch(tabla){
		case 1: cout<<" 1X1= 1";
				cout<<"\n 1X2= 2"; 
				cout<<"\n 1X3= 3"; 
				cout<<"\n 1X4= 4"; 
				cout<<"\n 1X5= 5"; 
				cout<<"\n 1X6= 6"; 
				cout<<"\n 1X7= 7"; 
				cout<<"\n 1X8= 8"; 
				cout<<"\n 1X9= 9"; 
				cout<<"\n 1X10= 10";break;
	}
	switch(tabla){
		case 2: cout<<" 2X1= 2";
				cout<<"\n 2X2= 4";
				cout<<"\n 2X3= 6";
				cout<<"\n 2X4= 8";
				cout<<"\n 2X5= 10";
				cout<<"\n 2X6= 12";
				cout<<"\n 2X7= 14";
				cout<<"\n 2X8= 16";
				cout<<"\n 2X9= 18";
				cout<<"\n 2X10= 20";break;			
	}
	switch(tabla){
		case 3: cout<<" 3X1= 3";
				cout<<"\n 3X2= 6";
				cout<<"\n 3X3= 9";
				cout<<"\n 3X4= 12";
				cout<<"\n 3X5= 15";
				cout<<"\n 3X6= 18";
				cout<<"\n 3X7= 21";
				cout<<"\n 3X8= 24";
				cout<<"\n 3X9= 27";
				cout<<"\n 3X10= 30";break;			
	}
		switch(tabla){
		case 4: cout<<" 4X1= 4";
				cout<<"\n 4X2= 8";
				cout<<"\n 4X3= 12";
				cout<<"\n 4X4= 16";
				cout<<"\n 4X5= 20";
				cout<<"\n 4X6= 24";
				cout<<"\n 4X7= 28";
				cout<<"\n 4X8= 32";
				cout<<"\n 4X9= 36";
				cout<<"\n 4X10= 40";break;			
	}
		switch(tabla){
		case 5: cout<<" 5X1= 5";
				cout<<"\n 5X2= 10";
				cout<<"\n 5X3= 15";
				cout<<"\n 5X4= 20";
				cout<<"\n 5X5= 25";
				cout<<"\n 5X6= 30";
				cout<<"\n 5X7= 35";
				cout<<"\n 5X8= 40";
				cout<<"\n 5X9= 45";
				cout<<"\n 5X10= 50";break;			
	}
		switch(tabla){
		case 6: cout<<" 6X1= 6";
				cout<<"\n 6X2= 12";
				cout<<"\n 6X3= 18";
				cout<<"\n 6X4= 24";
				cout<<"\n 6X5= 30";
				cout<<"\n 6X6= 36";
				cout<<"\n 6X7= 42";
				cout<<"\n 6X8= 48";
				cout<<"\n 6X9= 54";
				cout<<"\n 6X10= 60";break;			
	}
		switch(tabla){
		case 7: cout<<" 7X1= 7";
				cout<<"\n 7X2= 14";
				cout<<"\n 7X3= 21";
				cout<<"\n 7X4= 28";
				cout<<"\n 7X5= 35";
				cout<<"\n 7X6= 42";
				cout<<"\n 7X7= 49";
				cout<<"\n 7X8= 56";
				cout<<"\n 7X9= 63";
				cout<<"\n 7X10= 70";break;			
	}
		switch(tabla){
		case 8: cout<<" 8X1= 8";
				cout<<"\n 8X2= 16";
				cout<<"\n 8X3= 24";
				cout<<"\n 8X4= 32";
				cout<<"\n 8X5= 40";
				cout<<"\n 8X6= 48";
				cout<<"\n 8X7= 56";
				cout<<"\n 8X8= 64";
				cout<<"\n 8X9= 72";
				cout<<"\n 8X10= 80";break;			
	}
			switch(tabla){
		case 9: cout<<" 9X1= 9";
				cout<<"\n 9X2= 18";
				cout<<"\n 9X3= 27";
				cout<<"\n 9X4= 36";
				cout<<"\n 9X5= 45";
				cout<<"\n 9X6= 54";
				cout<<"\n 9X7= 63";
				cout<<"\n 9X8= 72";
				cout<<"\n 9X9= 81";
				cout<<"\n 9X10= 90";break;			
	}
			switch(tabla){
		case 10: cout<<" 10X1= 10";
				cout<<"\n 10X2= 20";
				cout<<"\n 10X3= 30";
				cout<<"\n 10X4= 40";
				cout<<"\n 10X5= 50";
				cout<<"\n 10X6= 60";
				cout<<"\n 10X7= 70";
				cout<<"\n 10X8= 80";
				cout<<"\n 10X9= 90";
				cout<<"\n 10X10= 100";break;			
	}
system("pause>nul");             
                break;
case 10:		
{
float a,b,Mul;
cout<< "INGRESE EL PRIMER DIGITO:\n";
  cin>>a;
  cout<<"INGRESE EL SEGUNDO DIGITO:\n";
  cin>>b;
 
Mul= a*b;

cout<<"\t"<<a<<endl;
cout<<"    x  "<<"\t "<<b<<endl;
cout<<"____________"<<endl;
cout<<"\t"<<Mul<<endl;
system("pause");
}
system("pause>nul");             
                break;                
                              
case 11:		
{
cout << "Ingrese un numero entero: \n";
    int numeroc;
    string binario = "";
    cin >> numeroc;
    if (numeroc > 0) {
        while (numeroc > 0) {
            if (numeroc%2 == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numeroc = (int) numeroc/2;
        }
    } else if (numeroc == 0) {
        binario = "0";
    } else {
        binario = "No se puede realizar la conversión. Ingrese solo numerocs positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
}
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul");               
                break;
                
case 12:		

{
    unsigned long long int decimal = 0;

    char cadena[63];

    printf("Ingresa un numero decimal:\n");
    scanf("%llu", &decimal);

    ltoa(decimal, cadena, 16);
    printf("El numero en hexadecimal es: %s\n", cadena);
    return 0;
}
printf ("\n Presiona ENTER para elegir otro programa"); 

system("pause>nul"); // Pausa                
                break;
            
case 13:		
//Crear Figuras Geométricas Básicas. 
{
int tuly;

do {

	cout<<"Bienvenido por favor seleccione una de las siguientes figuras geometricas\n"<<endl;
	cout<<"1.-cuadrado"<<endl;
	cout<<"2.-rectangulo"<<endl;
	cout<<"3.-tirangulo"<<endl;
	cout<<"4.-cirulo"<<endl;
	cout<<"5.-salir"<<endl;
	cin>>tuly;
	
	switch(tuly) {
		
		case 1:
			short lado;

cout<<"bienvenido al cuadrado por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el lado\n";
cin>>lado;
for(short i=0;i<lado;i++) {
	for(short j=0; j<lado; j++) { 
	    if(i==0 || j==0 || i==lado-1 || j==lado-1) {
	    	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  }   

}

 		cout<<endl;

} 
		break;
		
	case 2:
		short lado1,a;

cout<<"rectangulo por favor ingrese los datos que se le piden\n";
cout<<"\n";
cout<<"Ingrese el altura\n";
cin>>lado1;
cout<<"Ingrese el base\n";
cin>>a;
for(short i=0;i<lado1;i++) {
	for(short j=0; j<a; j++) { 
		if(i==0 || j==0 || i==lado1-1 || j==a-1) {
	 	cout <<"*";
		}
  
          else {
          	cout<<" ";
		  } 

	}	
		cout<<endl;
	}
		break; 
	
	case 3:
		int con,c,base;
 con=1;
 c=1;
 
 printf("Ingresa la base\n");
 scanf("%d",&base);
 while(con<=base)
  {
  c=1;
  while(c<=con)
    {

    printf("*");
    c=c+1;
    } 
    printf("\n");
    con=con+1;
 }
		
		
		
	break;		
	case 4:
	cout<<"          ******* "<<endl; //1
	cout<<"      *************** "<<endl; //2
	cout<<"    ******************* "<<endl; //3	
	cout<<"  ***********************"<<endl; //4	
	cout<<" ************************* "<<endl; //5	
	cout<<"*************************** "<<endl; //6	
	cout<<"*************************** "<<endl; //7	
	cout<<"*************************** "<<endl; //8	
	cout<<"*************************** "<<endl; //9	
	cout<<" ************************* "<<endl; //10	
	cout<<"  *********************** "<<endl; //11	
	cout<<"    ******************* "<<endl; //12
	cout<<"      *************** "<<endl; //13
	cout<<"          ******* "<<endl; //14
cout<<"\n";
	cout<<"espero lo haya disfrutado"<<endl; 
	break;		

				
		case 5:
		exit(1); 
		break;
		
	break;
	} 
} while (tuly!=5); system("pause");

		
}

system("pause>nul"); // Pausa                
                break;


case 14:		
{
int n,i,j,x=0,y=0,k;
        char c,opc='u', opc2;
    cout<<"Ingrese caracter d: ";
    cin>>c;
    do{
       cout<<"Ingrese dimensiones (5-25): ";
       cin>>n;
    }while(n<5 || n>25);
    srand(time(0));  //inicializando la semilla para la función rand() 
    do{
     system("cls"); //limpiado de pantalla
     for(j=0;j<x;j++)
     cout<<endl;
     for(j=0;j<n;j++){
      for(i=0;i<y;i++)
      cout<<" ";
      for(i=0;i<n;i++){
        if(j==0 || i==0 || j==n-1 || i==n-1|| i==j+n/2|| i==j-n/2||j==n/2-i || j==3*n/2-1-i || j==n/2 && i==n/2)
        cout<<c;
        else cout<<" ";}
        cout<<endl;
        }
     //condiciones para volver al menú o presentarlo por primera vez
     if(opc=='u' || opc=='b'&& k==15 || opc=='a' && opc2=='x'){


      k=0;
      opc2='u';
     cout<<"  *Menu*\n a)mover figura manualmente\n b) figura se mueva aleatoriamente \n z)salir \n Opcion: ";
     cin>>opc;
     }
     if(opc=='a'){
      if (opc2=='u')
       cout<<"Para mover figura presione(w/s/a/d/)  x (para volver al menu anterior)";
             
     opc2=getch();
     switch(opc2){
     case 'w': x--;break;
     case 's': if(x<24-n)x++;break;
     case 'a': y--;break;
     case 'd': if(y<79-n)y++;break;
     case 'x': break;
   
     }
     }
     if(opc=='b'){
       k++;
       y=1+rand()%(78-n);
       x=1+rand()%(25);        
       Sleep(600);
       }
      if(opc!='a' && opc!='b' && opc!='z')
      opc='u';        
     }while(opc!='z');          
     
     }        
case 15:		
{
	int saldo_inicial = 10000,opc;
	float extra,saldo = 0, retiro;
	
	cout<<"Bienvenido al cajero "<<endl;
	cout<<"1. Ingresar dinero en su cuenta"<<endl;
	cout<<"2. Retirar dinero de su cuenta"<<endl;
	cout<<"3. Salir de todo"<<endl;
	cout<<"Opcion: ";
	cin>>opc;
			
	switch(opc){
		case 1:
			cout<<"Poner la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en su cuenta: "<<saldo;break;
			
			case 2:
				cout<<"Poner aca la cantidad de dinero que desea retirar: ";
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No tiene esa cantidad de dinero en su cuenta";
				}
				else {
					saldo = saldo_inicial-retiro;
					cout<<"Su dinero en cuenta es: "<<saldo;
				}
				case 3: break;
	}
	
	return 0;
}	

system("pause>nul");               
                break;
                            
case 16:		
{
  float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
}
system("pause>nul");            
                break;
                
case 17:		
int base; 
	int altura; 
	float ladoa;
	float ladob;
	float ladoc;
	float Perimetro;
	float Area;	
printf("introduzca la base del triangulo: ");
scanf("%d", &base);

printf("introduzca la altura del triangulo: ");
scanf("%d", &altura);

printf("introdduzca el lado a del triangulo: ");
scanf("%d", &ladoa);

printf("introdduzca el lado c del triangulo: ");
scanf("%d", &ladoc);
Area = (base*altura)/2;
Perimetro = (base+ladoa+ladoc);
printf("\n El area del triangulo es %f: ", Area);
printf("\n El area del triangulo es %f: ", Perimetro);
system("pause>nul");                
                break;
 case 18:
 {
		 	
float radio, pi= 3.1416;

printf("introduzca el radio: ");
scanf("%f", &radio);


printf("\n la longitud es: %f", 2*pi*radio);
printf("\n el area es: %f", pi*radio*radio);
}
system("pause>nul");                
                break;
                                                          
 case 19:
 	{
 	 int alturatrap, Perimetrotrap, Areatrap, lateral1, lateral2, menor, mayor;	
 	printf("\n ");

printf("\n introduzca la altura del trapecio: ");
scanf("%d", alturatrap);

printf("\n introduzca la medida del lado lateral 1 del trapecio: ");
scanf("%d", &lateral1);

printf("\n introduzca la medida del lado lateral 2 del trapecio: ");
scanf("%d", &lateral2);

printf("\n introduzca la medida de la base menor del trapecio: ");
scanf("%d", &menor);

printf("\n introduzca la medida de la base mayor del trapecio: ");
scanf("%d", &mayor);

Areatrap = (mayor+menor)*alturatrap/2;
Perimetrotrap = mayor+menor+mayor+menor;
printf("\n El area del trapecio es %d ", Areatrap);
printf("\n El perimetro del trapecio es %d ", Perimetrotrap);		
	 }
system("pause>nul");                
                break;
  case 20:	
  {
	  
int ancho, longitud, Arear, Perimetror;

printf("\n ");

printf("\n introduzca el ancho del rectangulo: ");
scanf("%d", &ancho);

printf("introduzca la longitud del rectangulo: ");
scanf("%d", &longitud);

Arear   = ancho*longitud;
Perimetror = 2*(ancho+longitud);
printf("\n El area del rectangulo es %d ", Arear);
printf("\n El perimetro del rectangulo es %d ", Perimetror);
}
system("pause>nul");                 
                break;                                          
    
				case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
    return 0;
}
