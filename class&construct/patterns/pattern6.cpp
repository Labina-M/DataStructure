/*

12345
1234
123
12
1

*/



#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1 ; i<=n ; i ++){
        for(int j = 1 ; j<=n-i+1 ; j++){
                cout<<j;

        }
        cout<<endl;
    }

}

int main(){
int a;
cout<<"enter ";
cin>>a;
pattern(a);
return 0;
}