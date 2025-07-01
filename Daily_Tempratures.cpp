#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> tempratures = {}
    vector<int> days_to_wait(tempratures.size(),0);
    pair<int,vector<int>> temps(71);
    for (int i=0;i<tempratures.size();i++){
        temps[tempratures[i]-30].push_back(i);
    }
    return 0;
}