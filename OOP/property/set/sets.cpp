#include <iostream>
using namespace std;
// create class Test
class Test{
    private:
        int a;
        int b;
        int c;
    public:
        void setA(int a)
        {
            this->a = a;
        }
        void setB(int b)
        {
            this->b = b;
        }
        void setC(int c)
        {
            this->c = c;
        }
        void Display()
        {
            cout<<"Value A : "<<a<<endl;
            cout<<"Value B : "<<b<<endl;
            cout<<"Value C : "<<c<<endl;
        }
};
int main() {
    // create object
    Test obj;
    // set values
    obj.setA(10);
    obj.setB(20);
    obj.setC(30);
    // call methods
    obj.Display();
    return 0;
}