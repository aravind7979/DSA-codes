//prefix sum Array
#include <iostream>
using namespace std;

void preFix(int arr[], int sum[], int n){
    sum[0]=arr[0];
    
    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1]+arr[i];
    }
}
int main(){
    int n; 
    cout<< "Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    int sum[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    preFix(arr, sum, n);
    
    cout<<"The preFixsum of the array is: [ ";
    for(int i = 0; i<n; i++){
        cout<<sum[i]<<" ";
    }
    cout<<"]";
    return 0;
}
