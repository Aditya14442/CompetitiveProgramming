#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int,int> memory;

int solution(vector<int>& array, int index,int k){
    if(index+1==array.size()) return 0;
    if(memory.count(index)) return memory[index];
    int minimum=__INT_MAX__;
    for(int i=1;i<=k && index+i<array.size();i++){
        minimum = min(minimum,abs(array[index]-array[index+i])+solution(array,index+i,k));
    }
    memory[index] = minimum;
    return memory[index];
}

int main(){
    int size,k;
    cin>>size>>k;
    vector<int> array(size);
    for(int i=0;i<size;i++) cin>>array[i];
    cout<<solution(array,0,k);
    return 0;
}