#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>* array){
    for(int i=0;i<array->size()-1;i++){
        if((*array)[i]>(*array)[i+1]){
            swap((*array)[i],(*array)[i+1]);
        }
    }
}
// Use vector<pair<int,int>> a(n);
void solve(vector<int>* forecast,vector<int>* real_temp,int error){
    vector<int> _forecast = *forecast;
    sort(&_forecast);
    vector<int> _real_temp = *real_temp;
    sort(&_real_temp);
    vector<int> real_temp_unjumbled(0,forecast->size());
    for(int i=0;i<forecast->size();i++){
        
    }

}
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int days,error;
        cin>>days>>error;
        vector<int> forecast(days,0),real_temp(days,0);
        for(int i=0;i<days;i++){
            cin>>forecast[i];
        }
        for(int i=0;i<days;i++){
            cin>>real_temp[i];
        }
        solve()
    }
    return 0;
}