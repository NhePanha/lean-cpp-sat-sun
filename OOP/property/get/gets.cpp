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
        int getA() 
        {
            return a; 
        }
        int getB()
        {
            return b;
        }
        int getC()
        {
            return c;
        }
};
int main() {
    // create object
    Test obj;
    // set values
    obj.setA(10);
    obj.setB(20);
    obj.setC(30);
    // call properties get
    cout<<"Values A : "<<obj.getA()<<endl;
    cout<<"Values B : "<<obj.getB()<<endl;
    cout<<"Values C : "<<obj.getC()<<endl;
    return 0;
}