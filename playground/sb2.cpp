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
    vector<bool> smaller_int_exists(size,false);
    for(int i=0;i<size;i++){
        while(!st.empty() && array[i]<array[st.top()]){
            smaller_int_exists[st.top()]=true;
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<":"<<smaller_int_exists[i]<<" | ";
    }
    st = stack<int>();
    for(int i=0;i<size;i++){
        while(!st.empty() && st.top()<array[i]){
            sorted.push(st.top());
            st.pop();
        }
        if(smaller_int_exists[i]){
            st.push(array[i]);
        }
        else{
            sorted.push(array[i]);
        }
    }
    while(!st.empty()){
        sorted.push(st.top());
        st.pop();
    }
    int last=size+1;
    while(!sorted.empty()){
        if(sorted.top()>=last){
            cout<<"no"<<endl;
            return 0;
        }
        last=sorted.top();
        sorted.pop();
    }
    cout<<"yes"<<endl;
    return 0;
}