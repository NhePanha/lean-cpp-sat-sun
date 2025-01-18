// #include <iostream>

// using namespace std;

// int main()
// {
//     int i, j;
//     for(i=0;i<10;i++)
//     {
//         cout<<endl;
//         for(j=0;j<10;j++)
//         {
//             cout<<j<<" ";
//         }
//     }
// }

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int number;
    cout<<"Enter the number : ";cin>>number;
    for(i=1;i<=10;i++)
    {
        cout<<endl;
        for(j=1;j<=number;j++)
        {
            cout<<j<<" x "<<i<<" = "<<i*j<<endl;
        }
    }
    return 0;
}

// 1. ចូរ​សេរដូដ ដើម្បីរកចំនួនបឋម​(prime number)​និងមិនបឋម​(not prime number)។ 
