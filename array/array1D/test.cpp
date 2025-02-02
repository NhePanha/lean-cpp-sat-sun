#include <iostream>
#include <stdbool.h>
using namespace std;
int main() {
    string status[20]; // size of array
    int i,n;
    bool check = false;
    string searchdata;
    cout<<"Enter the number of times you want to repeat the loop: ";
    cin>>n;
    for(i=0; i<n; i++) {
        cout<<"Enter Status : ";cin>>status[i];
    }
    for(i=0; i<n; i++) {
        cout<<"Status : "<<status[i]<<endl;
    }
    cout<<"Enter status to search : ";cin>>searchdata;
    for(i=0; i<n-1; i++) {
        if(status[i]==searchdata)
        {
            cout<<"Found at index "<<i<<endl;
            cout<<"Status : "<<status[i]<<endl;
            check = true;
            break;
        }
        if(check== false) {
            cout<<"Status not found."<<endl;
        }
    }
    return 0;
}