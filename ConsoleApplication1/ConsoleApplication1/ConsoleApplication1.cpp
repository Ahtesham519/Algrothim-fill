// ConsoleApplication1.cpp : Defines the entry point for the console application.
//algrothim fill, fill_n, generate and generate_n

#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>
#include "stdafx.h"
using namespace std;
	char nextLetter();  //protype of generator function
	int main()
	{
		array< char, 10> chars;
		ostream_iterator<char > output(cout, " ");
		fill(chars.begin(), chars.end(), '5');    //fill chars with 5s
		
		cout << "chars after filling with 5s: \n";
		copy(chars.cbegin(), chars.cend(), output);

		//fill first five elements of chars with As
		fill_n(chars.begin(), 5, 'A');

		cout << "\n \n chars after filling five elements with As:\n";
		copy(chars.cbegin(), chars.cend(), output);

		//generate values for all elements of chars with nextLetter
		generate(chars.begin(), chars.end(), nextLetter);

		cout << "\n \n chars after generating letters A-J: \n";
		copy(chars.cbegin(), chars.cend(), output );


		//generate values for first five elements of chars with nextLetter
		generate_n(chars.begin(), 5, nextLetter);

		cout << "\n \n chars after generating K-O for the"
			<< "first five elements : \n";
		copy(chars.cbegin(), chars.cend(), output);
		cout << endl;

		} // end main

	//generator function returns next letter (starts with A)

	char nextLetter()
	{
		static char letter = 'A';
		return letter++;

	}// end function nextLetter

