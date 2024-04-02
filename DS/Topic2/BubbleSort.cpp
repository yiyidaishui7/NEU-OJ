#include<iostream>
using namespace std;
int bubbleSort(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = n-1;j>=i+1;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int count = bubbleSort(arr,n);
        for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
    return 0;
}