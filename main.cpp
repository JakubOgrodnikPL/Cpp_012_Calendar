#include <iostream>
#include <cstdlib>

using namespace std;

int month_number;

int main()
{
    cout<<"This program should tell how many days there are in the given month"<<endl;
    cout<<"Give the number of month"<<endl;
    if(!(cin>>month_number))
    {
        cerr<<"This is not number!";
        exit(0);
    }

    switch(month_number)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<<"This number has 31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<"This month has 30 days";
        break;
    case 2:
        {
            int year;
            cout<<"Give a year:";
            cin>>year;

            if(((year%4 ==0) && (year%100)) ||(year%400 == 0))
                cout<<"This month has 29 days";
            else cout<<"This month has 28 days";
        }


    }


    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
