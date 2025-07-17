#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    vector<int> contProfit(prices.size()),profit(prices.size()+1,0);
    int minimum = __INT_MAX__;
    contProfit[0]=0;
    profit[0] = 0;
    for(int i=1;i<prices.size();i++){
        if(prices[i-1]<prices[i]) contProfit[i]+=prices[i]-prices[i-1];
        else contProfit[i]=0;
    }
    for(int i=0;i<prices.size();i++){
        minimum = min(minimum,prices[i]);
        profit[i] = max(profit[i],prices[i]-minimum);
    }
    for(int i=0;i<profit.size();i++){
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<contProfit.size();i++){
        cout<<contProfit[i]<<" ";
    }
    int maximum = 0, secondMax = 0;
    for(int i=0;i<prices.size();i++){
        if(maximum<profit[i] && profit[i+1]<profit[i]){
            secondMax = maximum;
            maximum = profit[i];
        }
    }
    return maximum+secondMax;
}
int main(){

    return 0;
}