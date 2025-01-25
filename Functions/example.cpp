#include <iostream>
using namespace std;
// has parameters
void Coffe(int code,string name,double qty,double price)
{
    // print data
    cout<<"=============[ADD PRODUCT COFFE]=============="<<endl;
    cout<<"Code : "<<code<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Quantity : "<<qty<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Total Price : "<<qty*price<<endl;
}
int main()
{
    // call function
    Coffe(1, "Americano", 2, 5.5);
    Coffe(2, "Latte", 1, 6.0);
    Coffe(3, "Cappuccino", 3, 7.0);
    return 0;
}