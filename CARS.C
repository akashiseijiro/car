#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
# define KeyUp 72
# define KeyDown 80
# define KeyLeft 75
# define KeyRight 77
# define KeyEsc 27
void main()
{
	int x=80/2-9,y=25/2,ch,i;
	int rectPosX=100,cir1PosX=200,cir2PosX=500;

	textmode(C80);
	while(1)
	{
	 gotoxy(x,y);
	   setcolor(BLUE);
	    for(i=0;i<=19;i++) rectangle(rectPosX-i,300-i,rectPosX+500+i,511+i);

	       setcolor(RED);
	     for(i=50;i<=69;i++)
	     {
	      circle(cir1PosX,600,i);
	      circle(cir2PosX,600,i);
	     }

		  ch=getch();
		  switch(ch)
		  {
			case KeyUp:y--;if(y<1)y=25; break;
			case KeyDown:y++;if(y>25)y=1;break;
			case KeyLeft:x--;if(x<1)x=80-9;break;
			case KeyRight:x++;if(x>80-9)x=1;break;
			case KeyEsc:exit(1);
		  }





	}
}