#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int key=0; //  init variable

    for(int i=1;i<arr.size();i++){
        key=arr[i]; 
        int j=i-1; //i start from curr-1
        while(j>=0 && arr[j]>key){  
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}

int main(){
    vector<int> arr={8,3,11,31,91,14};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}