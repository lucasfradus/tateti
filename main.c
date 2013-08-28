#include <stdio.h>
#include <stdlib.h>
 main(){
    char jug1[15], jug2[15], seguir ='1';
    int i, j, n, turno=1, arr[10], cont, ganador;
    char a, b, c, d, e, f, g, h, l;
a=' ';
b=' ';
c=' ';
d=' ';
e=' ';
f=' ';
g=' ';
h=' ';
l=' ';
cont=0;
ganador=0;
//modulo para cargar nombres de jugadores, con validacion.

do {
    printf("introduzca el nombre del jugador 1:\n\n");
scanf( "%s", &jug1);
printf("nombre del jugador 1: %s\n\n", jug1);
printf("Presione 1 para cambiar o cualquier otra tecla para continuar\n\n");
seguir=getch();
seguir=tolower(seguir);
} while (seguir =='1');
system("cls");

do {
    printf("introduzca el nombre del jugador 2:\n\n");
scanf( "%s", &jug2);
printf("nombre del jugador 2: %s\n\n", jug2);
printf("Presione 1 para cambiar o cualquier otra tecla para continuar\n\n");
seguir=getch();
seguir=tolower(seguir);
} while (seguir =='1');
system("cls");
//para cargar nombre


printf("%s sera las X y %s los O", jug1, jug2);



// armo una tabla donde dejo el sistema de coordenadas y otra con el resultado parcial del partido
getch();
system("cls");
printf("\n\n");
printf("___________________     ___________________       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  1  |  2  |  3  |     |  %c  |  %c  |  %c  |    \n", a, b, c);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  4  |  5  |  6  |     |  %c  |  %c  |  %c  |    \n", d, e, f);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  7  |  8  |  9  |     |  %c  |  %c  |  %c  |    \n", g, h, l);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");


//inicializo un arreglo en 0, esto lo voy a ir llenando con X y O, y despues lo voy a utilizar para verificar el ganador
 for (i=1; i<10; i++){
    arr[i]=0;
 }



for( i = 0; i < 9; i++) {
cont=cont + 1;
// con el if te toca jugar al primer jugador y con el else le toca al segundo
if (turno==1) {

//leo la jugada y asigno 'x' o '0' para que no vuelva a tomar esa posicion
 do {
      printf("\n %s por favor indicar su movimiento > ", jug1);
    scanf("%d", &n);
 }
 while (arr[n] == 'x' || arr[n]== 'O' || n<0 || n>10); // en esta linea primero me fijo que la posicion no este ocupada y que el numero sea mayor a 0 y menor a 10
arr[n]='x';

        switch(n){
   case 1:
       {
           a = ' X';

       break;
       }
   case 2:
       {
           b= ' X';

        break;
}
   case 3:
       {
           c= ' X';

        break;
}
   case 4:
         {
           d= ' X';

        break;
}
   case 5:
                  {
           e= ' X';

        break;
}
   case 6:
         {
           f= ' X';

        break;
}
   case 7:
                  {
           g= ' X';

        break;
}
   case 8:
         {
           h= ' X';

        break;
}
   case 9:
                  {
           l= ' X';

        break;
}
  default:
      {
              printf("dato no valido\n");
		break;
		}
        }

        system("cls");
printf("\n\n");
printf("___________________     ___________________       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  1  |  2  |  3  |     |  %c  |  %c  |  %c  |    \n", a, b, c);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  4  |  5  |  6  |     |  %c  |  %c  |  %c  |    \n", d, e, f);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  7  |  8  |  9  |     |  %c  |  %c  |  %c  |    \n", g, h, l);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
turno = 0;
 }
else {
//leo la jugada y asigno 'x' o '0' para que no vuelva a tomar esa posicion
 do {
      printf("\n %s por favor indicar su movimiento > ", jug2);
    scanf("%d", &n);
 }
 while (arr[n] == 'x' || arr[n]== 'O' || n<0 || n>10); // en esta linea primero me fijo que la posicion no este ocupada y que el numero sea mayor a 0 y menor a 10
arr[n]='O';

        switch(n){
   case 1:
       {
           a= ' O';
       break;
       }
   case 2:
       {
           b= ' O';

        break;
}
   case 3:
       {
           c= ' O';

        break;
}
   case 4:
         {
           d= ' O';

        break;
}
   case 5:
                  {
           e= ' O';

        break;
}
   case 6:
         {
           f= ' O';

        break;
}
   case 7:
                  {
           g= ' O';

        break;
}
   case 8:
         {
           h= ' O';

        break;
}
   case 9:
                  {
           l= ' O';

        break;
}
  default:
      {
              printf("dato no valido\n");
		break;
		}

        }
        system("cls");
printf("\n\n");
printf("___________________     ___________________       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  1  |  2  |  3  |     |  %c  |  %c  |  %c  |    \n", a, b, c);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  4  |  5  |  6  |     |  %c  |  %c  |  %c  |    \n", d, e, f);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
printf("|     |     |     |     |     |     |     |       \n");
printf("|  7  |  8  |  9  |     |  %c  |  %c  |  %c  |    \n", g, h, l);
printf("|_____|_____|_____|     |_____|_____|_____|       \n");
turno = 1;
}
// con el if>5 me aseguro que solo entre aca apartir de la 5 jugada.
//if (cont>5)
//en la proxima linea comparo las diferentes combinaciones que se deben dar para que alguien gane, tambien verifico que en las lineas no haya ningun vacio
    if(a==b && b==c && arr[2]!=0  || d==e && e==f && arr[5]!=0 || g==h && h==l && arr[8]!=0 || a==d && d==g && arr[4]!=0 || b==e && e==h && arr[5]!=0 || c==f && f==l && arr[6]!=0 || a==e && e==l && arr[5]!=0 || c==e && e==g && arr[5]!=0)
   {
    i=9;
    ganador=1;
     if (turno  == 1)
        printf("\n\nel ganador es %s!!!", jug2);

    else
     printf("\n\nel ganador es %s!!!", jug1);

   }



}
if (ganador == 0)
    printf("\nNo hay ganadores");
getch();



 }
