/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabriel Mousa
*/

// What does that mean:
// It means that when you write a function the argument that you pass through is passed a constant. In reality it's not the same as the function creates duplicates however it means it cannot be changed inside the function body.

// Why might we want to do that:
// You might want to do this if you are working with a team of developer, it could make it a more guaranteed way of ensuring that something follows protocol or is done a certain way.

// Why don't people do that often:
// You would be unable to change the variable inside of the function body. Also it shouldn't affect runtime too much, therefore there is no considerable purpose.



#include <iostream>
#include <stdlib.h>

using namespace std;

int test1(const int num);
int test2(const int num);

int main() {
  cout << test1(4) << "\n";

  cout << test2(5) << "\n";

} 

int test1(const int num){
    return num;
}

int test2(const int num){
    //I have tried running this test function and it will not work, gives me an error everytime.
    //num = 4;
    
    return num;
}
