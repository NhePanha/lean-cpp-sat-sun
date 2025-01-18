#include <iostream>
using namespace std;

int main()
{
    string username,password,confirmpassword;
    char name[100];
    // cout<<"Enter Name : ";cin.ignore();cin.getline(name,100);
    cout << "Enter your username   : ";cin>>username;
    cout << "Enter your password   : ";cin>>password;
    cout << "Confirm your password : ";cin>>confirmpassword;
    if(username.empty() || password.empty() || confirmpassword.empty())
    {
        cout << "Please login again" << endl;
        return 0;
    }

    if(username=="sokdara")
    {
        if(password=="12345")
        {
            if(confirmpassword==password)
            {
                cout << "Login Successful" << endl;
            }
            else{
                cout<<"Login Failed" << endl;
            }
        }
        else{
            cout<<"invalide passwore"<<endl;
        }
    }
    else
    {
        cout<<"Invalid username"<<endl;
    }
    
    return 0;
}