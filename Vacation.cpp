#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memory;
int maxHappiness(vector<vector<int>>& array, int index, int day){
    if(index==array.size()-1) return array[index][day];
    if(memory[index][day]!=-1) return memory[index][day];
    if(day==0) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 1),maxHappiness(array,index+1,2) );
    else if(day==1) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 0),maxHappiness(array,index+1,2) );
    else if(day==2) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 0),maxHappiness(array,index+1,1) );
    return memory[index][day];
}

int main(){
    int days;
    cin>>days;
    vector<vector<int>>array(days,vector<int>(3));
    memory = vector<vector<int>>(days,vector<int>(3,-1));
    for(int i=0;i<days;i++) cin>>array[i][0]>>array[i][1]>>array[i][2];
    cout<<max(maxHappiness(array,0,0),max(maxHappiness(array,0,1),maxHappiness(array,0,2)));
    return 0;
}