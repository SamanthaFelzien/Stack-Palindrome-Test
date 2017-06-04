/*
Program: HW 5, programming assignment 1

Purpose: This program checks, using 3 stacks, if a string is a palindrome

Developer: Samantha Felzien

Created: 3/6/17
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<char> S;
    stack<char> S1;
    stack<char> S2;
    string s1;
    s1 = "tacocat";

      string::iterator si1;
      //iterate through string and push each character onto stack S and stack S1
    for(si1 = s1.begin() ; si1 < s1.end(); si1++){
            S.push(*si1);
            S1.push(*si1);
            cout << *si1;
  }
    cout << " ";
    //pop elements fom S1 and push onto S2
  while (!S1.empty()) {
        S2.push(S1.top());
        S1.pop();
    }

//pop each element from S and S2 and compare if the characters are the same
while (!S.empty()){
        if (S.top()==S2.top()){
                S.pop();
                S2.pop();
        } else {
            cout << "is not a palindrome" << endl;
            break;
        }
}

if (S.empty()){
    cout << "is a palindrome" << endl;
}
}






