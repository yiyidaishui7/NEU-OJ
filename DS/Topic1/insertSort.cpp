#include <iostream>
using namespace std;
void insertSort(int arr[], int num){
    for(int i = 0;i<num;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        for(int i = 0;i<num;i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int num = 0;
    cin >> num;
    int arr[num];
    for(int i = 0;i<num;i++){
        cin>>arr[i];
    }

    insertSort(arr,num);
    return 0;
}
