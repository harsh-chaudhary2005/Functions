#include<iostream>
using namespace std;
bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if (i % n != 0)
        {
            return true;
        }
        return n;
    }
    
}
int main(){
  int n = 50;
  cout << prime(50)<<endl;
  return 0;
}