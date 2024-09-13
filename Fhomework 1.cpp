#include <iostream>
#include <string>
using namespace std;
int main() {
	char response=0;
	float result=0;
	string item1, item2, item3, item4, name;
	item1 = "bread";
	item2 = "milk";
	item3 = "eggs";
	item4 = "fruit";
	int numBread, numMilk, numEggs, numFruits;
	const float breadPrice = 6.20;
	const float milkPrice = 5.35;
	const float eggsPrice = 10.80;
	const float fruitPrice = 11.45;
	char discount;
	const float none = 0.00;
	const float bronze = 0.05;
	const float silver = 0.10;
	const float gold = 0.15;
	while (response != 's')
	{
		cout << "What items do you have? ";
		cin >> response;
		if (response == 'b')
		{

			cout << "how much bread? : ";
			cin >> numBread;
			result += numBread * breadPrice;
		}
		else if (response == 'm')
		{

			cout << "how much milk? : ";
			cin >> numMilk;
			result += numMilk * milkPrice;
		}
		else if (response == 'e')
		{

			cout << "how much eggs? : ";
			cin >> numEggs;
			result += numEggs * eggsPrice;
		}
		else if (response == 'f')
		{

			cout << "how much fruits? : " << endl;
			cin >>numFruits;
			result += numFruits * fruitPrice;
		}
	}
	cout << "What type of membership do you have? :"; cin >> response;
	 if (response == 'n')

	{
		discount = none * result;
	}
	else if (response == 'b')
		
	{
		discount = bronze * result;
	}
	else if (response == 's')
	{
		discount = silver*result;

		
	}
	else if (response == 'g')
	 {
		 discount = gold * result;
	 }

	 cout << "Your total is: " << result - discount << endl;


	return 0;



	// kekoa barnes, homework 1//
}