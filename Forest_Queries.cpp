#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,querySize;
    cin>>n>>querySize;
    vector<vector<int>> forest(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char tree;
            cin>>tree;
            if(tree=='*'){
                forest[i][j]=1;
            }
        }
    }

    vector<vector<int>> matrix(n+1,vector<int>(vector<int>(n+1,0)));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            matrix[i][j]=matrix[i-1][j]+matrix[i][j-1]+forest[i-1][j-1]-matrix[i-1][j-1];
        }
    }
    int y1,x1,y2,x2;
    for(int i=0;i<querySize;i++){
        cin>>x1>>y1>>x2>>y2;
        cout<< matrix[x2][y2]-matrix[x1-1][y2]-matrix[x2][y1-1]+matrix[x1-1][y1-1]<<endl;
    }
    

    return 0;
}