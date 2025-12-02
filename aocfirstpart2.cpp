#include <iostream>
using namespace std;

int main(){
  int initial = 50;
  int total_zeros = 0;
  string inp;
  while(cin >> inp){
    char op = inp[0];
    int num = stoi(inp.substr(1));
    if(op == 'L'){
       while(num > 0){
         initial--;
         if(initial < 0){
           initial = 99;
         }
         if(initial == 0){
            total_zeros++;
          }
         num--;
       }
      
    }
    else{
      while(num > 0){
         initial++;
         if(initial > 99){
           initial = 0;
         }
        if(initial == 0){
           total_zeros++;
         }
         num--;
       }
      
    }
  }
  cout << initial << endl;
  cout << total_zeros << endl;
}