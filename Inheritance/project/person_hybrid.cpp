#include <iostream>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <vector>
using namespace std;
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
class Person{
    protected:
        int id,age;
        string name,gender,dob,email,phone;
    public:
        void Input()
        {
            cout<<RED<<"==============[ Data ]================="<<endl;
            cout<<GREEN<<"Enter ID            : "<<BLUE;cin>>id;cin.ignore();
            cout<<GREEN<<"Enter Name          : "<<BLUE;getline(cin,name);
            cout<<GREEN<<"Enter Gender        : "<<BLUE;cin>>gender;
            cout<<GREEN<<"Enter Date Of birth : "<<BLUE;cin>>dob;
            cout<<GREEN<<"Enter Email         : "<<BLUE;cin>>email;
            cout<<GREEN<<"Enter Age           : "<<BLUE;cin>>age;
        }
        void Output()
        {
            cout<<YELLOW<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<gender<<
            setw(12)<<dob<<
            setw(12)<<email<<
            setw(12)<<age;
        }
};
class DateTime:public Person{
    protected:
        int day,month,year;
        time_t t = time(0);  // Get current system time
        tm* now = localtime(&t);
    public:
    void Input()
    {
        Person::Input();
    }
    void ShowDate()
    {
        cout << setw(2) << setfill('0') << (now->tm_mon + 1) << "/"<< 
        setw(2) << setfill('0') << now->tm_mday << "/"<< (now->tm_year + 1900);
    }
    void ShowTime()
    {
        Person::Output();
        ShowDate();
        cout <<"\t"<<setw(2) <<setfill('0') << now->tm_hour << ":"
              <<setw(2) <<setfill('0') << now->tm_min << ":"
              <<setw(2) <<setfill('0') << now->tm_sec;
    }
};
class Employee:public DateTime{
    private:
        double rate,salary,bonuses,total;
        int hour;
    public:
        void Input()
        {
            DateTime::Input();
            cout<<MAGENTA<<"Enter Rate        : "<<BLUE;cin>>rate;
            cout<<MAGENTA<<"Enter Hour        : "<<BLUE;cin>>hour;
            cout<<MAGENTA<<"Enter Salary      : "<<BLUE;cin>>salary;
            cout<<MAGENTA<<"Enter bonuses     : "<<BLUE;cin>>bonuses;
            total = (rate * hour) + salary + bonuses;
        }
        
        void Output() {
            DateTime::ShowTime();
            cout<<"\t"<<rate<<
            "\t"<<hour<<
            "\t"<<salary<<
            "\t"<<bonuses<<
            "\t"<<total<<endl;
        }
};
void StuHeader(){}
void EmpHeader(){}
class Student:public DateTime{};

int main()
{
    vector<Employee> employee;
    Employee emp;
    int i,j,op;
    do{
        cout<<RED<<"===============[ M E N U ]===================="<<endl;
        cout<<YELLOW<<"["<<MAGENTA<<"          1 - E M P L O Y E E          "<<YELLOW<<"]"<<endl;
        cout<<YELLOW<<"========================================="<<endl;
        cout<<"["<<MAGENTA<<"          2 - S T U D E N T S          "<<YELLOW<<"]"<<endl;
        cout<<YELLOW<<"========================================="<<endl;
        cout<<BLUE<<"Please Select one option : ";cin>>op;
        switch(op)
        {
            case 1:{
                int op,n;
                do{
                    cout<<RED<<"===============[ M E N U ]===================="<<endl;
                    cout<<GREEN<<"[ 1 - INPUT    ]"<<endl;
                    cout<<GREEN<<"[ 2 - OUTPUT   ]"<<endl;
                    cout<<GREEN<<"[ 3 - SEARCH   ]"<<endl;
                    cout<<BLUE<<"Please Select one option : ";cin>>op;
                    switch(op)
                    {
                        case 1:{
                            cout<<"Enter Number Of Employee : ";cin>>n;
                            for(i=0;i<n;i++)
                            {
                                emp.Input();
                                employee.push_back(emp);
                            }
                        }break;
                        case 2:{
                            for(auto emp : employee)
                            {
                                emp.Output();
                            }
                        }
                    }
                }while(op!=0);
            }break;
            case 2:{
                int op;

            }
        }
    }while(op!=0);
    
}
