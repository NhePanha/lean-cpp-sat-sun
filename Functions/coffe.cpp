#include <iostream>
#include <iomanip>
using namespace std;
// global variables
int code,qty;
string name;
double price;
void AddProduct()
{
    cout<<"=============[ADD PRODUCT COFFE]=============="<<endl;
    cout<<"Enter Code     : ";cin>>code;
    cout<<"Enter Name     : ";cin>>name;
    cout<<"Enter Price    : ";cin>>price;
    cout<<"Enter Quantity : ";cin>>qty;
}
double Total()
{
    return price*qty;
}
double Tax(){
    return Total() * 0.05;
}
double Discount(){
    double t = Total();
    return (t > 0 && t<= 10) ? t * 0.1:
    (t > 10 && t<= 20)? t * 0.2:
    (t > 20 && t<= 30)? t * 0.3:
    (t > 30 && t<= 40)? t * 0.4:
    (t > 40 && t<= 60)? t * 0.5:
    (t > 60 && t<= 70)? t * 0.6:t * 0.7;
}
double Payment(){
    return Total() + Tax() - Discount();
}
void Header(){
    cout<<setw(12)<<"code"<<
    setw(12)<<"name"<<
    setw(12)<<"price"<<
    setw(12)<<"qty"<<
    setw(12)<<"total"<<
    setw(12)<<"Tax"<<
    setw(12)<<"discount"<<
    setw(12)<<"payment"<<endl;
}
void Display()
{
    Header();
    cout<<setw(12)<<code<<
    setw(12)<<name<<
    setw(12)<<price<<
    setw(12)<<qty<<
    setw(12)<<Total()<<
    setw(12)<<Tax()<<
    setw(12)<<Discount()<<
    setw(12)<<Payment()<<endl;
}
int main(){
    // calling functions
    AddProduct();
    Display();
    return 0;
}