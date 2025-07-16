#include<iostream>
using namespace std;
// function to check duplicate elements
int duplicate(int*a,int i){
int d=0;
        for(int k=0;k<i;k++){
            if(*(a+i)==*(a+k)){
                d=1;
            return d;
            }
        }
        return d;
}
int main(){
    int n;
    cout<<"Enter n for arr1 :"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter m for arr1 :"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
    
       int d=duplicate(arr1,i);
        if(!d)
        {
        for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            break;} }
    } }
}
