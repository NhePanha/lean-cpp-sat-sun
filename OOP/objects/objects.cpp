#include <iostream>

using namespace std;
// create class test
class Test{
    private:
        int a;
        int b;
        int c;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
            cout<<"Enter C : ";cin>>c;
        }
        void Output()
        {
            cout<<"Value A : "<<a<<endl;
            cout<<"Value B : "<<b<<endl;
            cout<<"Value C : "<<c<<endl;
        }
};
int main()
{
    // create object 
    Test obj;
    // call methods
    obj.Input();
    obj.Output();
    return 0;
}