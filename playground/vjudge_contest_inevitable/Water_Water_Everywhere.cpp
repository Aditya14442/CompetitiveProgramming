#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>>& array,vector<vector<bool>>& visited,int row, int col){
    if(row<0 || col<0 || row>=array.size() || col>=array[0].size()) return 0;
    if(array[row][col]==0) return 0;
    if(visited[row][col]==true) return 0;
    visited[row][col] = true;
    return array[row][col]+solution(array,visited,row+1,col)+solution(array,visited,row,col+1)+solution(array,visited,row,col-1)+solution(array,visited,row-1,col);
}

int main(){
    int test_case;
    cin>>test_case;
    for(int t=0;t<test_case;t++){
        int row,col,maximum=-1;
        cin>>row>>col;
        vector<vector<int>> array(row,vector<int>(col));
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>array[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                maximum = max(maximum,solution(array,visited,i,j));
            }
        }
        cout<<maximum<<endl;
        
    }
    return 0;
}