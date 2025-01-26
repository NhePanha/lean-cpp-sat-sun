#include <iostream>
#include <iomanip>
using namespace std;
// global variables
int code,hour;
string name, gender, position;
int day, month, year;
double salary, rate;
void AddEmployee()
{
    cout<<"=============[ADD EMPLOYEE]=============="<<endl;
    cout<<"Enter Code     : ";cin>>code;
    cout<<"Enter Name     : ";cin>>name;
    cout<<"Enter Gender   : ";cin>>gender;
    cout<<"Enter Position : ";cin.ignore();getline(cin,position);
    cout<<"Enter Date (DD MM YYYY) : ";cin>>day>>month>>year;
    cout<<"Enter Hourly Rate : ";cin>>rate;
    cout<<"Enter Hours Worked : ";cin>>hour;
    cout<<"Enter Salary : ";cin>>salary;
}
double CalculateSalary()
{
    return salary + (rate * hour);
}
double Bun()
{
    double bun = 0;
    if(position == "Manager")
        bun = CalculateSalary() * 0.1;
    else if(position == "Assistant Manager")
        bun = CalculateSalary() * 0.08;
    else if(position == "Employee")
        bun = CalculateSalary() * 0.05;
    return bun;
}
void Header()
{
    cout<<setw(12)<<"code"<<
    setw(12)<<"name"<<
    setw(12)<<"gender"<<
    setw(12)<<"position"<<
    setw(12)<<"date"<<
    setw(12)<<"hourly rate"<<
    setw(12)<<"hours worked"<<
    setw(12)<<"salary"<<
    setw(12)<<"bun"<<endl;
}
void DisplayEmployee()
{
    Header();
    cout<<setw(12)<<code<<
    setw(12)<<name<<
    setw(12)<<gender<<
    setw(12)<<position<<
    setw(12)<<day<<"/"<<month<<"/"<<year<<
    setw(12)<<fixed<<setprecision(2)<<rate<<
    setw(12)<<hour<<
    setw(12)<<fixed<<setprecision(2)<<salary<<
    setw(12)<<fixed<<setprecision(2)<<Bun()<<endl;
}
int main() {
    // calling fuction
    AddEmployee();
    DisplayEmployee();
    return 0;
}