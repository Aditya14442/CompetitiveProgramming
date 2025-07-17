#include <iostream>
#include <vector>
using namespace std;
/* Memoization */
// vector<vector<int>> memory;
// int maxHappiness(vector<vector<int>>& array, int index, int day){
//     if(index==array.size()-1) return array[index][day];
//     if(memory[index][day]!=-1) return memory[index][day];
//     if(day==0) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 1),maxHappiness(array,index+1,2) );
//     else if(day==1) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 0),maxHappiness(array,index+1,2) );
//     else if(day==2) memory[index][day] = array[index][day] + max(maxHappiness(array,index+1, 0),maxHappiness(array,index+1,1) );
//     return memory[index][day];
// }

/* Tabulation */
// int maxHappiness(vector<vector<int>>& array){
//     vector<vector<int>> memory(array.size(),vector<int>(3));

//     memory[0][0] = array[0][0];
//     memory[0][1] = array[0][1];
//     memory[0][2] = array[0][2];
//     for(int i=1;i<array.size();i++){
//         memory[i][0] = array[i][0]+max(memory[i-1][1],memory[i-1][2]);
//         memory[i][1] = array[i][1]+max(memory[i-1][0],memory[i-1][2]);
//         memory[i][2] = array[i][2]+max(memory[i-1][0],memory[i-1][1]);
//     }
//     return max(memory[memory.size()-1][0],max(memory[memory.size()-1][1],memory[memory.size()-1][2]));
// }

int maxHappiness(vector<vector<int>>& array){
    int previousMaxA=array[0][0],previousMaxB=array[0][1],previousMaxC=array[0][2];
    int currentMaxA,currentMaxB,currentMaxC;
    for(int i=1;i<array.size();i++){
        currentMaxA = array[i][0]+max(previousMaxB,previousMaxC);
        currentMaxB = array[i][1]+max(previousMaxA,previousMaxC);
        currentMaxC = array[i][2]+max(previousMaxA,previousMaxB);
        previousMaxA = currentMaxA;
        previousMaxB = currentMaxB;
        previousMaxC = currentMaxC;
    }
    return max(previousMaxA,max(previousMaxB,previousMaxC));
}



int main(){
    int days;
    cin>>days;
    vector<vector<int>>array(days,vector<int>(3));
    for(int i=0;i<days;i++) cin>>array[i][0]>>array[i][1]>>array[i][2];
    // memory = vector<vector<int>>(days,vector<int>(3,-1));
    // cout<<max(maxHappiness(array,0,0),max(maxHappiness(array,0,1),maxHappiness(array,0,2)));
    cout<<maxHappiness(array);
    return 0;
}