#include <iostream>
using namespace std;
class A{
    protected:
        int a,b;
};
class B{
    protected:
        int x,y;
    
};
class C:public A,public B{
    private:
        int z;
    public:
        void Input()
        {
            cout<<"Enter A : ";cin>>a;
            cout<<"Enter B : ";cin>>b;
            cout<<"Enter X : ";cin>>x;
            cout<<"Enter Y : ";cin>>y;
            cout<<"Enter Z : ";cin>>z;
        }
        void Ouptut()
        {
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
            cout<<"X : "<<x<<endl;
            cout<<"Y : "<<y<<endl;
            cout<<"Z : "<<z<<endl;
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