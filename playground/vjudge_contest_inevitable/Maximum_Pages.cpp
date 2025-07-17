#include <iostream>
#include <vector>
using namespace std;



int main(){
    int books,budget;
    vector<int> price(books),pages(books);
    for(int i=0;i<books;i++) cin>> price[i];
    for(int i=0;i<books;i++) cin>>pages[i];

    return 0;
}