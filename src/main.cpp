#include "deposit.h"
#include "deposit.cpp"//
int main (){
int d,p,s;
int k=true;
	printf ("Enter the number of days of contribution: ");
	scanf("%d",&d);
	Days(&d);
	printf ("Enter the amount of your deposit: ");
	scanf("%d",&s);
	Money(&s);
	system("cls");
		if (s<100000){
			if(d>=0 && d<=30){
				p=s-s*0.1;
				printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
			}
			
			if(d>=31 && d<=120){
				p=s+s*0.02;
				printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
			}
			
			if(d>=121 && d<=240){
				p=s+s*0.06;
				printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
			}
			
			if(d>=241 && d<=365){
				p=s+s*0.12;
				printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
			}
		}
				else {
					if(d>=0 && d<=30){
					p=s-s*0.1;
					printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
				}
				
				if(d>=31 && d<=120){
					p=s+s*0.03;
					printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
				}
				
				if(d>=121 && d<=240){
					p=s+s*0.08;
					printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
				}
				
				if(d>=241 && d<=365){
					p=s+s*0.15;
					printf ("Days:%d\nMoney:%d\nThe final amount of the deposit: %d r. \n",d,s,p);
				}
		}
}
