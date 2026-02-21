#include<iostream>
using namespace std;
int main(){
    int n, arr[100], prod=1;
    cout<<"How many elements do u wish to enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter value "<<i<<" : ";
        cin>>arr[i];
        prod*=arr[i];
    }
    cout<<"Product of all the elements is "<<prod;
}