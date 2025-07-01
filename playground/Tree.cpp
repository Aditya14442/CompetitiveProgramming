#include <iostream>
using namespace std;

class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int data;

    TreeNode(int _data){
        left = nullptr;
        right = nullptr;
        data = _data;
    }
    TreeNode(){
        left = nullptr;
        right = nullptr;
    }

};

int main(){
    TreeNode* head = new TreeNode();
    for(int i=1;i<=10;i++){
        
    }

    return 0;
}
