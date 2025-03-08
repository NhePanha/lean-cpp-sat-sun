#include <iostream>
using namespace std;
class A{
    protected:
        int a,b;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
        }
        void Output()
        {
            cout<<"value A : "<<a<<endl;
            cout<<"value B : "<<b<<endl;
        }
};
class B{
    protected:
        int x,y;
    public:
        void Input()
        {
            cout<<"Enter X : ";cin>>x;
            cout<<"Enter Y : ";cin>>y;
        }
        void Output()
        {
            cout<<"value X : "<<x<<endl;
            cout<<"value Y : "<<y<<endl;
        }
};
class C:public A,public B{
    private:
        int z;
    public:
        void Input()
        {
            // super.input();
            A::Input();
            B::Input();
            cout<<"Enter Z : ";cin>>z;
        }
        void Ouptut()
        {
            A::Output();
            B::Output();
            cout<<"value Z : "<<z<<endl;
        }
};
int main()
{
    // create object
    C c;
    c.Input();
    c.Ouptut();
    return 0;
}