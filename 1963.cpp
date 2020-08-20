#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b,div,per;
    cin>>a>>b;
    div = b-a;
    per = (div*100.00)/a;
    cout<<fixed<<setprecision(2)<<per<<"%"<<endl;
    return 0;
}
