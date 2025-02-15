#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <string.h>
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
        cout<<"[ 8 - Add Product        ]"<<endl;
        cout<<"[ 9 - Total Payment      ]"<<endl;
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
            case 3:{
                int searchid = 0;
                string searchname;
                bool check = false;
                //int check = 0;
                int op;
                cout<<"\t\t=========[ Search ]========"<<endl;
                cout<<"\t\t  [ 1 - Search By ID   ]"<<endl;
                cout<<"\t\t  [ 2 - Search By Name ]"<<endl;
                cout<<"\t\tPlease Select one option : ";cin>>op;
                switch(op)
                {
                    case 1:{
                        cout<<"Enter ID To Search : ";cin>>searchid;
                        if(searchid==0)
                        {
                            cout<<"Field ID Null"<<endl;
                        }
                        else{
                            Header();
                            for(i=0;i<n;i++)
                            {
                                if(searchid==code[i])
                                {
                                    Display();
                                    check = true;
                                }
                            }
                            if(check==false)
                            {
                                cout<<"Search id Not found!.."<<endl;
                            }
                            else
                            {
                                cout<<"Search id found..."<<endl;
                            }
                        }
                    }break;
                    case 2:{
                        cout<<"Enter Name To Search : ";cin.ignore();getline(cin,searchname);
                        if(searchname.empty())
                        {
                            cout<<"null"<<endl;
                        }
                        else
                        {
                            Header();
                            for(i=0;i<n;i++)
                            {
                                if(searchname==name[i])
                                {
                                    Display();
                                    check = true;
                                }
                            }
                            if(check == false)
                            {
                                cout<<"search name not found..!!!"<<endl;
                            }
                            else
                            {
                                cout<<"search name found.."<<endl;
                            }
                        }
                    }break;
                }
            }break;
            case 4:{
                int updateid = 0;
                bool check = false;
                cout<<"=========[ Update ]========="<<endl;
                cout<<"Enter ID To Update : ";cin>>updateid;
                if(updateid==0)
                {
                    cout<<"Field ID Null"<<endl;
                }
                else{
                    for(i=0;i<n;i++)
                    {
                        if(updateid==code[i])
                        {
                            AddProduct();
                            check = true;
                            break;
                        }
                    }
                    if(check==false)
                    {
                        cout<<"Update id Not found!.."<<endl;
                    }
                    else
                    {
                        cout<<"Update successfully..."<<endl;
                    }
                }
            }break;
            case 5:{
                int deleteid = 0;
                bool check = false;
                cout<<"=========[ Delete ]========="<<endl;
                cout<<"Enter ID To Delete : ";cin>>deleteid;
                if(deleteid==0)
                {
                    cout<<"Field ID Null"<<endl;
                }
                else 
                {
                    for(i=0;i<n;i++)
                    {
                        if(deleteid==code[i])
                        {
                            for(j=i;j<n-1;j++)
                            {
                                code[j] = code[j+1];
                                name[j] = name[j+1];
                                price[j] = price[j+1];
                                qty[j] = qty[j+1];
                                total[j] = total[j+1];
                                tax[j] = tax[j+1];
                                dis[j] = dis[j+1];
                                payment[j] = payment[j+1];
                            }
                            n--;
                            check = true;
                            break;
                        }
                    }
                    if(check==false)
                    {
                        cout<<"Search id Not found!.."<<endl;
                    }
                    else
                    {
                        cout<<"Delete successfully..."<<endl;
                    }
                }
            }break;
            case 6:{
                int insertid = 0;
                bool check = false;
                cout<<"=========[ Insert ]========="<<endl;
                cout<<"Enter ID To Insert : ";cin>>insertid;
                if(insertid==0)
                {
                    cout<<"Field ID Null"<<endl;
                }
                else 
                {
                    for(i=0;i<n;i++)
                    {
                        if(insertid==code[i])
                        {
                            for(j = n ; j>= i ; j--)
                            {
                                code[j] = code[j-1];
                                name[j] = name[j-1];
                                price[j] = price[j-1];
                                qty[j] = qty[j-1];
                                total[j] = total[j-1];
                                tax[j] = tax[j-1];
                                dis[j] = dis[j-1];
                                payment[j] = payment[j-1];
                            }
                            n++;
                            AddProduct();
                            check = true;
                            break;
                        }
                    }
                    if(check==false)
                    {
                        cout<<"Search id Not found!.."<<endl;
                    }
                    else
                    {
                        cout<<"Insert Product successfully..."<<endl;
                    }
                }
            }break;
            case 7:{
                int op;
                bool check = true;
                cout<<"================[ SORT BY ]================"<<endl;
                cout<<" \t\t[ 1 - Sort By Code ]"<<endl;
                cout<<" \t\t[ 2 - Sort By Name ]"<<endl;
                cout<<"Pease Select one option : ";cin>>op;
                switch(op){
                    case 1:{
                        int n_id;
                        string n_name;
                        double n_price,n_total,n_pay,n_tax,n_dis;
                        int n_qty;
                        for(i=0;i<n;i++)
                        {
                            for(int j=i+1;j<n;j++)
                            {
                                if(code[i]>code[j])
                                {
                                    n_id = code[i];
                                    code[i] = code[j];
                                    code[j] = n_id;

                                    n_name = name[i];
                                    name[i] = name[j];
                                    name[j] = n_name;

                                    n_qty = qty[i];
                                    qty[i] = qty[j];
                                    qty[j] = n_qty;

                                    n_price = price[i];
                                    price[i] = price[j];
                                    price[j] = n_price;

                                    n_total = total[i];
                                    total[i] = total[j];
                                    total[j] = n_total;

                                    n_tax = tax[i];
                                    tax[i] = tax[j];
                                    tax[j] = n_tax;

                                    n_dis = dis[i];
                                    dis[i] = dis[j];
                                    dis[j] = n_dis;

                                    n_pay = payment[i];
                                    payment[i] = payment[j];
                                    payment[j] = n_pay;
                                    check = true;
                                }
                            }
                        }
                        if(check == false)
                        {
                            cout<<"Sorting Not Success.!!!"<<endl;
                        }
                        else{
                            cout<<"Sortign Successfully..."<<endl;
                        }
                    }break;
                    case 2:{
                        for(i=0;i<n;i++)
                        {
                            for(int j=i+1;j<n;j++)
                            {
                                if(name[i]>name[j])
                                {
                                    swap(code[i],code[j]);
                                    swap(name[i],name[j]);
                                    swap(qty[i],qty[j]);
                                    swap(price[i],price[j]);
                                    swap(total[i],total[j]);
                                    swap(tax[i],tax[j]);
                                    swap(dis[i],dis[j]);
                                    swap(payment[i],payment[j]);
                                    check = true;
                                }
                            }
                        }
                        if(check==false){
                            cout<<"Sortign not Successfully..."<<endl;
                        }
                        else {
                            cout<<"Sortign Successfully..."<<endl;
                        } 
                    }break;
                }
            }break;
            case 8:{
                int add;
                bool check = false;
                // int check = 0;
                cout<<"================[ ADD PRODUCT ]================"<<endl;
                cout<<"Enter Number of Product : ";cin>>add;
                for(i = n; i < n + add ; i++)
                {
                    AddProduct();
                    check = true;
                }
                n += add;
                if(!check){
                    cout<<"Add Product not Success"<<endl;
                }
                else
                {
                    cout<<"Add Product Successfully"<<endl;
                }
            }break;
            case 9:{
                double total_pay,total_tax,total_dis,total_t;
                int op;
                do{
                    cout<<"\t\t[ 1 - Check Total    ]"<<endl;
                    cout<<"\t\t[ 2 - Check Tax      ]"<<endl;
                    cout<<"\t\t[ 3 - Check Discount ]"<<endl;
                    cout<<"\t\t[ 4 - Check Payment ]"<<endl;
                    cout<<"Pease Select one option : ";cin>>op;
                    switch(op){
                        case 1:{
                            for(i=0;i<n;i++){
                                total_t += total[i];
                            }
                            cout<<"___________________________"<<endl;
                            cout<<"Total : "<<total_t<<endl;
                            cout<<"        Thank You"<<endl;
                        }break;
                        case 2:{
                            for(i=0;i<n;i++){
                                total_tax += tax[i];
                            }
                            cout<<"___________________________"<<endl;
                            cout<<"Total : "<<total_tax<<endl;
                            cout<<"        Thank You"<<endl;
                        }break;
                        case 3:{
                            for(i=0;i<n;i++){
                                total_dis += dis[i];
                            }
                            cout<<"___________________________"<<endl;
                            cout<<"Total : "<<total_dis<<endl;
                            cout<<"        Thank You"<<endl;
                        }break;
                        case 4:{
                            for(i=0;i<n;i++){
                                total_pay += payment[i];
                            }
                            cout<<"___________________________"<<endl;
                            cout<<"Total : "<<total_pay<<endl;
                            cout<<"        Thank You"<<endl;
                        }break;
                    }
                    cout<<"ENTER NUMBER ZERO TO EXIT"<<endl;
                }while(op!=0);
            }break;
        }
    }while(op!=0);
    return 0;
}