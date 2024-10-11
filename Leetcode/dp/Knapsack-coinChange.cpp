#include <iostream>
#include <vector>
#include <algorithm>

#define INF INT_MAX
using namespace std;

int coinChange(vector<int> arr,int amount){
    vector<int> dp(amount+1,amount+1); //si x alguna razon un valor no se puede, estamos en 1 mas del aceptado
    dp[0]=0;
    for(int i=1;i<amount+1;i++){
        for(auto coin:arr){
            if(i-coin>=0){ //solamente si no me paso de 0
                dp[i]=min(dp[i],1+dp[i-coin]);
            }
        }
    }
    return dp[amount]>amount?-1:dp[amount];
}


int main(){
    vector<int> arr ={1,2,5,10,20}; //usando monedas mexicanas
    int amount,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>amount;
        cout<<"Monedas para "<<amount<<":"<<coinChange(arr,amount)<<endl;
    }
    
    return 0;
}