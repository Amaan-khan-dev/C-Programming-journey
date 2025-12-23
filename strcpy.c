#include<stdio.h>
#include<string.h>
int main(){
	char str1[10] = "BCA123";
	char str2[11];
	int a;
	printf("copy to another string 2 is: %s",strcpy(str2,str1));
	printf("\n str2 = %s",str2);
	printf("\n str1 = %s",str1);
	str2[11]= "change";
	printf("\n str2 = %s",str2);
	return 0;
}
