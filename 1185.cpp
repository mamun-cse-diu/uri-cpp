#include <iostream>

using namespace std;

int main() {

    int i,j,n;
    char a;
    double sum=0,avg,x[12][12];
    cin>>a;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin>>x[i][j];
        }
    }
    n=11;
    for(i=0; i<11; i++){
        for(j=0; j<n; j++){
            sum = sum+x[i][j];
        }
        n--;
    }
    if(a=='S')
        cout<<sum<<endl;
    else if(a=='M'){
        avg = sum/66;
        cout<<avg<<endl;
    }
    return 0;
}
