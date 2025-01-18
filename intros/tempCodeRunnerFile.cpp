// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int code;
//     string name,size;
//     double qty,price,total,payment,tax,dis,discount;

//     cout<<"=============[ADDPRODUCT COFFE]=============="<<endl;
//     cout<<"Enter Code     : ";cin>>code;
//     cout<<"Enter Name     : ";cin>>name;
//     cout<<"Enter Price    : ";cin>>price;
//     cout<<"Enter Qty      : ";cin>>qty;
//     cout<<"Enter Size (L,M,S) : ";cin>>size;  
//     cout<<"Enter Discount : ";cin>>discount;
//     cout<<"================================"<<endl;
//     // calculate
//     total = price * qty;
//     dis = (total * discount)/100;
//     tax = (total * 0.05);
//     payment = total + tax - dis;
//     // Header
//     cout<<setw(12)<<"code"<<
//     setw(12)<<"name"<<
//     setw(12)<<"price"<<
//     setw(12)<<"qty"<<
//     setw(12)<<"size"<<
//     setw(12)<<"total"<<
//     setw(12)<<"discount"<<
//     setw(12)<<"tax"<<
//     setw(12)<<"payment"<<endl;
//     // output
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<price<<
//     setw(12)<<qty<<
//     setw(12)<<size<<
//     setw(12)<<total<<
//     setw(12)<<dis<<
//     setw(12)<<tax<<
//     setw(12)<<payment<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     //note if true = 1 if false = 0
//     cout<<"10 > 10 = "<<(10>10)<<endl;
//     cout<<"10 < 10 = "<<(10<10)<<endl;
//     cout<<"10 >= 10 = "<<(10>=10)<<endl;
//     cout<<"10 <= 10 = "<<(10<=10)<<endl;
//     // logical and
//     cout<<"(10 > 10) && (10 == 10) = "<<((10>10)&&(10==10))<<endl;
//     cout<<"(10 >= 10) && (10 == 10) = "<<((10>=10)&&(10==10))<<endl;
//     // logical or
//     cout<<"(10 > 10) || (10 == 10) = "<<((10>10)||(10==10))<<endl;
//     cout<<"(10 > 10) || (10 < 10) = "<<((10>10)||(10<10))<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int a;
    // inputs
    cout<<"Enter Value A : ";cin>>a;
    // codition
    if(a>10)
    {
        // statements
        cout<<"A is maximum"<<endl;
    }
    return 0;
}