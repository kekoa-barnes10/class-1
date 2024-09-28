#include <iostream>
#include <string>

using namespace std;
class Car {
private:
    string model;
    int year;          

public:
    
    Car(const std::string& carModel, int carYear) : model(carModel), year(carYear) 
    {
       cout << "Car created: " << model << ", Year: " << year << endl;
    }
    Car() 
    {
       cout << "Car destroyed: " << model << endl;
    }
  
};
int main() 
{
    string car = "BMW M4 ";
    int year = 2020;
    Car myCar(car, year);
 cout << "Model: " << car << " Year: " << year << endl;
    return 0;
}


// quiz 2 kekoa barnes 