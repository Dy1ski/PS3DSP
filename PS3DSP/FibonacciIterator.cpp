#include "FibonacciIterator.h"
#include <iostream>
using namespace std;

FibonacciIterator::FibonacciIterator(long aMaxN)
{
	fMaxN = aMaxN;
	fCurrentN = 1;
	fPrevious = 0;
	fCurrent = 1;
}
const long& FibonacciIterator::operator*() const
{
	return fCurrent;
}
FibonacciIterator& FibonacciIterator::operator++()
{
	int fNext;
	for (int i = 1; i < fMaxN; i++)
	{
		fNext = fCurrent + fPrevious;
		fPrevious = fCurrent;
		fCurrent = fNext;
		cout << fPrevious << endl;
	}
	return *this;
}

FibonacciIterator::FibonacciIterator operator++(int)
{
	FibonacciIterator temp = *this;
	++(*this);

	return temp;
}
bool FibonacciIterator::operator==(const FibonacciIterator& aOther) const
{
	return fCurrentN == aOther.fCurrentN; // may need correction
}
bool FibonacciIterator::operator!=(const FibonacciIterator& aOther) const
{
	return !(*this == aOther.fCurrentN);
}
FibonacciIterator FibonacciIterator::begin() const
{
	FibonacciIterator temp = *this;
	temp.fCurrentN = 1;
	++temp;
	return temp;

}
FibonacciIterator FibonacciIterator::end() const
{
	FibonacciIterator temp = *this;
	temp.fCurrentN = fMaxN + 1;
	return temp;
}