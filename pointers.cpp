// Main function of the C++ program.
/*Write a program that uses array of characters
to take input from user and checks whether the input represents a palindrome or not, using pointer arithmetic.
In both cases the program should display appropriate messages*/

#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	bool isPalindrome = true;
    char inpChar[10];
    char *inpPtr;
    inpPtr = inpChar;
    
    cout<<"Enter your characters: ";
    cin>>inpPtr;
    
  
	
	int lengthofArray = strlen(inpChar);
	cout<<"The lengthofArray of your given array is : "<<lengthofArray<<endl;
	
	
	char *startPtr = inpPtr;
	char *endPtr = inpPtr + lengthofArray - 1;
	
	 while (startPtr < endPtr) {
        if (*startPtr != *endPtr) {
            isPalindrome = false;
            break; // If characters don't match, break out of the loop
        }
        startPtr++; // Move start pointer forward
        endPtr--;   // Move end pointer backward
    }
    
    	if (isPalindrome) {
        cout << "The string is a palindrome!" << endl;
    	} else {
        cout << "The string is not a palindrome." << endl;
    	}
	
}
