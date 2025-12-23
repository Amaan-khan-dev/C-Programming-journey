// Write a programe to find if roll number found in between 1 to 100 (generate using loop) in not found then repeat loop unit correct roll number notfound.
#include<stdio.h>
int main(){
	int n,i;
	printf("Enter your roll number: ");
	scanf("%d",&n); //5
//	for testin purpose
//	printf("your enterd roll number is= %d\n",n);
	for(i=1;i<=10;i++){
		if(n>i){
			printf("enterd correct roll number: ");
			scanf("%d", &n);
		}
		else{
			printf("your enterd correct number");
		}
		break;
//		printf("%d\n",i);
	}
	return 0;
}
