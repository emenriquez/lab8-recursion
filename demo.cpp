// Use this file to try out any of your code
// use "make demo" to run this code anytime

#include "recursionLab.h"

int main() {

	cout << lineOfStars(5);  //   should print: *****
	stars(4);
	cout << power(3, 3)<<endl; // should be 27
	cout << isPalindromeR("foobar") << " should be 0" << endl;
	cout << isPalindromeR("banana") << " should be 0" << endl;
	cout << isPalindromeR("bananab") << " should be 1" << endl;
	cout << isPalindromeR("racecar") << " should be 1" << endl;

	cout << "reverse of Hello is " << reverse("Hello") << endl;

}