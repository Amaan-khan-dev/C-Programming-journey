//  assignment for conveting celsius to farenheit.
//	Developed by Amaan.
	#include<stdio.h>
	int main(){
	    int user_choice;
	    float fahrenheit;
	    float celsius;
	    
		printf("Hello, There\n");
	    printf("Welcome to Temperature Converter Program.\n");
	    printf("Press: 1 To convert Celsius to Fahrenheit\n");
	    printf("Press: 2 To convert Fahrenheit to Celsius\n");
	    printf("Enter Your Choice: ");
	    scanf("%d",&user_choice);
	
	
	    // testing above code so far
	    
		printf("You chose option: %d\n",user_choice);
	    if(user_choice==1){
	    	printf("Enter Celsius Input: ");
	    	scanf("%f",&celsius);
	    	
	//    	testing purose
	//		printf("you enter thsi celcius number: %f",celsius);
			
			
			fahrenheit = ( celsius * 9.0/5) + 32;
			printf("your result = %.2f", fahrenheit);
			}
		else if(user_choice==2){
			printf("Enter you Farenheit Input: ");
			scanf("%f", &fahrenheit);
			
	//    	testing purose
	//		printf("you enter this farenheit number: %f",fahrenheit);
			
			celsius = (fahrenheit - 32) * 5.0/9;
			printf("Your Result Is: %.2f", celsius);
			
			}
		else{
			printf("Invalid choice. Please Run Program again");
		}
	
		return 0;
	}
		

