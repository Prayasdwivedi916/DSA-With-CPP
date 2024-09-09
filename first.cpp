#include<iostream>
using namespace std;

int add(int a ,int b){
      return a*a + b*b;
}
int main(){
      int a,b;
      cin>>a>>b;

      cout<<add(a,b)<<endl;
      return 0;
}