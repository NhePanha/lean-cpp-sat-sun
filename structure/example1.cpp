#include <iostream>
using namespace std;

struct Person
{
   int id;
   string name;
   string gender;
   double salary;
};
int main()
{
    // create object structure
    struct Person obj;

    // assign values to structure members
    obj.id = 1;
    obj.name = "John Doe";
    obj.gender = "Male";
    obj.salary = 50000.0;

    // print values of structure members
    cout << "ID: " << obj.id << endl;
    cout << "Name: " << obj.name << endl;
    cout << "Gender: " << obj.gender << endl;
    cout << "Salary: $" << obj.salary << endl;

    return 0;
}
