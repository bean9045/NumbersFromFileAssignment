#include <iostream>
#include <fstream>

#include "NumbersFromFileHeader.h"

using namespace std;

int getArraySize()
{
	ifstream numbers;
	numbers.open("NUMBERS");

	int count = 0;
	int temp;

	while (numbers >> temp)
	{
		count++;
	}
	numbers.close();

	return count;
}

void initializeArray(int numbersArrayIn[])
{
	ifstream numbers;
	numbers.open("NUMBERS");

	int count = 0;

	while (numbers >> numbersArrayIn[count])
	{
		count++;
	}
	numbers.close();
}

int getLowest(int numbersArrayIn[], const int ARRAY_SIZE_IN)
{
	int min = numbersArrayIn[0];

	for (int k = 0; k < ARRAY_SIZE_IN; k++)
	{
		if (numbersArrayIn[k] < min)
		{
			min = numbersArrayIn[k];
		}
	}
	return min;
}

int getHighest(int numbersArrayIn[], const int ARRAY_SIZE_IN)
{
	int max = numbersArrayIn[0];

	for (int k = 0; k < ARRAY_SIZE_IN; k++)
	{
		if (numbersArrayIn[k] > max)
		{
			max = numbersArrayIn[k];
		}
	}
	return max;
}

int getSum(int numbersArrayIn[], const int ARRAY_SIZE_IN)
{
	int total = 0;

	for (int k = 0; k < ARRAY_SIZE_IN; k++)
	{
		total += numbersArrayIn[k];
	}
	return total;
}

double getAverage(int numbersArrayIn[], const int ARRAY_SIZE_IN)
{
	int sum = 0;

	for (int k = 0; k < ARRAY_SIZE_IN; k++)
	{
		sum += numbersArrayIn[k];
	}
	double average = static_cast<double> (sum) / ARRAY_SIZE_IN;

	return average;
}
