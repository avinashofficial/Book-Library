#include <iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=num;i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
 
return 0;
} 