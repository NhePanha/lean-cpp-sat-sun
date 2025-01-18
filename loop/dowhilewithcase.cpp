#include <iostream>
using namespace std;
int main() {
    int op;
    do{
        cout<<"----------M E N U-----------------"<<endl;
        cout<<"1. Loop 1"<<endl;
        cout<<"2. Loop 2"<<endl;
        cout<<"3. Loop 3"<<endl;
        cout<<"4. Loop 4"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: "; cin>>op;
        switch(op){
            case 1:
                for(int i=0; i<10; i++){
                    cout<<i<<endl;
                }
                break;
            case 2:
                for(int i=0; i<10; i+=2){
                    cout<<i<<endl;
                }
                break;
            case 3:
                for(int i=10; i>=0; i--){
                    cout<<i<<endl;
                }
                break;
            case 4:
                for(int i=10; i>=0; i-=2){
                    cout<<i<<endl;
                }
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }while(op!=0);
    return 0;
}