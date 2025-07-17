#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>>& array){
    vector<vector<int>> prefix2d(array.size(),vector<int>(array[0].size()+1,0));
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[0].size();j++){
            prefix2d[i+1][j+1] = prefix2d[i-1][j]+prefix2d[i][j-1]+array[i][j]-prefix2d[i-1][j-1]; 
        }
    }
    
    return 0;
}

int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int row,col;
        cin>>row>>col;
        vector<vector<int>> array(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>array[i][j];
            }
        }
        cout<<solution(array)<<endl;
    }
    return 0;
}