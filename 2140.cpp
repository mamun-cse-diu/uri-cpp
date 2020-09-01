#include<iostream>
using namespace std;
int main()
{
    int n,m,i,count;
    int arr[] = {7,12,15,22,52,102,25,55,105,30,60,110,70,120,150};
    while(1){
        count = 0;
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        for(i=0; i<15; i++){
            if(arr[i]==m-n)
                count++;
        }
        if(count>0)
            cout<<"possible"<<endl;
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
