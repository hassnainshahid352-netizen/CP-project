#include<iostream>
using namespace std;
int main()
{
    int S ,E;
    cout <<"enter salary:"<<endl;
    cin>>S;
    cout<<"enter experience in YEARS"<<endl;
    cin>>E;
    if (E>=5)
    {
    S=S+1000;
    cout<<"SALARY AFTER BONUS:"<<S<<endl;
    }
    return 0;
}
