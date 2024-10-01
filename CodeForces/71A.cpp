#include <iostream>
using namespace std;

//abbreviate word
string check(string s){
    if(s.length()>10){
        return s[0]+to_string(s.length()-2)+s[s.length()-1];
    }else{
        return s;
    }
}

int main(){
    int n;
    string w;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w;
        cout<<check(w)<<endl;
    }
    return 0;
}