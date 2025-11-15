#include <stdio.h>
int main(){

float p, r, t, si;
	printf("Enter Principal: ");
scanf("%f", &p);

	printf("Enter rate of Intrest: ");
scanf("%f", &r);

	printf("Enter Times (in Year): ");
scanf("%f", &t);

  si = (p*r*t)/100;

printf("Simple Intrest  = %.2f", si);

return 0;
}