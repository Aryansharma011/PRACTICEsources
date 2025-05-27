// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int count = 1;
        while(col<=n - row + 1){
            cout<<count;
            count++;
            col++;
        }
        int i = 1;
        while(i <= 2*row - 2 ){
            cout<<"*";
            i++;
        }
        int num=n - row + 1;
        int j = 1;
        while(j<=n-row+1){
            cout<<num;
            num--;
            j++;
        }
        cout<<endl;
        row++;
    }
}