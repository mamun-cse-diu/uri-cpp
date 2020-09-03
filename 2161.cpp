#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n,res = 0.0;
    cin>>n;
    while(n--){
        res += 6.0;
        res = 1.0/res;
    }
    res += 3.0;
    cout<<fixed<<setprecision(10)<<res<<endl;
    return 0;
}
