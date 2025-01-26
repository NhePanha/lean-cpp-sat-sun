#include <iostream>
#include <iomanip>
using namespace std;
// global variables
int code,qty;
string name;
double price;
void Header(){
    cout<<setw(12)<<"code"<<
    setw(12)<<"name"<<
    setw(12)<<"price"<<
    setw(12)<<"qty"<<endl;
}
void Display(int code,string name,double price,int qty)
{
    Header();
    cout<<setw(12)<<code<<
    setw(12)<<name<<
    setw(12)<<price<<
    setw(12)<<qty<<endl;
}
int main(){
    
    cout<<"Enter Code : ";cin>>code;
    cout<<"Enter Name : ";cin>>name;
    cout<<"Enter Price : ";cin>>price;
    cout<<"Enter Quantity : ";cin>>qty;
    // calling functions
    Display(code,name,price,qty);
    return 0;
}