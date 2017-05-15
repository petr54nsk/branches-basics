#include "deposit.h"

int func(){
int d,p,s;
int k=true;
	printf ("Enter the number of days of contribution: ");
	scanf("%d",&d);
		if (d>365 || d<0){
			while (k==true){
			printf ("Enter the number of days, not more than 365: ");
			 	scanf("%d",&d);
					if (d<=365 && d>0){
						break;
					}
				}
			}
	printf ("Enter the amount of your deposit: ");
	scanf("%d",&s);
		if (s<10000){
			while (k==true){
			printf ("Enter the deposit amount is not less than 10000r.: ");
			 	scanf("%d",&s);
					if (s>=10000){
						break;
					}
				}
			}
		if (s<100000){
			if(d>=0 && d<=30){
				p=s-s*0.1;
				printf ("The final amount of the deposit: %d ?. \n",p);
			}
			
			if(d>=31 && d<=120){
				p=s+s*0.02;
				printf ("The final amount of the deposit: %d r.\n",p);
			}
			
			if(d>=121 && d<=240){
				p=s+s*0.06;
				printf ("The final amount of the deposit: %d r. \n",p);
			}
			
			if(d>=241 && d<=365){
				p=s+s*0.12;
				printf ("The final amount of the deposit: %d r. \n",p);
			}
		}
				else {
					if(d>=0 && d<=30){
					p=s-s*0.1;
					printf ("The final amount of the deposit: %d r. \n",p);
				}
				
				if(d>=31 && d<=120){
					p=s+s*0.03;
					printf ("The final amount of the deposit: %d r. \n",p);
				}
				
				if(d>=121 && d<=240){
					p=s+s*0.08;
					printf ("The final amount of the deposit: %d r. \n",p);
				}
				
				if(d>=241 && d<=365){
					p=s+s*0.15;
					printf ("The final amount of the deposit: %d r. \n",p);
				}
}
}
