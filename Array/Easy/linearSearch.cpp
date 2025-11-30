#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int key=16;
    int size=8;

    for(int i=0; i<size; i++){
        if(arr[i]==key){
            cout<<"Key is present in array"<<endl;
        }
    }

    return 0;
}