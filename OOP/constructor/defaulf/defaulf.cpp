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
    // create object person
    Person person;
    // call method display
    person.Display();
    return 0;
}