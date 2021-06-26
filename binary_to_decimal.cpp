#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int y,x,sum;
    x=1;
    sum=0;
    while(n>0){
        y=n%10;
        sum = sum + x*y;
        x = x*2;
        n = n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
return 0;
}