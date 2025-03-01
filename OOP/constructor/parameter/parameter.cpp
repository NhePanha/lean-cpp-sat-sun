#include <iostream>
using namespace std;
// create class person
class Person{
    private:
        int id;
        string name;
        string gender;
        double salary;
    public:
        Person()
        {
            id = 0;
            name = "N/A";
            gender = "N/A";
            salary = 0.0;
        }
        Person(int id, string name, string gender, double salary)
        {
            this->id = id;
            this->name = name;
            this->gender = gender;
            this->salary = salary;
        }
        void Display()
        {
            cout<<"ID          : "<<id<<endl;
            cout<<"Name        : "<<name<<endl;
            cout<<"Gender      : "<<gender<<endl;
            cout<<"Salary      : $"<<salary<<endl;
        }
};
int main()
{
    Person person(1001,"John","Male",5000.0);
    person.Display();
    Person person1(1003,"Ryna","Female",1200.0);
    person1.Display();
    return 0;
}