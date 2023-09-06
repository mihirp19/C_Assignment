#include<stdio.h>
//function to add
double add(double a, double b){
	return a + b;
}
//function to subtract
double sub(double a, double b){
	return a - b;
}
//function to multiply
double multi(double a, double b){
	return a * b;
}
//function to divide
double div(double a, double b){
	if(b !=0){
		return a/b;
	}else{
		printf("Error\n");
		return 0;
	}
}
//main function
int main(){
	int choice;
	double n1,n2,res;
	
	printf("-----MENU-----\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");

	while(1){
		printf("Enter your choice 1-4:\n");
		scanf("%d",&choice);
	
	printf("Enter the numbers:\n");
	scanf("%lf %lf", &n1,&n2);
	
	switch (choice){
		case 1:
			res = add(n1,n2);
			break;
		case 2:
			res = sub(n1,n2);
			break;
		case 3:
			res = multi(n1,n2);
			break;
		case 4:
			res = div(n1,n2);
			break;
		default:
			printf("Invalid choice\n");
			continue;
	}
	printf("Results: %lf\n",res);
}
	return 0;
}
