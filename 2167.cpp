#include<iostream>
using namespace std;
int main()
{
    int t,tmp = 0,data,count = 0,res = 0,m = 1;
    cin>>t;
    while(t--){
        cin>>data;
        count++;
        if(data<tmp && m==1){
            res = count;
            m = 0;
        }
        tmp = data;
    }
    cout<<res<<endl;
    return 0;
}
