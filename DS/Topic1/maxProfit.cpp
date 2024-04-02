// //暴力解法 时间复杂O（n^2）
// #include<iostream>
// using namespace std;
// int maxProfit(int arr[],int n){
//     int m = arr[1]-arr[0];
//     int temp=0;
//     for(int i=0;i<n-1;i++){//i不能是最后一个
//         for(int j=i+1;j<n;j++){
//             temp = arr[j]-arr[i];
//             m = max(m,temp);
//         }
//     }
//     return m;
// }
// int main(){
//     int n = 0;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max  = maxProfit(arr,n);
//     cout<<max;
//     return 0;
// }

#include <iostream>
using namespace std;
int maxProfit(int arr[], int n)
{
    int minPrice = arr[0];
    int maxProfit = arr[1] - arr[0];
    for (int i = 1; i < n; i++)//i从1开始 因为arr[0]没有前一个价钱
    {
        maxProfit = max(maxProfit, arr[i] - minPrice);//当前减去最小
        minPrice = min(minPrice, arr[i]);//前i个数的最小值
    }
    return maxProfit;
}
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = maxProfit(arr, n);
    cout << max;
    return 0;
}
