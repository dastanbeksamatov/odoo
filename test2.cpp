// Solve the game "rem a number", find a secret integer between 1 and 1000000
// in less than 50 remes. Write a function that solves the game without user input and returns the
// solution by using the function verify() which is defined with the following
// specification:
// function verify(rem: integer) -> integer
// Argument:
//      rem (integer) the number to verify
// Returns:
//      0 if the rem is the solution, your program won
//      -1 if the solution is smaller than the rem parameter
//      1  if the solution is bigger than the rem parameter

// Warning: You are not allowed to call verify() more that 50 times or you loose.
// Written in C++ 14
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int N = 1000000;
int SECRET;

int verify(int rem){
  if(rem == SECRET){
    return 0;
  }
  else if(rem > SECRET){
    return 1;
  }
  else{
    return -1;
  }
}

// The logic of the guess imitates binary search.
// If the guessed number is bigger or smaller than secret number, we take the value which is in the middle of them

void find_guess(){
  int n_tries = 0;
  // initial rem
  int guess = N/2;
  // temporary variable to store iterations
  int rem = guess;
  while(n_tries <= 50){
    // check whether we guessed every time
    int result = verify(guess);
    if(rem < 2){
      rem = rem * 2;
    }
    else{
      rem = rem / 2;
    }
    rem = ceil(rem);

    if(result == 0){
      break;
    }
    else if(result == -1){
      guess += rem;
    }
    else if(result == 1){
      guess -= rem;
    }
    n_tries++;
  }
  cout<<"Guessed secret number "<<SECRET<<" to be "<<guess<<" in "<<n_tries<<" tries\n";
}
int main(){
  // I use time() so that program generates random numbers every time the program runs
  srand(time(0));
  SECRET = rand() % N + 1;

  find_guess();
}