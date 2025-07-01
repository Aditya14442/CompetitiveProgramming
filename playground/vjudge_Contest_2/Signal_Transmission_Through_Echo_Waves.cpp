#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int,int> memory;
int solution(vector<int> & array, int index){
    if(index+3==array.size()) memory[index] = min(abs(array[index]-array[index+1])+solution(array,index+1),abs(array[index]-array[index+2]));
    if(index+2==array.size()) memory[index] = abs(array[index]-array[index+1]);
    if(!memory.count(index)) memory[index] = min(abs(array[index]-array[index+1])+solution(array,index+1),abs(array[index]-array[index+2])+solution(array,index+2));
    return memory[index];
}

int main(){
    int size;
    cin>>size;
    vector<int> array(size);
    for(int i=0;i<size;i++) cin>>array[i];
    cout<<solution(array,0);
    return 0;
}