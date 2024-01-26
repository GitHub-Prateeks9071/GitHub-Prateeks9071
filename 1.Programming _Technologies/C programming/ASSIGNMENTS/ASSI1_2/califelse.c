int main() {
	//Declare variables
	int choice, num1, num2, add, sub, mul, div, mod;
	//Take user input
	printf("Menu\n");
	printf("1. add \n2. sub \n3. mul \n4. div \n5. mod");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	if(choice == 1) {
		printf("Enter number 1: ");
		scanf("%d", &num1);
		printf("Enter number 2: ");
		scanf("%d", &num2);
		add = num1 + num2;
		printf("Addition is %d", &add);
	}
	else if(choice == 2) {
		printf("Enter number 1: ");
		scanf("%d", &num1);
		printf("Enter number 2: ");
		scanf("%d", &num2);
		sub = num1 - num2;
		printf("Subtraction is %d", &sub);
	}
	else if(choice == 3) {
		printf("Enter number 1: ");
		scanf("%d", &num1);
		printf("Enter number 2: ");
		scanf("%d", &num2);
		mul = num1 * num2;
		printf("Multiplication is %d", &mul);
	}
	else if(choice == 4) {
		printf("Enter number 1: ");
		scanf("%d", &num1);
		printf("Enter number 2: ");
		scanf("%d", &num2);
		if(num2 == 0) {
			printf("Cannot divide the number by 0\n");
		}
		else {
			div = num1 / num2;
			printf("Division is %d", &div);
		}
	}
	else if(choice == 5) {
		printf("Enter number 1: ");
		scanf("%d", &num1);
		printf("Enter number 2: ");
		scanf("%d", &num2);
		mod = num1 % num2;
		printf("Modulus is %d", &mod);
	}
	else {
		printf("Invalid Input!");
	}
}
