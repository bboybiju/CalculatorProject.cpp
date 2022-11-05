#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int num1;
	cout << "Enter the first number: ";
	cin >> num1;

	int num2;
	cout << "Enter the second number: ";
	cin >> num2;

	int method;
	cout << "type 1 for + (plus)" << endl;
	cout << "type 2 for - (minus)" << endl;
	cout << "type 3 for * (multiply)" << endl;
	cout << "type 4 for / (divide)" << endl;
	cout << "Select the calculating method: ";
	cin >> method;
	 
	if (method == 1 ) {
		cout << "The result is: " << num1 + num2;
	}
	
	if (method == 2 ) {
		cout << "The result is: " << num1 - num2;
	}

	if (method == 3) {
		cout << "The result is: " << num1 * num2;
	}

	if (method == 4) {
		cout << "The result is: " << num1 / num2;
	}

	else {
		return 0;
	}
	return 0;	
}