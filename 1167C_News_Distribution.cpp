#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
unordered_set<int> visited;
int find_depth(vector<vector<int>>& adj, int index){
    if(!visited.count(index)){
        visited.insert(index);
        for(int i=0;i<adj[index].size();i++){
            find_depth(adj,adj[index][i]-1);
        }
    }
    return visited.size();
}

void print2dArray(vector<vector<int>> & matrix){
    for(int i=0;i<matrix.size();i++){
        cout<<i+1<<" : ";
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m,size,last,current;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> answer(n,-1);
    for(int w=0;w<m;w++){
        cin>>size;
        if(size>0) cin>>last;
        for(int s=0;s<size-1;s++){
            cin>>current;
            adj[last-1].push_back(current);
            adj[current-1].push_back(last);
            last=current;
        }
    }
    for(int i=0;i<n;i++){
        if(answer[i]==-1){
            visited = unordered_set<int>();
            find_depth(adj,i);
            for(auto& num : visited){
                answer[num] = visited.size();
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}