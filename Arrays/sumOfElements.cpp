// Calculate sum of all elements in the array
#include<iostream>
using namespace std;
int main(){
    int n, arr[100], sum=0;
    cout<<"How many elements do u wish to enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter value "<<i<<" : ";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of all the elements is "<<sum;
}
