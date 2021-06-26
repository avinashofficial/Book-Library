#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"it is not a prime number"<<endl;
            break;
        }
        
        else{
            cout<<"it is a prime number"<<endl;
            break;
        }
    }
return 0;
}