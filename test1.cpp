// Write a program that outputs sequentially the integers from 1 to 99 but on some conditions prints a string instead:
// when the integer is a multiple of 3 print “Open” instead of the number,
// when it is a multiple of 7 print “Source” instead of the number,
// when it is a multiple of both 3 and 7 print “OpenSource” instead of the number.
// Written in C++ 14
#include <bits/stdc++.h>

using namespace std;

void printNums(){
  int n = 99;
  int i = 1;
  while(i<=n){
    if(i%3==0 && i%7==0){
      cout<<"OpenSource"<<endl;
    }
    else if(i%7==0){
      cout<<"Source"<<endl;
    }
    else if (i%3==0){
      cout<<"Open"<<endl;
    }
    else{
      cout<<i<<endl;
    }
    i++;
  }
}

int main(){
  printNums();
  return 0;
}
