#include <iostream>
using namespace std;

//brute force brothers
int main(){
    int a, b;
    cin>>a>>b;

    if(a+b==3){
        cout<< 3;
    }else if(a+b==4){
        cout<< 2;
    }else{
        cout<< 1;
    }
    cout<<endl;
    return 0;
}