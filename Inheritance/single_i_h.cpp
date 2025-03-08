#include <iostream>
using namespace std;
class A{
    protected:
        int a,b,c;
    public:

};
class B:public A{
    private:
        int d;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
            cout<<"Enter C : ";cin>>c;
            cout<<"Enter D : ";cin>>d;
        }
};
int main()
{
    // create object
    B b;
    b.Input();
    return 0;
}