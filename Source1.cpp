#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int num1;
	cout << "Enter the first number: ";
	cin >> num1;

	int num2;
	cout << "Enter the second number";
	cin >> num2;

	char method;
	cout << "Enter the number of the calculation method:       + (type: 1),       - (type: 2)";
	cin >> method;

	if method == 1
		cout << num1 + num2;
	if method == 2
		cout << num1 - num2;	 


	return 0;	
}