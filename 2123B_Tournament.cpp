#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int>& array,int j, int k){
    if (k>=2) return true;
    else{
        int maximum=-1;
        for(int i=0;i<array.size();i++){
            if(i!=j){
                if(maximum<array[i]) maximum=array[i];
            }
        }
        if(array[j]>=maximum) return true;
        else return false;
    }
}

int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int> array(n);
        for(int x=0;x<n;x++) cin>>array[x];
        cout<<(solution(array,j-1,k)? "YES": "NO")<<endl;
    }
    return 0;
}