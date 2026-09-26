#include<iostream>
using namespace std;
int main()
{
    int blance=10000;
    int A;
    cout <<"enter withdrawal amount:"<<endl;
    cin>>A;
    if (A<=blance)
    {
        blance=blance-A;
        cout<<"remining amount:"<<blance<<endl;
    }
    return 0;
}