#include <iostream>

using namespace std;

int input(int val)
{
	cout << "Enter a value: ";
	cin >> val;
	return val;
}
int add(int a, int b)
{	
	return a+b;
}
int subtract(int a, int b)
{
	return a-b;
}
int multiply(int a, int b)
{
	return a*b;

}
int divide(int a, int b)
{
	return a/b;
}
int menu()
{
	int answer;
	cout << "Choose an operation: " << endl;
	cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n\n";
	cin	>> answer;
	return answer;
}

int main()
{
	while (true)
	{
	int answer = menu(); 
	
	if (answer == 1)
		cout << "The sum is " << add(input(1), input(2)) << endl;
	else if (answer == 2)
		cout << "The difference is " << subtract(input(1), input(2)) << endl;
	else if (answer == 3)
		cout << "The product is " << multiply(input(1), input(2)) << endl;
	else if (answer == 4)
		cout << "The quotient is " << divide(input(1), input(2)) << endl;
	else
		cout << "Invalid answer" << endl;
	
	while (true)
	{
	char choice;
	cout << "Do you want to continue [y/n]?: " << endl;
	cin >> choice;
	if (choice == 'y')
	{
		main();
	}
	else if (choice == 'n')
	{
		return 0;
	}
	else
	{
		cout << "Invalid choice" << endl;
		break;
	}
	}
	
	}
			
	return 0;
}
