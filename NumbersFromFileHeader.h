#ifndef NUMBERSFROMFILEHEADER_H_
#define NUMBERSFROMFILEHEADER_H_

int getArraySize();
void initializeArray(int numbersArrayIn[]);

int getLowest(int numbersArrayIn[], const int ARRAY_SIZE_IN);
int getHighest(int numbersArrayIn[], const int ARRAY_SIZE_IN);

int getSum(int numbersArrayIn[], const int ARRAY_SIZE_IN);
double getAverage(int numbersArrayIn[], const int ARRAY_SIZE_IN);

#endif
