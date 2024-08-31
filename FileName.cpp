#include< iostream>
using namespace std;
int main() {
	char response;
	float num1, num2, result;
	char a, s, m, d;
	cout << "please enter numer 1: ";
	cin >> num1;
	cout << "enter num 2: ";
	cin >> num2;
	cout << "enter what you would like to do: addition(a), subtraction(s), multiply(m), (division)d";
	cin >> response;
	if (response == 'a')
	{
		result = num1 + num2;
		cout << result << endl;

	}
	else if (response == 's')
	{
		result = num1 - num2;
		cout << result << endl;
	}
	else if (response == 'm')
	{
		result = num1 * num2;
		cout << result << endl;
	}
	else if (response == 'd')
	{
		result = num1 / num2;
		cout << result << endl;
	}
	
	// Kekoa Barnes Min Aung quiz 1
		
	
	
	return 0;
}