
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i,j, key;

    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
          arr[j+1] = arr[j];
          j = j-1;
        }
         arr[j+1]=key;
    cout<<"Step"<<i <<" ";
    for(int k=0;k<n;k++){
        cout<<arr[k] <<" ";

    }
    cout<<endl;

    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
insertionSort( arr,  n);

return 0;
}
