#include<stdio.h>
#define p printf
#define s scanf

main () {
	
	char email[20], pass[20];
	int size=0, i, at=0, d=0 ,small=0 ,sy=0;
	
	p("Enter your Email : ");
	s("%s", &email);
	p("Enter your password : ");
	s("%s", &pass);
	
	
	for(i=0 ;email[i] != NULL; i++) {
		if(email[i] == '@' )
			at++;
		if(email [i] == '.')
			d++;
			
	}
	
	if((at==1) && (d==1)) {
		
		at=0;
		d=0;
		
		for(i=0 ;pass[i] != NULL; i++)
			size++;
		
		if(size >= 8) {
		
			for(i = 0; i < size; i++) {
			
				if(pass[i] >= 'A' || pass[i]<='Z')
					at=1;
				
				else if(pass[i] >= 'A' || pass[i]<='Z')
					small=1;
					
				else if(pass[i] >= '0' || pass[i]<='a')
					d=1;
					
				else
					sy=1;
			}
			
			(at==1 && small==1 && d==1)
				? p("Login successfull !!")
				: p("Your password is not Strong !!");
		
		} else 
			p("\n\nYour password is not strong !!");
		
	} else
		p("Your Email is not valid !!");
		
	
}