#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j <= i ; ++j){
            if(i > 1 && i % 2 != 0 && j > 0 && j < i){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
	return 0;
}