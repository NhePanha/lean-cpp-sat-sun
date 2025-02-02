#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;
// global variables
int code[100]; // code[size of array]
string name[100]; 
double price[100]; 
int qty[100]; 
double total[100],tax[100],dis[100],payment[100];
int i,j,op,n;
void AddProduct()
{
    cout<<"=============[ADD PRODUCT COFFE]=============="<<endl;
    cout<<"Enter Code     : ";cin>>code[i];
    cout<<"Enter Name     : ";cin.ignore();getline(cin,name[i]);
    cout<<"Enter Price    : ";cin>>price[i];
    cout<<"Enter Quantity : ";cin>>qty[i];
}
double CalculateTotal()
{
    total[i] = qty[i] * price[i];
    return total[i];
}
double CalculateTax()
{
    tax[i] = CalculateTotal() * 0.1;
    return tax[i];
}
double CalculateDiscount(){
    double t = CalculateTotal();
    return dis[i] = (t > 0 && t<= 10)? t * 0.1:
    (t > 10 && t<= 20)? t * 0.2:
    (t > 20 && t<= 30)? t * 0.3:
    (t > 30 && t<= 40)? t * 0.4:
    (t > 40 && t<= 60)? t * 0.5:
    (t > 60 && t<= 70)? t * 0.6:t * 0.7;
}
double CalculatePayment()
{
    payment[i] = CalculateTotal()+CalculateTax()-CalculateDiscount();
    return payment[i];
}
void Header()
{
    cout<<setw(12)<<"code"<<setw(12)<<"name"<<setw(12)<<"price"<<setw(12)<<"qty"<<setw(12)<<"total"<<setw(12)<<"tax"<<setw(12)<<"dis"<<setw(12)<<"payment"<<endl;
}
void Display()
{
    cout<<setw(12)<<code[i]<<
    setw(12)<<name[i]<<
    setw(12)<<price[i]<<
    setw(12)<<qty[i]<<
    setw(12)<<CalculateTotal()<<
    setw(12)<<CalculateTax()<<
    setw(12)<<CalculateDiscount()<<
    setw(12)<<CalculatePayment()<<endl;
}

int main()
{
    do{
        cout<<"===================[ M E N U ]==================="<<endl;
        cout<<"[ 1 - Input Product      ]"<<endl;
        cout<<"[ 2 - Display Product    ]"<<endl;
        cout<<"[ 3 - Search Product     ]"<<endl;
        cout<<"[ 4 - Update Product     ]"<<endl;
        cout<<"[ 5 - Delete Product     ]"<<endl;
        cout<<"[ 6 - Insert Product     ]"<<endl;
        cout<<"[ 7 - Sort Product       ]"<<endl;
        cout<<"[ 8 - Total Payment      ]"<<endl;
        cout<<"[ 9 - Add Product        ]"<<endl;
        cout<<"[ 10- Exit Menu          ]"<<endl;
        cout<<"Please select one option of Menu : ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Enter Number Of Product : ";cin>>n;
                for(i=0;i<n;i++)
                {
                    AddProduct();
                }
            }break;
            case 2:{
                Header();
                for(i=0;i<n;i++)
                {
                    Display();
                }
            }break;
        }
    }while(op!=0);
    return 0;
}