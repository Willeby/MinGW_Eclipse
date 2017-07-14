/*
 * This is a simple C++11 Hello world!
 *
 *  Created on: 14.07.2017
 *      Author: YWillener
 */

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	int array[] = { 11, 22, 33, 44, 55};
	for (auto i : array)
	{
		cout << "element: " << i << endl;
	}

	return 0;
}

