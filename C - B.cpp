/*
****@Author:Muhammad Mustafiz Billah*****
*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l, n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + j];

    int i = 0, j = 0, k = l;

    while (i < n1 || j < n2)
    {
        if (i < n1 && (j == n2 || L[i] <= R[j]))
            arr[k] = L[i], i++;
        else if (j < n2 && (i == n1 || L[i] > R[j]))
        {
            arr[k] = R[j], j++;
        }
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (r - l == 1)
        return;

    int m = l + (r - l) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m, r);

    merge(a, l, m, r);
}

int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n);

    for (int i = 0; i <= n-2; i += 2)
        sum += (a[i + 1] - a[i]);
    
    cout << sum << endl;
}