#include <iostream>
using namespace std;

int add(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
         sum+=i;
         
    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    cout<<add(n)<<endl;

return 0;
}