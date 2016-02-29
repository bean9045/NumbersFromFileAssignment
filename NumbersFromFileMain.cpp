#include <iostream>
#include <iomanip>

#include "NumbersFromFileHeader.h"

using namespace std;

int main()
{
	const int ARRAY_SIZE = getArraySize();

	int numbersArray[ARRAY_SIZE];
	initializeArray(numbersArray);

	cout << ARRAY_SIZE << endl;

	cout << "The lowest number is: " << getLowest(numbersArray, ARRAY_SIZE) << endl;
	cout << "The highest number is: " << getHighest(numbersArray, ARRAY_SIZE) << endl;
	cout << "The sum of all these numbers is: " << getSum(numbersArray, ARRAY_SIZE) << endl;
	cout << "The average of all these numbers is: " << setprecision(10) << fixed << getAverage(numbersArray, ARRAY_SIZE) << endl;

	char c;
	cout << "Press any key and hit <ENTER> to exit: " << flush;
	cin >> c;
	cout << "Exiting..." << endl;

	return 0;
}
