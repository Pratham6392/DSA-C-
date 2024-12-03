#include <iostream>
using namespace std;

int prefixSum(int arr[], int n, int l)
{
    int sum = 0;
    int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 0; i < l; i++)
    {
        sum += arr[i];
        prefixSum[i] = sum;
    }
    return prefixSum[l - 1];
}