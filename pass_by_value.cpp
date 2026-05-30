#include<iostream>
using namespace std;
int sum(int a, int b){
    a = a +24;
    b = b + 45; 
    return a+b;
}
int main(){
  int x = 9, y = 6;
  cout << sum(x, y) << endl;
  return 0;
}