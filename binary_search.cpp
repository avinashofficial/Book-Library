#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int high,low,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;

    cout<<"Enter "<<n<<" elements in array\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element you want to find in Array\n";
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);

return 0;
}