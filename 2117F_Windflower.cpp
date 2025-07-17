#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> lnh;
unordered_set<int> visited;
int splitHeight=-1;
void populateHeight(vector<vector<int>>& adj, int node,int height){
    visited.insert(node);
    if(adj[node-1].size()==0) lnh.push_back(height);
    
    int visitedCount=0;
    for(int i=0;i<adj[node-1].size();i++){
        if(!visited.count(adj[node-1][i])){
            populateHeight(adj,adj[node-1][i],height+1);
        }
        else{
            visitedCount++;
        }
    }
    if(visitedCount==adj[node-1].size()) lnh.push_back(height);
    if(adj[node-1].size()-visitedCount==2) splitHeight = height;
}

long long modex(long long base, long long exponent, long long mval){
    if(exponent==0 || base == 1 ) return 1;
    long long result = 1;
    base = base%mval;
    while(exponent!=0){
        if(exponent%2==1) result = (result*base)%mval;
        exponent/=2;
        base = (base*base)%mval;
    }
    return result;
}

int main(){
    long long mval = 1e9+7;
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int size;
        cin>>size;
        vector<vector<int>> adj(size);
        for(int i=0;i<size-1 ;i++){
            int a,b;
            cin>>a>>b;
            adj[a-1].push_back(b);
            adj[b-1].push_back(a);
        }
        lnh = vector<int>();
        visited = unordered_set<int>();
        populateHeight(adj,1,1);
        if(lnh.size()>2) {
            cout<<0<<endl;
        }
        else if(lnh.size()==1){
            cout<<modex(2,lnh[0],mval)<<endl;
        }
        else if(lnh.size()==2){
            if(lnh[0]==lnh[1]) cout<<modex(2,splitHeight+1,mval)<<endl;
            else cout<<modex(2,splitHeight,mval)*(modex(2,max(lnh[0],lnh[1])-min(lnh[0],lnh[1]),mval)+2)<<endl;
        }
        else{
            cout<<"Hit default case"<<endl;
        }
    }
    return 0;

}