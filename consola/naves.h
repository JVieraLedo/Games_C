#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void instrucciones3(void)
	{
   clrscr();
   textcolor(9);
   gotoxy(33,3);cprintf("INTRUCCIONES\n");
   printf("\n1-El proposito de el juego es matar a la nave oponente\n2-Te mueves con las flechas derecha e izquierda\n3-Disparas con la flecha de arriba\n4-Cada diez puntos sube un nivel de dificultad\n5-El enemigo no te puede atacar cuando estas bajo una barra de proteccion pero  tu a el si\n6-tienes 3 vidas\n7-cada vez que el enemigo te da un disparo perderas una vida\n8-Si el enemigo llega hasta las barras de proteccion perderas una vida\n9-Presiona enter para poner pausa");
   gotoxy(20,17);cprintf("presiona cualquier tecla para comenzar");
   getch();
   }
int vidas(int v,int t)
	{
   char a,c=2;
   textcolor(12);
   if(v==0)
   	{
    gotoxy(79,1);cprintf("%c",3);
    gotoxy(79,2);cprintf("%c",3);
    gotoxy(79,3);cprintf("%c",3);
    	}
    if(v==1)
    	{
      gotoxy(79,1);cprintf("%c",3);
    	gotoxy(79,2);cprintf("%c",3);
    	gotoxy(79,3);cprintf(" ");
      }
    if(v==2)
    	{
      gotoxy(79,1);cprintf("%c",3);
    	gotoxy(79,2);cprintf(" ");
    	gotoxy(79,3);cprintf(" ");
      }
    if(v==3)
    	{
      clrscr();
      textcolor(12);
      gotoxy(34,12);cprintf("JUEGO TERMINADO");
      textcolor(9);
      gotoxy(25,14);cprintf("para volver a jugar prsiona enter");
      gotoxy(25,16);cprintf("para salir de el juego presiona esc");
      gotoxy(65,25);printf("puntaje: %i",t);
      while(v==3)
      	{
      	a=getch();
            if(a==char(27))
            	{
               v=0;
               c=3;
               }
            else
            	{
               v=3;
               }
            if(a==char(13))
      			{
               v=0;
               c=1;
         		}
      	}
      }
      return (c);
   }
void barras(void)
	{
   textcolor(10);
   gotoxy(15,22);cprintf("*********");
	gotoxy(35,22);cprintf("*********");
	gotoxy(55,22);cprintf("*********");
   }
void naves(void)
{
char a;
int x=45,y=24,m=40,n=2,i,p=0,t=0,l=40,g,z,h,v=0,c=1;
randomize();
while(c==1)
{
c=2;
clrscr();
textcolor(12);
gotoxy(38,12);cprintf("NAVES");
textcolor(9);
gotoxy(25,14);cprintf("-PARA COMENZAR PRESIONA ENTER");
a=getch();
instrucciones3();
clrscr();
x=45;y=24;m=40;n=2;p=0;t=0;l=50;v=0;
gotoxy(65,25);printf("puntaje: %i",t);
barras();
c=vidas(v,t);
while(c==2)
{
gotoxy(65,25);printf("puntaje: %i",t);
if(p==4)
	{
   	while(p==4)
      {
      	if(p==4)
         	{
            g=m;z=n;
            m=random(78);
         	}
   			if(m==0||m==1)
   				{
               p=4;
               }
            else
            	{
               p=0;
               }
      }
      barras();
      n++;
      gotoxy(g,z);cprintf(" ");
   	gotoxy(g-1,z-1);cprintf("   ");
   if(n>=25)
   	{
      textcolor(11);
      gotoxy(32,12);cprintf("PERDISTE UNA VIDA");
      gotoxy(26,14);cprintf("presiona enter para continuar");
      p=1;
      v++;
      	while(p==1)
           {
              a=getch();
              if(a==char(13))
                	{
                    p=0;
                  }
              else
                 	{
                    p=1;
                  }
           }
      n=2;
      clrscr();
      c=vidas(v,t);
		barras();
      }
   p=0;
   }
for(i=n+1;i<26;i++)
	{
	if(x>=79)
		{
   		x=2;
   	}
	if(x<=1)
		{
   		x=78;
   	}
textcolor(9);
gotoxy(x,y);cprintf("*");
gotoxy(x-1,y+1);cprintf("***");
gotoxy(m,i);printf("*");
Sleep(l);
gotoxy(m,i);printf(" ");
for(h=15;h<24;h++)
{
	if(m==h&&i==22)
		{
   		i=25;barras();
   	}
}
for(h=35;h<44;h++)
{
	if(m==h&&i==22)
		{
   		i=25;barras();
   	}
}
for(h=55;h<64;h++)
{
	if(m==h&&i==22)
		{
   		i=25;barras();
   	}
}
if(x==m&&i==y||x==m-1&&i==y||x==m+1&&i==y)
               	{
                  textcolor(11);
                  gotoxy(32,12);cprintf("PERDISTE UNA VIDA");
      				gotoxy(26,14);cprintf("presiona enter para continuar");
                  p=1;m=40;n=2;v++;
                  while(p==1)
                  {
                  a=getch();
                  if(a==char(13))
                  	{
                     p=0;
                     }
                  else
                  	{
                     p=1;
                     }
                  }
                  clrscr();
                  c=vidas(v,t);
                  barras();
                  }
   while(kbhit())
   {
	a=getch();
   	if(a==char(27))
      	{
         v=0;c=3;
         }
   	if(a==char(13))
      	{
         textcolor(12);
         gotoxy(37,12);cprintf("PAUSA");
         getch();
         gotoxy(37,12);printf("     ");
         }
   	if(a==char(75))//izquierda
   		{
      		gotoxy(x,y);printf("*");
      		gotoxy(x-1,y+1);cprintf("***");
      		x--;
            gotoxy(x+1,y);printf(" ");
      		gotoxy(x,y+1);cprintf("   ");
   		}
      if(a==char(77))//derecha
   		{
      		gotoxy(x,y);cprintf("*");
      		gotoxy(x-1,y+1);cprintf("***");
      		x++;
            gotoxy(x-1,y);printf(" ");
      		gotoxy(x-2,y+1);cprintf("   ");
   		}
      if(a==char(72))//arriba
      	{
      		for(int i=23;i>0;i--)
         		{
               textcolor(12);
            	gotoxy(x,i);cprintf("*");
            	Sleep(10);
            	gotoxy(x,i);printf(" ");
               if(x==m&&i==n||x==m-1&&i==n||x==m+1&&i==n)
               	{
                  g=m;z=n;
                  gotoxy(g,z);cprintf(" ");
						gotoxy(g-1,z-1);cprintf("   ");
                  barras();
                  t++;
                  if(t==10||t==20||t==30||t==40)
                  	{
                     switch (t)
                     	{
                        case 10:
                        	l=40;
                        	break;
                        case 20:
                        	l=30;
                           break;
                        case 30:
                        	l=20;
                           break;
                        case 40:
                        	l=10;
                           break;
                        }
                     }
                  i=1;
                  p=0;
                  	while(i==1)
                     {
                  		m=random(78);
                             	if(m==0||m==1)
                           	{
                              i=1;
                              }
                           else
                           	{
                              i=2;
                              }
                     }
                  }
               }
      	}
   }
textcolor(13);
gotoxy(m,n);cprintf("*");
gotoxy(m-1,n-1);cprintf("***");
gotoxy(65,25);printf("puntaje: %i",t);
gotoxy(1,25);printf("esc para salir");
}
p=p+1;
}
}
}
