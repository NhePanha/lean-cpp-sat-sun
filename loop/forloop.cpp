#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,number;
    int sum = 0;
    cout<<"Enter the number : ";cin>>number;
    for(i=1;i<=number;i++)
    {
        cout<<"cos("<<i<<")"<<"+";
        sum += cos(i);
    }
    cout<<" Sum = "<<sum<<endl;
    return 0;
}