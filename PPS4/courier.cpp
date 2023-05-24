/*Create a parent class named ‘Courier’ with the following:

Data members CourierID, Name_of_Courier.
Method named PrintBill() to accept the Base_fare of type double as parameter and
display the CourierID, Name_of_Courier , and Shipping_Cost, where Shipping_Cost = Base_fare + 30.
Create a subclass names ‘Internatial_services’ which inherits from the Courier class.
The class include the following:
Data members Destination, Weight.
Method named FinalBill()to print the CourierID, Name_of_Courier, Destination, Weight and Total_ ShippingCost,
where Total_ShippingCost = Base_fare * Weight.
Print the message “More Sale” when Total_ShippingCost is more than 100, otherwise print the message “Less Sale”.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Courier
{
    int courierID;
    string courier_name;

public:
    void setData(int courierID, string courier_name)
    {
        this->courierID = courierID;
        this->courier_name = courier_name;
    }
    void getData()
    {
        cout << "Courier ID : " << courierID;
        cout << "Courier Name : " << courier_name;
    }
    void printBill()
    {
        double base_fare;
        cout << "Enter Base Fare";
        cin >> base_fare;
        double shipping_cost = base_fare + 30;
        getData();
        cout << "Shipping Cost : " << shipping_cost;
    }
};

class International_Services : public Courier
{
    float weight;
    string destination;
    float total_shipping_cost = ;

public:
    void setData(float weight, string destination){
        this->weight = weight;
        this->destination = destination;
        
    }
    void finalBill()
    {
        getData();

    }
};
