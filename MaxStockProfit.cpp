#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProfit(vector<int>& stocks){
    int maxx = 0;

    for(int i = 0 ; i < stocks.size() ; i++){
        int temp = 0;
        for(int j = i+1; j < stocks.size() ; j++){
            if(stocks[j] > stocks[i]){
                temp = stocks[j] - stocks[i];
            }
        }
        maxx = max(temp,maxx);
        temp = 0;
    }


    return maxx;
}


int main(){
    vector<int> stocks = {1,2,3,1,5,6};

    int ans = maxProfit(stocks);

    if(ans == 0){
        cout<<"No Profit";
    }
    cout<<"The Maximum Profit obtained is "<<ans;




    return 0;
}