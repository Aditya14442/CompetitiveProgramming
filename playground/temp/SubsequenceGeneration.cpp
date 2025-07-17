#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> array){
    cout<<"[ ";
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<"]";
}

int main(){
    vector<int> array = {1,2,3};
    vector<vector<int>> subsetArray;
    for(int i=0;i<(1<<array.size());i++){
        vector<int> subArray = {};
        for(int j=0;j<array.size();j++){
            if(i&(1<<j)){
                subArray.push_back(array[j]);
            }
        }
        subsetArray.push_back(subArray);
    }
    for(int i=0;i<subsetArray.size();i++){
        printArray(subsetArray[i]);
        cout<<"\n";
    }


    return 0;
}