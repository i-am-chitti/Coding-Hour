#include<iostream>
using namespace std;
void swape(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverseArray(int *arr, int lower, int upper){
    int i=lower,j=upper;
    while(i<j){
        swape(&arr[i], &arr[j]);
        i++;
        j--;
    }
}
int main(){
    int len;
    cin>>len;
    int arr[len];
    int i, k, upper; // k is number of elements in sub array
    for(i=0;i<len;i++) cin>>arr[i];
    cin>>k;
    k-=1;
    for(i=0;i<len;i++){
        if(i+k>=len) upper=len-1;
        else upper=i+k;
        reverseArray(arr, i, upper);
        i=upper;
    }
    for(i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
