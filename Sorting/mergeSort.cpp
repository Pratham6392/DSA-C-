#include<iostream>
using namespace std;


void mergeSubArray(int a[],int low,int mid,int high){
    
int n1= low-mid+1;
int n2= high-mid;
int left[n1],right[n2];
for(int i=0;i<n1;i++){
    left[i]=a[low+i];}

for(int j=0;j<n2;j++){
    right[j]=a[mid+1+j];}
}
 
 
 

void mergeSort(int a[], int low , int high ){
    if(low<high){
        int mid = low + (high-low)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeSubArray(a,low,mid,high);
    }
}