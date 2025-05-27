#include<iostream>
using namespace std;
int main(){
    int n;
    int row = 1;
    cin >>n;
    while(row<=n){
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space -1;
        }
        int col = 1;
        int star = n - row + 1;
        while( col<=star){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}