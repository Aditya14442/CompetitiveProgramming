#include <iostream>
#include <vector>
using namespace std;
int numberOfSubarrays(vector<int>& nums, int k) {
    vector<int> prefixSum(nums.size()+1);
    vector<int> frequency;
    for(int i=0;i<nums.size();i++){
        prefixSum[i+1]=prefixSum[i]+nums[i]%2;
        if(prefixSum[i+1]>frequency.size()-1) frequency.push_back(1);
        else frequency[prefixSum[i+1]]+=1;
    }
    if(frequency.size()<k) return 0;
    int left=0,right=k,subarrayCount=0;
    while(right!=frequency.size()){
        subarrayCount += frequency[right]*frequency[left];
        right++;
        left++;
    }
    return subarrayCount;
}
int main(){
    vector<int> array = {1,1,2,1,1};
    cout<<numberOfSubarrays(array,3)<<endl;
    return 0;
}