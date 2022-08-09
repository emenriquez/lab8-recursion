#include <iostream>
#include <string>

using namespace std;

// Write a function lineOfStars() that prints a line of n stars.
// Example: lineOfStars(3) returns "***"
//          lineOfStars(0) returns ""
// You may not use a loop.
string lineOfStars(int n) {
	return "fixme";
}

// Write a function power() that will
//    compute the x to the power of n recursively
// if the power is invalid, return 0
float power(float x, int n) {
	return -1;	
}

/*
Write a function stars(int n) that prints the shape below.
You may call lineOfStars as a subroutine.
You may not use a loop.  
stars(4);

should display:

****
***
**
*
**
***
****

*/
void stars(int n) {}

// Write a *recursive* function that will check if
//    a string is a palindrome
// Hint 1: you can call s.front() to get the first character of string and s.back() to get the last one
// Hint 2: s.substr(i,j) gives you the substring of s. For example if s = Hello, s(1,s.length()-1) gives you ello
bool isPalindromeR(string s)
{
	return false;
}


// Write a function that will return the reverse of a string
// The function should be recursive, you can use the substring
//  methods from the previous function
string reverse(string s)
{
	return "fixme"; 
}
