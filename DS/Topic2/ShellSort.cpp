#include <iostream>
#include <vector>
using namespace std;

int insertionSort(int arr[], int n, int g)
{
    int count = 0;
    for (int i = g; i < n; i++)
    {
        int v = arr[i];
        int j = i - g;
        while (j >= 0 && arr[j] > v)
        {
            arr[j + g] = arr[j];
            j = j - g;
            count++;
        }
        arr[j + g] = v;
    }
    return count;
}
void shellSort(int arr[], int n)
{
    int count = 0;
    int k  = 1;
    vector<int> G;
    while(k <= n)
    {
        G.push_back(k);
        k = 3 * k + 1;
    }

    int m = G.size();
    cout << m << endl;

    for (int i =m-1;i>=0;i--)
    {
        cout << G[i] << " ";
    }
    cout << endl;
    for (int i=m-1; i>=0; i--)
    {
        count += insertionSort(arr, n, G[i]);
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
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
    
    shellSort(arr, n);
    return 0;
}