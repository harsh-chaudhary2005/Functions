#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
       
    }
    return fact;
}
int main(){
  cout << fact(5) << endl;
  cout << fact(9) << endl;
  cout << fact(11) << endl;
  return 0;
}