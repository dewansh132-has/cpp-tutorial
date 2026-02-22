// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,45,6,99,43,-3};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(i%2==0) cout<<arr[i]+10<<endl;
        else cout<<arr[i]*2<<endl;
    }
}
