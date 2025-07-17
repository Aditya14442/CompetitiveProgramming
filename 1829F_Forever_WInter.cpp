#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> adj;
    int test_cases;
    cin>>test_cases;
    for(int t=0;t<test_cases;t++){
        int vertices, edges;
        cin>>vertices>>edges;
        adj = vector<vector<int>>(vertices);
        int a,b,x,y,adjele;
        for(int i=0;i<edges;i++){
            cin>>a>>b;
            adj[a-1].push_back(b);
            adj[b-1].push_back(a);
        }
        for(int i=0;i<adj.size();i++){
            if(adj[i].size()==1){
                y = adj[adj[i][0]-1].size()-1;
                adjele = adj[i][0]-1;
                break;
            }
        }
        for(int i=0;i<adj[adjele].size();i++){
            if(adj[adj[adjele][i]-1].size()!=1){
                x = adj[adj[adjele][i]-1].size();
                break;
            }
        }
        cout<<x<<" "<<y<<endl;

    }
    return 0;
}