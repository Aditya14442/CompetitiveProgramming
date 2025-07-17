#include <iostream>
#include <vector>
using namespace std;

void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> leftVec(arr.begin() + left, arr.begin() + mid + 1);
    std::vector<int> rightVec(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;

    while (i < leftVec.size() && j < rightVec.size()) {
        if (leftVec[i] <= rightVec[j]) {
            arr[k++] = leftVec[i++];
        } else {
            arr[k++] = rightVec[j++];
        }
    }
    while (i < leftVec.size()) {
        arr[k++] = leftVec[i++];
    }

    while (j < rightVec.size()) {
        arr[k++] = rightVec[j++];
    }
}
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}


int solution(vector<int>& array){
    int left=0,right=array.size()-1;
    if (array[right]-array[left]>array.size()){
        
    }
}

int main(){
    int test_cases,size;
    vector<int> array;
    cin>>test_cases;
    for (int i=0;i<test_cases;i++){
        cin>>size;
        for(int i=0;i<size;i++){
            cin>>array[i];
        }
        mergeSort(array,0,array.size()-1);
        solution(array);
    }
    return 0;
}