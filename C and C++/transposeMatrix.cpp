#include<iostream>
using namespace std;

void swape(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int order;
    cout<<"Enter order of square matrix: ";
    cin>>order;
    cout<<"Input matrix[
    ='p-'o;iluyt"<<endl;
    int arr[order][order];
    //int arr[][4]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    int i,j,k;
    for(i=0;i<order;i++)
        for(j=0;j<order;j++) cin>>arr[i][j];

    for(i=0;i<order-1;i++){
        for(j=i+1;j<order;j++){
            swape(&arr[j][i], &arr[i][j]);
        }
    }
    for(i=0;i<order;i++){
        for(j=0;j<order;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
