#include<stdio.h>
#include<conio.h>
#include<stdlib>
#include<windows.h>
void instrucciones4(void)
{
clrscr();
textcolor(1);
gotoxy(35,3);cprintf("INSTRUCCIONES");
textcolor(0);
gotoxy(1,6);cprintf("1- El proposito de el juego es esquivar los carros enemigos y obtener la mayor   cantidad de puntos");
gotoxy(1,8);cprintf("2- Te mueves con las flechas izquierda y derecha");
gotoxy(1,10);cprintf("3- Cada 60 puntos aumenta un nivel");
gotoxy(1,12);cprintf("4- Puedes poner pausa con la tecla enter y reaunda el juego con cualquier tecla");
gotoxy(1,14);cprintf("5- Tienes 3 vidas");
gotoxy(1,16);cprintf("6- Al chocar con un carro enemigo perderas una vida");
gotoxy(1,18);cprintf("7- El juego acaba cuando chocas 3 veces");
textcolor(1);
gotoxy(19,20);cprintf("-Para comenzar el juego presiona cualquier tecla-");
getch();
clrscr();
}
void enemigoder1(int y,int x,int z,int w,int e)
{
textcolor(2);
gotoxy(41,w);cprintf("*");
gotoxy(40,z);cprintf("***");
gotoxy(41,x);cprintf("*");
gotoxy(40,y);cprintf("***");
textcolor(0);
gotoxy(40,e);cprintf("   ");
}
void enemigoizq1(int y,int x,int z,int w,int e)
{
textcolor(2);
gotoxy(35,w);cprintf("*");
gotoxy(34,z);cprintf("***");
gotoxy(35,x);cprintf("*");
gotoxy(34,y);cprintf("***");
textcolor(0);
gotoxy(34,e);cprintf("   ");
}
void carroizq1(void)
{
textcolor(9);
gotoxy(35,21);cprintf("*");
gotoxy(34,22);cprintf("***");
gotoxy(35,23);cprintf("*");
gotoxy(34,24);cprintf("***");
textcolor(0);
gotoxy(41,21);cprintf(" ");
gotoxy(40,22);cprintf("   ");
gotoxy(41,23);cprintf(" ");
gotoxy(40,24);cprintf("   ");
}
void carroder1(void)
{
textcolor(9);
gotoxy(41,21);cprintf("*");
gotoxy(40,22);cprintf("***");
gotoxy(41,23);cprintf("*");
gotoxy(40,24);cprintf("***");
textcolor(0);
gotoxy(35,21);cprintf(" ");
gotoxy(34,22);cprintf("   ");
gotoxy(35,23);cprintf(" ");
gotoxy(34,24);cprintf("   ");
}
void carroscolor(void)
{
textbackground(7);
clrscr();
char a,s;
int b,y=-2,x=-1,z=0,w=1,e=-3,r,m=0,d,g,k,n=22,h=22,f=0,p=1,i,t=1,j[3],q=60,u=1;
j[0]=2;j[1]=3;j[2]=4;
randomize();
while(t==1)
{
while(p==1)
{
y=-2,x=-1,z=0,w=1,e=-3;
m=0;f=0;u=1;q=60;
clrscr();
textcolor(1);
gotoxy(38,12);cprintf("CARRITOS");
textcolor(0);
gotoxy(22,14);cprintf("- Presiona cualquier tecla para comenzar");
gotoxy(22,16);cprintf("- Para ver las instrucciones presiona esc");
s=getch();
if(s==char(27))
	{
   instrucciones4();
   }
clrscr();
textcolor(1);
gotoxy(33,2);cprintf("Elige dificultad");
textcolor(0);
gotoxy(1,5);cprintf("Muy facil presiona 1");
gotoxy(1,7);cprintf("Facil presiona 2");
gotoxy(1,9);cprintf("Medio presiona 3");
gotoxy(1,11);cprintf("Dificil presiona 4");
gotoxy(1,13);cprintf("Muy dificil presiona 5");
gotoxy(1,15);cprintf("Extremo presona 6");
gotoxy(1,17);cprintf("Elige: ");
scanf("%i",&g);
switch (g)
{
case 1:
d=25;
break;
case 2:
d=20;
break;
case 3:
d=15;
break;
case 4:
d=10;
break;
case 5:
d=5;
break;
case 6:
d=2;
break;
}
clrscr();
textcolor(0);
gotoxy(12,3);cprintf("nivel %i",u);
gotoxy(50,24);cprintf("puntaje: %i",m);
carroder1();
gotoxy(2,10);cprintf("PRESIONA CUALQUIER TECLA");
gotoxy(5,12);cprintf("   PARA COMENZAR");
gotoxy(14,14);cprintf("Y");
gotoxy(7,16);cprintf("PRESIONA ENTER");
gotoxy(6,18);cprintf("PARA PONER PAUSA");
textcolor(12);
gotoxy(50,3);cprintf("%c",3);
gotoxy(50,4);cprintf("%c",3);
gotoxy(50,5);cprintf("%c",3);
while(j[0]<=24)
	{
   textcolor(14);
   gotoxy(30,j[2]);cprintf("%c",254);
   gotoxy(30,j[1]);cprintf("%c",254);
   gotoxy(30,j[0]);cprintf(" ");
   gotoxy(46,j[2]);cprintf("%c",254);
   gotoxy(46,j[1]);cprintf("%c",254);
   gotoxy(46,j[0]);cprintf(" ");
   textcolor(0);
   gotoxy(38,j[2]);cprintf("|");
   gotoxy(38,j[1]);cprintf("|");
   gotoxy(38,j[0]);cprintf(" ");
   j[0]=j[0]+3;
   j[1]=j[1]+3;
   j[2]=j[2]+3;
   }
switch(d)
{
textcolor(0);
case 25:
gotoxy(9,24);cprintf("Muy facil");
break;
case 20:
gotoxy(11,24);cprintf("Facil");
break;
case 15:
gotoxy(11,24);cprintf("Medio");
break;
case 10:
gotoxy(10,24);cprintf("Dificil");
break;
case 5:
gotoxy(9,24);cprintf("Muy dificil");
break;
case 2:
gotoxy(10,24);cprintf("Extremo");
break;
}
getch();
p=2;
i=1;
}
while(i==1)
{
while(j[0]<=24)
	{
   textcolor(14);
   gotoxy(30,j[2]);cprintf("%c",254);
   gotoxy(30,j[1]);cprintf("%c",254);
   gotoxy(30,j[0]);cprintf(" ");
   gotoxy(46,j[2]);cprintf("%c",254);
   gotoxy(46,j[1]);cprintf("%c",254);
   gotoxy(46,j[0]);cprintf(" ");
   textcolor(0);
   gotoxy(38,j[2]);cprintf("|");
   gotoxy(38,j[1]);cprintf("|");
   gotoxy(38,j[0]);cprintf(" ");
   j[0]=j[0]+3;
   j[1]=j[1]+3;
   j[2]=j[2]+3;
   }
p=2;
textcolor(0);
gotoxy(62,24);cprintf("esc para salir");
gotoxy(50,24);cprintf("puntaje: %i",m);
gotoxy(12,3);cprintf("nivel %i",u);
r=1;
while(r==1)
{
if(e==-3||e==25)
{
b=random(3);
}
if(b==0)
{
r=1;
}
else
{
r=0;
}
}
textcolor(0);
gotoxy(1,1);cprintf("                                                         ");
Sleep(d);
while(kbhit())
{
a=getch();
if(a==char(27))
	{
   f=p=i=t=4;textbackground(0);
   }
if(a==char(75))
	{
   k=35;
   carroizq1();
   }
if(a==char(77))
	{
   k=41;
   carroder1();
   }
if(a==char(13))
	{
   textcolor(2);
   gotoxy(50,13);cprintf("PAUSA");
   getch();
   textcolor(0);
   gotoxy(50,13);cprintf("     ");
   }
}
if(b==1)
	{
  	enemigoizq1(y,x,z,w,e);
   }
if(b==2)
	{
   enemigoder1(y,x,z,w,e);
   }
if(y<25)
	{
   y++;
   }
if(x<25)
	{
   x++;
   }
if(z<25)
	{
   z++;
	}
if(w<25)
	{
   w++;
   }
if(e<26)
	{
   e++;
   }
if(j[0]==26)
   {
   j[0]=3;
   j[1]=4;
   j[2]=2;
   }
   if(j[0]==27)
   {
   j[0]=4;
   j[1]=2;
   j[2]=3;
   }
   if(j[0]==25)
   {
   j[0]=2;
   j[1]=3;
   j[2]=4;
   }
if(e==26)
	{
   y=-2,x=-1,z=0,w=1,e=-3;
   m=m+3;
   if(m==q)
	{
   d--;
   q=q+60;
   u++;
   textcolor(0);
   gotoxy(50,12);cprintf("pasaste de nivel");
   gotoxy(50,14);cprintf("presiona cualquier tecla");
   gotoxy(50,16);cprintf("para continuar");
   y=-2,x=-1,z=0,w=1,e=-3;d--;
   getch();
   getch();
   textcolor(7);
   gotoxy(50,12);cprintf("                 ");
   gotoxy(50,14);cprintf("                        ");
   gotoxy(50,16);cprintf("              ");
   }
   }
if(k==35&&b==1)
	{
   if(n==w)
   	{
      f++;
      if(f==3)
      {
      textcolor(7);
      gotoxy(50,3);cprintf(" ");
      gotoxy(50,4);cprintf(" ");
		gotoxy(50,5);cprintf(" ");
      textcolor(1);
      gotoxy(55,8);cprintf("PERDISTE");
      textcolor(0);
      gotoxy(50,10);cprintf("-Presiona enter");
      gotoxy(50,12);cprintf("para volver a jugar");
      gotoxy(50,14);cprintf("-Presiona esc");
      gotoxy(50,16);cprintf("para salir del juego");
      while(f==3)
      {
      s=getch();
      if(s==char(27))
      {
      f=4;
      p=4;
      i=4;
      t=4;
      textbackground(0);
      }
      if(s==char(13))
      {
      p=1;
      i=2;
      f=4;
      }
      if(s!=char(13)&&s!=char(27))
      {
      f=3;
      }
      }
      }
      while(p==2)
      {
      p=3;
      textcolor(0);
      gotoxy(50,12);cprintf("presiona la flecha derecha");
      gotoxy(50,14);cprintf("para usar otra vida");
      getch();
      getch();
      getch();
      textcolor(7);
      gotoxy(50,12);cprintf("                          ");
      gotoxy(50,14);cprintf("                   ");

      if(f==1)
      {
      textcolor(7);
		gotoxy(50,5);cprintf(" ");
      y=-2,x=-1,z=0,w=1,e=-3;
      }
      if(f==2)
      {
      textcolor(7);
      gotoxy(50,4);cprintf(" ");
		gotoxy(50,5);cprintf(" ");
      y=-2,x=-1,z=0,w=1,e=-3;
      }
      textcolor(7);
      gotoxy(34,20);cprintf("   ");
      gotoxy(34,19);cprintf("   ");
      gotoxy(34,18);cprintf("   ");
      }
      }
   }
if(k==41&&b==2)
	{
   if(h==w)
   	{
      f++;
      if(f==3)
      {
      textcolor(7);
      gotoxy(50,3);cprintf(" ");
      gotoxy(50,4);cprintf(" ");
		gotoxy(50,5);cprintf(" ");
      textcolor(1);
      gotoxy(55,8);cprintf("PERDISTE");
      textcolor(0);
      gotoxy(50,10);cprintf("-Presiona enter");
      gotoxy(50,12);cprintf("para volver a jugar");
      gotoxy(50,14);cprintf("-Presiona esc");
      gotoxy(50,16);cprintf("para salir del juego");
      while(f==3)
      {
      s=getch();
      if(s==char(27))
      {
      f=4;
      p=4;
      i=4;
      t=4;
      textbackground(0);
      }
      if(s==char(13))
      {
      p=1;
      i=2;
      f=4;
      }
      if(s!=char(13)&&s!=char(27))
      {
      f=3;
      }
      }
      }
      while(p==2)
      {
      p=3;
      textcolor(0);
      gotoxy(50,12);cprintf("presiona la flecha izquierda");
      gotoxy(50,14);cprintf("para usar otra vida");
      getch();
      getch();
      getch();
      textcolor(7);
      gotoxy(50,12);cprintf("                            ");
      gotoxy(50,14);cprintf("                   ");
      if(f==1)
      {
      textcolor(7);
		gotoxy(50,5);cprintf(" ");
      y=-2,x=-1,z=0,w=1,e=-3;
      }
      if(f==2)
      {
      textcolor(7);
      gotoxy(50,4);cprintf(" ");
		gotoxy(50,5);cprintf(" ");
      y=-2,x=-1,z=0,w=1,e=-3;
      }
      textcolor(7);
      gotoxy(40,20);cprintf("   ");
      gotoxy(40,19);cprintf("   ");
      gotoxy(40,18);cprintf("   ");
      }
      }
   }
   textcolor(7);
gotoxy(30,25);cprintf("                     ");
}
}
}