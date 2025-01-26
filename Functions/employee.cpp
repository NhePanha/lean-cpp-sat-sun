#include <iostream>
using namespace std;
int  code,hour;
string name,gender,position;
double salary,rate,total;
void DisplayEmployees(int code,string name,string gender,string position,double salary,double rate,int hour,double total)
{
    cout<<"=============[EMPLOYEE DETAILS]=============="<<endl;
    cout<<"Code         : "<<code<<endl;
    cout<<"Name         : "<<name<<endl;
    cout<<"Gender       : "<<gender<<endl;
    cout<<"Position     : "<<position<<endl;
    cout<<"Hourly Rate  : "<<rate<<endl;
    cout<<"Hours Worked : "<<hour<<endl;
    cout<<"Salary       : "<<salary<<endl;
    cout<<"Total Earning: "<<total<<endl;
    cout<<"=============================================="<<endl;
}
int main()
{
    // calling function
    DisplayEmployees(1001,"sovan","male","manager",1200,5.5,30,1200+5.5*30);

    return 0;
}