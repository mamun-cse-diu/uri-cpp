#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    int n;;
    cin>>n;
    double res;
    res = ((pow((1+sqrt(5)),n) - pow(1-sqrt(5),n))/(pow(2,n)*sqrt(5)));
    cout<<fixed<<setprecision(1)<<res<<endl;
    return 0;
}
