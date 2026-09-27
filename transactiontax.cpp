#include<iostream>
using namespace std;
int main()
{
    int T ;
    cout <<"enter transaction amount:"<<endl;
    cin>>T;
    if (T>=50000)
    {
        T=T-500;
        cout<<"Amout of transaction after deduction:"<<T<<endl;
    }
    return 0;
}
