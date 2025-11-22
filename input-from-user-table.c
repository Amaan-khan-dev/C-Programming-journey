#include<stdio.h>
int main(){

int i,num;

printf("give number that you want to print table of that number: ");
scanf("%d", &num);

for(i=1;i<=10;i++){

	printf("%d\n", i*num); \\print table 
}
return 0;
}