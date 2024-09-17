#include<iostream>
using namespace std;



void mergeSubArray(int a[],int low,int mid,int high){
    
 int n1= low-mid+1;
int n2= high-mid;
int left[n1],right[n2];

for ( int  i = 0; i < n1; i++){
    left[i]=a[low+i];
}
for ( int j = 0; j < n2; j++){
    right[j]=a[mid+1+j];
}


int i=0;
int j=0;
int k=0;

while(i<n1 && j<n2){
    if(left[i]<=right[j]){
        a[k]=left[i];
        i++;
        k++;
    }
    else{
        a[k]=right[j];
        j++;
        k++;
    }
    while (i<n1)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }

}
}




