#include <iostream>
#include <vector>
#include <unor 
using namespace std;
int main(){
    vector<vector<int>> graph = {{0,1},{0,1},{1,1},{1,4},{2,3}};
    int n=graph.size();
    vector<vector<int>> adjacencyList(n);
    for(int i=0;i<n;i++){
        adjacencyList[graph[i][0]].push_back(graph[i][1]);
    }

    return 0;
}