#include<stdio.h>
int main(){

int a,b,q;
	printf("Give Number a = ");
	scanf("%d",&a);
	printf("Give Number b = ");
	scanf("%d",&b);
q = a/b;   //qutient
int r;
r = a-(b*q); //remainder
	printf("Remainder is:%d",r);
return 0;
}