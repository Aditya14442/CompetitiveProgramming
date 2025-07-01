#include <iostream>
#include <vector>
using namespace std;

int find_max(vector<vector<int>>* array){
    int max_val=0;
    for (int i=0;i<array->size();i++){
        for(int j=0;j<(*array)[i].size();j++){
            if( (*array)[i][j] > max_val ){
                max_val = (*array)[i][j];
            }
        }
    }
    return max_val;
}


int sol(vector<vector<int>>* array){
    int val_max=find_max(array);
    int max_freq=0;
    vector<int> row(array->size(),0);
    vector<int> col((*array)[0].size(),0);
    for (int i=0;i<array->size();i++){
        for (int j=0;j<(*array)[i].size();j++){
            if((*array)[i][j]==val_max){
                max_freq++;
                row[i]++;
                col[j]++;
            }
        }
    }
    for(int i=0;i<array->size();i++){
        for(int j=0;j<(*array)[i].size();j++){
            if(row[i]+col[j]-((*array)[i][j]==val_max)== max_freq){
                return val_max-1;
            }
        }
    }
    return val_max;
}


int main(){
    int test_cases;
    cin>>test_cases;
    for (int i=0;i<test_cases;i++){
        int row,col;
        cin>>row>>col;
        vector<vector<int>> array(row,vector<int>(col,0));
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cin>>array[i][j];
            }
        }
        cout<<sol(&array)<<endl;
    }
    return 0;
}