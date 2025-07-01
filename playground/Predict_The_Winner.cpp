#include <iostream>
#include <vector>
using namespace std;

bool isAWinning(vector<int>& nums,int pt1,int pt2, bool aturn, int suma,int sumb){
    if(pt1>pt2){
        return suma>=sumb;
    }
    if(aturn){
        return isAWinning(nums,pt1+1,pt2,!aturn,suma+nums[pt1],sumb) || isAWinning(nums,pt1,pt2-1,!aturn,suma+nums[pt2],sumb);
    }
    else{
        return isAWinning(nums,pt1+1,pt2,!aturn,suma,sumb+nums[pt1]) && isAWinning(nums,pt1,pt2-1,!aturn,suma,sumb+nums[pt2]);
    }
}


bool predictTheWinner(vector<int>& nums) {
    return isAWinning(nums,0,nums.size()-1,true,0,0);
}
int main(){
    vector<int> array1 = {1,5,233,7};
    vector<int> array2 = {1,5,2};
    cout<<"Array 1 : "<<predictTheWinner(array1)<<endl<<"Array2 : "<<predictTheWinner(array2)<<endl;
    return 0;
}