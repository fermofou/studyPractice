#include <vector>
#include <iostream>
using namespace std;

void merge(vector<int>& arr, int p, int q, int r) {
    int sizeL = q - p + 1;
    int sizeR = r - q;
    vector<int> L(sizeL);
    vector<int> R(sizeR);

    for (int i = 0; i < sizeL; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < sizeR; j++)
        R[j] = arr[q + 1 + j];

    int i = 0, j = 0, k = p;
    while (i < sizeL && j < sizeR) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    //copy the remaining elements if one of the arrays isnt empty
    while (i < sizeL) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < sizeR) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int p, int r) {
    if(p>=r){
        return;
    }else{
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);

    }

    
}


int main(){
    vector<int> arr={12,3,7,9,14,6,11,2};
    mergeSort(arr,0,7);
    for(int i=0;i<arr.size();i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}