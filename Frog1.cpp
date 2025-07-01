#include <iostream>
#include <vector>
using namespace std;

vector<int> memory;
int minCost(vector<int>& array, int index){
    if(index==array.size()-1) return 0;
    else if(index==array.size()-2) return abs(array[array.size()-1]-array[array.size()-2]);
    if(memory[index]!=-1) return memory[index];
    memory[index] = min(abs(array[index]-array[index+1])+minCost(array,index+1), abs(array[index]-array[index+2])+minCost(array,index+2));
    return memory[index];

}

int main(){
    int size;
    cin>>size;
    vector<int> array(size);
    memory = vector<int>(size,-1);
    for(int i=0;i<size;i++) cin>>array[i];
    cout<<minCost(array,0)<<endl;
    return 0;
}