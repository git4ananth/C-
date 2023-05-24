#include <iostream>
#include <cstdlib>
using namespace std;

class Courier
{
    int courierID;
    string courier_name;

    double shipping_cost(double base_fare){
        return base_fare + 30;
    };

public:

    Courier(int courierID, string courier_name){
        this->courierID = courierID;
        this->courier_name = courier_name;
    }
    virtual void print_bill(double base_fare)
    {
        cout << "Courier ID : " << courierID;
        cout << "Courier Name : " << courier_name;
        cout << "Shipping Cost : " << shipping_cost(base_fare);
    }

    int get_courier_ID(){
        return courierID;
    }
    string get_courier_name(){
        return courier_name;
    }
    virtual double get_shipping_cost(){
        return get_shipping_cost();
    }
};

class International_Services : public Courier
{
    private:
        float weight;
        string destination;
        //double total_shipping_cost;

        double calculate_shipping_cost(double base_fare){
            return base_fare * weight;
        };

    public:
        International_Services(int courierID, string courier_name, float weight, string destination) : Courier(courierID, courier_name){
            this-> weight = weight;
            this-> destination = destination;
        }
        void print_bill(double base_fare)
        {
            double total_shipping_cost = calculate_shipping_cost(base_fare);
            string message = "Less Sale";
            if (total_shipping_cost > 100){
                message = "More Sale";
            }
            cout << "Courier ID : " << get_courier_ID();
            cout << "Courier Name : " << get_courier_name();
            cout << "Shipping Cost : " << total_shipping_cost;
        }
};

int main(){
    Courier c(123, "DHL");
    Courier c1(1234, "BlueDart");
    Courier c2(23, "DTDC");
    International_Services is(123, "DHL",21.3, "Toronto");
    is.print_bill(200);
};