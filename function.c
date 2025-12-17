//user Define FUnction has 3 Main Parts
//1)Function Declaration
//2)Function Definition
//3)Function call
#include<stdio.h>

int greet(); 	// Function Declaration

int main(){
	greet();	 // Function Calling
	return 0;
}
int greet(){	// Function Definition
	printf("Hello from function\n");
	printf("This function Created by Amaan khan user defined");
}
