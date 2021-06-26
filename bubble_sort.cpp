#include <iostream>
using namespace std;

int PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

void BubbleSort(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }

    PrintArray(arr,size);
}


void InsertionSort(int arr[],int size){
    int i,j,key;
    for(int i=1;i<size;i++){
        j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

        
    }
    PrintArray(arr,size);

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    PrintArray(arr,n);
    cout<<endl;

    // BubbleSort(arr,n);
    InsertionSort(arr,n);


return 0;
}