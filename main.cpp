#include <iostream>

using namespace std;

int main()
{
   int p1,p2,coins;
    cout<<"coins="<<endl;
    cin>>coins;
    while(coins==0) {
        cout<<"enter coins again="<<endl;
        cin>>coins;}
cout<<"p1="<<endl;
cin>>p1;
    while(p1==0 or p1==coins) {
        cout<<"enter p1 again="<<endl;
        cin>>p1;}
    coins=coins-p1;
    cout<<"coins="<<coins<<endl;
    if(coins==0)
        {cout<<"p1 is winner"<<endl;}
    else
    {
        cout<<"p2="<<endl;
        cin>>p2;
        while (p2==0 or p2>(2*p1)) {
             cout<<"enter p2 again="<<endl;
             cin>>p2;}
        coins=coins-p2;
        cout<<"coins="<<coins<<endl;}
        if (coins==0)
           {

            cout<<"p2 is winner"<<endl;}
        else
        {
            while(coins!=0) {
                 cout<<"p1"<<endl;
                 cin>>p1;
                 while (p1==0 or p1>(2*p2)){
                      cout<<"enter p1 again="<<endl;
                      cin>>p1;}
                 coins=coins-p1;
                 cout<<"coins="<<coins<<endl;
                 if (coins==0) {
                    cout<<"p1 is winner"<<endl;
        }
                 else
                 {
                    cout<<"p2="<<endl;
                    cin>>p2;
                    while (p2==0 or p2>(2*p1))
                        cout<<"enter p2 again"<<endl;
                        cin>>p2;}
                        coins=coins-p2;
                        if (coins==0)
                            cout<<"p2 is winner"<<endl;
                  }
            }







 return 0;
}
