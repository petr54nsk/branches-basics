#include "deposit.h"

int k=true;

int Days(int *d){
		if (*d>365 || *d<0){
			while (k==true){
			printf ("Enter the number of days, not more than 365 and not less 0: ");
			 	scanf("%d",&*d);
					if (*d<=365 && *d>0){
						break;
					}
				}
			}
}

int Money(int *s){
		if (*s<10000){
			while (k==true){
			printf ("Enter the deposit amount is not less than 10000r.: ");
			 	scanf("%d",&*s);
					if (*s>=10000){
						break;
					}
				}
			}
}
