#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int on = n;
    int sum=0;
    while(n>0){
        int lastd = n%10;
        sum = sum + pow(lastd,3);
        n = n/10;

    }

    if(on==sum){
        cout<<on<<" is a amstrong number"<<endl;
    }
    else{
        cout<<on<<" is not an amstrong number"<<endl;
    }   
return 0;
}