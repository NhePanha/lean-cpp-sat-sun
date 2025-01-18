// #include <iostream>

// using namespace std;

// int main()
// {
//     int i=0;
//     do{
//         cout<<i<<"-> Hello world"<<endl;
//         i++;
//     }while(i<10);
//     return 0;
// }


#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // char status[20];
    string status;
    do{
        cout<<"Do you Love Me?"<<endl;
        cout<<"Press Yes/No";cin>>status;
    }while(status=="yes"||status=="Yes");
    return 0;
}