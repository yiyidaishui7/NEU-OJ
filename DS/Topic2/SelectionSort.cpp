#include <iostream>
using namespace std;
int selectionSort(int arr[], int n)
{
    int count = 0;
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
        if (mini != i)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << count;
    return 0;
}