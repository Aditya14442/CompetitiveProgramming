#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> memory;
int maxSum(vector<vector<int>>& array, int index,int maxWeight, int weight, bool take){
    if(weight>maxWeight) return 0 ;
    if(index==array.size()-1){
        if(take) return array[index][1];
        else return 0;
    }
    int ans;
    if(take){
        ans= array[index][1]+max(maxSum(array,index+1,maxWeight,weight+array[index][0],true),maxSum(array,index+1,maxWeight,weight,false));
        return ans;
    } 
    else{
        ans = max(maxSum(array,index+1,maxWeight,weight+array[index][0],true),maxSum(array,index+1,maxWeight,weight,false));
        return ans;
    }
    cout<<endl;
}

int knapsack(vector<vector<int>>& vw, int n, int w){
    if(n==0 || w<=0) return 0;
    int pick =0, notPick=0;
    if(vw[n-1][1]<=w) pick = knapsack(vw,n-1,w-vw[n-1][0])+vw[n-1][1];
    notPick = knapsack(vw,n-1,w);
    return max(pick,notPick);
}

int main(){
    int size,maxWeight;
    cin>>size>>maxWeight;
    vector<vector<int>> array(size,vector<int>(2));
    for(int i=0;i<size;i++) cin>>array[i][0]>>array[i][1];
    memory = vector<vector<int>>(size,vector<int>(2,-1));
    cout<<max(maxSum(array,0,maxWeight,array[0][0],true),maxSum(array,0,maxWeight,0,false));
    return 0;
}