// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
 void mergeSortedAray(int a[], int b[], int m, int n)
{

    int i=0;
    int j=0;
    while(i<m && j<n){
        if (a[i]<=b[j]){
            cout<<a[i];
            i++;
        }
        else{
            cout<<b[j];
            j++;
        }

    }
    while(i<m){
        cout<<a[i];
        i++;
    }
    while(j<n){
        cout<<b[j];
        j++;
    }


}

int main()
{
    int a[3] = {10, 20, 35};
    int b[3] = {5, 50, 50};
    mergeSortedAray(a, b,3,3);
}