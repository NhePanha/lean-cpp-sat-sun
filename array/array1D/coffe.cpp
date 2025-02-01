#include <iostream>
#include <iomanip>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
using namespace std;
// global variables
int id[] = {101, 102, 103, 104, 105, 106, 107};
string coffename[] = {"Ice Latte","Hot Latte","Cupocino","Mocha","Coca","Expresso","Milktea"};
int qty[] = {20, 21, 0, 10, 34, 0, 20};
double price[] = {2.50, 3.50, 2.50, 2.50, 2.50, 2.00, 5.00};
int i,op,n;
void Header()
{
    cout<<BLUE<<setw(12)<<"ID"<<setw(12)<<"Coffee Name"<<setw(12)<<"Quantity"<<setw(12)<<"Price"<<endl;
}
void display(){
    cout<<BLUE<<setw(12)<<id[i]<<setw(12)<<coffename[i]<<setw(12)<<qty[i]<<setw(12)<<price[i]<<endl;
}
void Menu()
{
    cout<<"===============[Coffe Menu]==============="<<endl;
    cout<<"[1. Display Coffee Menu]"<<endl;
    cout<<"[2. Add New Coffee     ]"<<endl;
    cout<<"[3. Order Coffee       ]"<<endl;
    cout<<"[4. Payment            ]"<<endl;
    cout<<"[5. Exit               ]"<<endl;
    cout<<"Enter your choice : ";cin>>op;
}
int main()
{
    double payment = 0;
    do{
        Menu();
        switch(op){
            case 1:{
                Header();
                for(i=0; i<7; i++){
                    display();
                }
            }break;
            case 2:{
                // cout<<"Enter coffee ID : ";cin>>n;
                // cout<<"Enter coffee name : ";cin.ignore();
                // getline(cin,coffename[n-1]);
                // cout<<"Enter coffee quantity : ";cin>>qty[n-1];
                // cout<<"Enter coffee price : ";cin>>price[n-1];
            }break;
            case 3:{
                int orderqty;
                int search;
                cout<<"Enter ID to order : ";cin>>search;
                for(i=0;i<7;i++)
                {
                    if(search==id[i])
                    {
                        cout<<"Enter order quantity : ";cin>>orderqty;
                        if(qty[i]>=orderqty){
                            qty[i] -= orderqty;
                            payment += orderqty * price[i];
                            cout<<BLUE<<coffename[i]<<" ordered successfully!"<<endl;
                            break;
                        }else{
                            cout<<RED<<"Not enough coffee"<<endl;
                        }
                    }
                }
            }break;
            case 4:{
                cout<<BLUE<<"=================================="<<endl;
                cout<<BLUE<<"Payment    : "<<payment<<endl;
                cout<<BLUE<<"=================================="<<endl;
                cout<<"           Thank You!"<<endl;
                
            }break;
        }
    }while(op!=0);
    return 0;
}