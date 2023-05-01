#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
    double rentalPrice;

public:
    Car(string make, string model, int year, double rentalPrice)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
    }

    string getMake()
    {
        return make;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    int getRentalPrice()
    {
        return rentalPrice;
    }
};

int main()
{
    Car car1("Suzuki", "Swift", 2022, 15000);
    string option;
    cout << "Enter your option" << endl;
    getline(cin, option);
    if (option == "Make")
    {
        cout << car1.getMake();
    }
    else if (option == "Model")
    {
        cout << car1.getModel();
    }
    else if (option == "Year")
    {
        cout << car1.getYear();
    }
    else if (option == "Rental Price")
    {
        cout << car1.getRentalPrice();
    }
    return 0;
}
