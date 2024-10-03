#include<stdio.h>

/*
Q.1 Calculator
	Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
	using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
	is pressed.
	
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for the exit
	Enter your choice: 4
	Enter the first number: 10
	Enter the second number: 5
	Division of 10 and 5 is 2
*/



int main()
{
	int n1,n2;
	char ch;
do
{
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for*\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for the exit\n");
	printf("Enter your choice:");
	scanf("%c",&ch);
	
	printf("Enter the first number:");
	scanf("%d",&n1);
	
	printf("Enter the second number:");
	scanf("%d",&n2);


switch(ch)
	{
		case 1:
			Addition (n1,n2);
			break;
		
		case 2:
			Substraction (n1,n2);
			break;
			
		case 3:
			Multiplication (n1,n2);
			break;
			
		case 4:
			Division (n1,n2);
			break;
		
		case 5:
			Modulo Division (n1,n2);
			break;
			
		case 0:
			printf("END");
			break;		
			
		default:
			printf("Invalid choice,");
			
	}
 }while(ch!=6);
 
 return 0;
}
