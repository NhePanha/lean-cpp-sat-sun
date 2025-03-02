#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <stdbool.h>
using namespace std;
// create class hospital
class Person{
    private:
        int id;
        string name,gender,dob,address;
        string phone,email;
        int age;
        double salary;
        string department;
        string position;
        int hours;
        double rate;
    public:
        void setId(int id) 
        {
            this->id = id;
        }
        void setName(string name) 
        {
            this->name = name;
        }
        void setGender(string gender) 
        {
            this->gender = gender;
        }
        void setDob(string dob) 
        {
            this->dob = dob;
        }
        void setAddress(string address) 
        {
            this->address = address;
        }
        void setPhone(string phone) 
        {
            this->phone = phone;
        }
        void setEmail(string email) 
        {
            this->email = email;
        }
        void setAge(int age) 
        {
            this->age = age;
        }
        void setSalary(double salary) 
        {
            this->salary = salary;
        }
        void setDepartment(string department) 
        {
            this->department = department;
        }
        void setPosition(string position) 
        {
            this->position = position;
        }
        void setHours(int hours) 
        {
            this->hours = hours;
        }
        void setRate(double rate) {
            this->rate = rate;
        }
        
        int getId() {
            return id;
        }
        string getName() 
        {
            return name;
        }
        void InputPerson();
        void OutputPerson();
};
void Person::InputPerson()
{
    cout<<"Enter Person ID            : ";cin>>id;
    cout<<"Enter Person Name          : ";cin.ignore();getline(cin,name);
    cout<<"Enter Person Gender        : ";cin>>gender;
    cout<<"Enter Person Date of Birth : ";cin>>dob;
    cout<<"Enter Person Address       : ";cin.ignore();getline(cin,address);
    cout<<"Enter Person Phone         : ";cin>>phone;
    cout<<"Enter Person Email         : ";cin>>email;
    cout<<"Enter Person Age           : ";cin>>age;
    cout<<"Enter Person Salary        : ";cin>>salary;
    cout<<"Enter Person Hours         : ";cin>>hours;
    cout<<"Enter Person Rate          : ";cin>>rate;
}
void Header()
{
    cout<<setw(12)<<"CODE"<<
    setw(12)<<"NAME"<<
    setw(12)<<"GENDER"<<
    setw(12)<<"DOB"<<
    setw(12)<<"ADDRESS"<<
    setw(12)<<"PHONE"<<
    setw(12)<<"EMAIL"<<
    setw(12)<<"AGE"<<
    setw(12)<<"SALARY"<<
    setw(12)<<"HOURS"<<
    setw(12)<<"RATE"<<endl;
}
void Person::OutputPerson()
{
    cout<<setw(12)<<id<<
    setw(12)<<name<<
    setw(12)<<gender<<
    setw(12)<<dob<<
    setw(12)<<address<<
    setw(12)<<phone<<
    setw(12)<<email<<
    setw(12)<<age<<
    setw(12)<<fixed<<setprecision(2)<<salary<<
    setw(12)<<hours<<
    setw(12)<<fixed<<setprecision(2)<<rate<<endl;
}
int main()
{
    // create objects 
    vector<Person> persons;
    Person person;
    int i,j,op,n;
    do{
        cout<<"===================[ M E N U ]==================="<<endl;
        cout<<"[ 1 - Input Person      ]"<<endl;
        cout<<"[ 2 - Display Person    ]"<<endl;
        cout<<"[ 3 - Search Person     ]"<<endl;
        cout<<"[ 4 - Update Person     ]"<<endl;
        cout<<"[ 5 - Delete Person     ]"<<endl;
        cout<<"[ 0 - Exit              ]"<<endl;
        cout<<"[ Please Select option  ] :"; cin>>op;
        switch(op){
            case 1:{
                cout<<"Enter Number of Person : ";cin>>n;
                for(i=0; i<n; i++){
                    cout<<"============#0000"<<i+1<<"============"<<endl;
                    person.InputPerson();
                    persons.push_back(person);
                }
            }break;
            case 2:{
                Header();
                for(i=0; i<persons.size(); i++){
                    persons[i].OutputPerson();
                }
            }break;
            case 3:{
                int searchid = 0;
                string searchname;
                bool check = false;
                cout<<"Enter Search ID or Name : ";cin.ignore();getline(cin,searchname);
                for(i=0; i<persons.size(); i++){
                    if(persons[i].getId()==searchid || persons[i].getName()==searchname){
                        Header();
                        persons[i].OutputPerson();
                        check = true;
                        break;
                    }
                }
                if(!check)
                {
                    cout<<"Search Not Found!"<<endl;
                }
                else {
                    cout<<"Press Enter to Continue...";
                    cin.ignore();cin.get();
                }
            }break;
            case 4:{
                int updateid = 0,op;
                bool check = false;
                cout<<"Enter ID to update all values : ";cin>>updateid;
                for(i=0; i<persons.size(); i++){
                    if(persons[i].getId()==updateid){
                        check = true;
                        cout<<"[1 update name    ]"<<endl;
                        cout<<"[2 update gender  ]"<<endl;
                        cout<<"[3 update dob     ]"<<endl;
                        cout<<"[4 update address ]"<<endl;
                        cout<<"[5 update phone   ]"<<endl;
                        cout<<"[6 update email   ]"<<endl;
                        cout<<"[7 update age     ]"<<endl;
                        cout<<"[8 update salary  ]"<<endl;
                        cout<<"[9 update hours   ]"<<endl;
                        cout<<"[10 update rate   ]"<<endl;
                        cout<<"[Plase option to update : ]";cin>>op;
                        switch(op)
                        {
                            case 1:{
                                string updatename;
                                cout<<"Enter New Name : ";cin.ignore();getline(cin, updatename);
                                persons[i].setName(updatename);
                            }break;
                            case 2:{
                                string updategender;
                                cout<<"Enter New Gender : ";cin>>updategender;
                                persons[i].setGender(updategender);
                            }break;
                            case 3:{
                                string updatedob;
                                cout<<"Enter New Date of Birth : ";cin>>updatedob;
                                persons[i].setDob(updatedob);
                            }break;
                            case 4:{
                                string updateaddress;
                                cout<<"Enter New Address : ";cin.ignore();getline(cin, updateaddress);
                                persons[i].setAddress(updateaddress);
                            }break;
                            case 5:{
                                string updatephone;
                                cout<<"Enter New Phone : ";cin>>updatephone;
                                persons[i].setPhone(updatephone);
                            }break;
                            case 6:{
                                string updateemail;
                                cout<<"Enter New Email : ";cin>>updateemail;
                                persons[i].setEmail(updateemail);
                            }break;
                            case 7:{
                                int updateage;
                                cout<<"Enter New Age : ";cin>>updateage;
                                persons[i].setAge(updateage);
                            }break;
                            case 8:{
                                double updatesalary;
                                cout<<"Enter New Salary : ";cin>>updatesalary;
                                persons[i].setSalary(updatesalary);
                            }break;
                            case 9:{
                                int updatehours;
                                cout<<"Enter New Hours : ";cin>>updatehours;
                                persons[i].setHours(updatehours);
                            }break;
                            case 10:{
                                double updaterate;
                                cout<<"Enter New Rate : ";cin>>updaterate;
                                persons[i].setRate(updaterate);
                            }break;
                            default: cout<<"invalid optoin "<<endl; break;
                        }
                    }
                    if(!check)
                    {
                        cout<<"Update Not Found!"<<endl;
                    }
                    else {
                        cout<<"Press Enter to Continue...";
                        cin.ignore();cin.get();
                    }
                }
            }break;
        }
    }while(op!=0);
    return 0;
}