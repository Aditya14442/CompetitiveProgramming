#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    int size;
    stack<int> st,sorted;
    cin>>size;
    vector<int> array(size);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]>i+1){
            st.push(array[i]);
        }
        else{
            sorted.push(array[i]);
        }
        while(!st.empty() && st.top()<=i+1){
            sorted.push(st.top());
            st.pop();
        }
    }
    vector<int> sortedArray;
    while(!sorted.empty()){
        sortedArray.push_back(sorted.top());
        cout<<sorted.top()<<" ";
        sorted.pop();
    }
    for(int i=0;i<sortedArray.size()-1;i++){
        if(sortedArray[i]<sortedArray[i+1]){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes";


    return 0;
}