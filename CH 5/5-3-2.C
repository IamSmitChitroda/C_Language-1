#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
	int n,lan;
	clrscr();

	P("Press 1 for English.\n");
	P("Press 2 for Hindi.\n");
	P("Press 3 for Gujrati.\n");
	S("%d",&lan);

	switch(lan)
	{
		case 1 :
			P("\nPress 1 for Internet Recharge.");
			P("\nPress 2 for Top-Up Recharge.");
			P("\nPress 3 for Special Recharge.");
			S("%d",&n);

			switch(n)
			{
				case 1 :
					P("You have successfully done Internet Recharge.\n");
					break;

				case 2 :
					P("You have successfully done TOp-Up Recharge.\n");
					break;

				case 3 :
					P("You have successfully done Special Recharge.\n");
					break;
			}

			break;

		case 2 :
			P("Internet Recharge ke liye 1 dabaye.\n");
			P("Top-Up Recharge ke liye 2 dabaye.\n");
			P("Special Recharge ke liye 3 dabaye.\n");
			S("%d",&n);

			switch(n)
			{
				case 1 :
					P("Apne safalta purvak Internet Recharge karliya hai.\n");
					break;

				case 2 :
					P("Apne safalta purvak  Top-Up Recharge karliya hai.\n");
					break;

				case 3 :
					P("Apne safalta purvak  Special Recharge karliya hai.\n");
					break;
			}
			break;

		case 3 :
			P("Internet Recharge karva 1 dabavo.\n");
			P("Top-Up Recharge karva 1 dabavo.\n");
			P("Special Recharge karva 1 dabavo.\n");
			S("%d",&n);

			switch(n)
			{
				case 1 :
					P("Tame Internet Recharge safaltapurvak karelu chhe.\n");
					break;

				case 2 :
					P("Tame Top-Up Recharge safaltapurvak karelu chhe.\n");
					break;

				case 3 :
					P("Tame Special Recharge safaltapurvak karelu chhe.\n");
					break;
			}
			break;
	}

	getch();
}