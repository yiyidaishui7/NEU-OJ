#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n==2){
        return true;
    }
    else{
        for(int i=2;i<=sqrt(n*1);i++){  //sqrt(a*b)
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(isPrime(arr[i])){
            count++;
        }
    }
    cout<<count;
    return 0;
}

// //Sieve of Eratosthenes算法 [2,n]中质数的个数
// #include <iostream>
// #include<vector>
// #include <math.h>
// using namespace std;
// int countPrimes(int n)
// {
//     vector<bool>boolArray(n,true);
//     for(int i = 2;i<sqrt(n);i++){
//         if(boolArray[i]){
//             for(int j = i*i;j<n;j+=i){
//                 boolArray[j] = false;
//             }
//         }
//     }
//     int count = 0;
//     for(int i = 2;i<n;i++){
//         if(boolArray[i])
//             count++;
//     }
//     return count;
// }

