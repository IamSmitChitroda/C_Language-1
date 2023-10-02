#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	char a;
	clrscr();
	P("Press S : Sunday \n");
	P("Press M : Monday \n");
	P("Press T : Tuesday \n");
	P("Press W : Wednesday \n");
	P("Press t : Thursday \n");
	P("Press F : Friday \n");
	P("Press s : Saturday \n");
	S("%c",&a);

	switch(a)
	{
		case 'S' :
			P("Sunday !!");
			break;
		case 'M' :
			P("Monday !!");
			break;
		case 'T' :
			P("Tuesday !!");
			break;
		case 'W' :
			P("Wednesday !!");
			break;
		case 't' :
		       P("Thursday !!");
		       break;
		case 'F' :
		       P("Friday !!");
		       break;
	       case 's' :
		      P("Saturday !!");
		      break;
	}
	getch();
}

