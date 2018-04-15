#include "FibonacciIterator.h"
class FibonacciIterator
{
	FibonacciIterator::FibonacciIterator(long aMaxN)
	{
		fMaxN = aMaxN;
		fCurrentN = 1;
		fPrevious = 0;
		fCurrent = 0; // these may need to be changed
	}

	const long & FibonacciIterator::operator*() const
	{
		for (i = 0; i < fMaxN; i++)
		{
			fCurrent
		}
	}
	FibonacciIterator& FibonacciIterator:: operator++()
	{
		fCurrentN++;
	}
	FibonacciIterator::FibonacciIterator operator++(int)
	{
		FibonacciIterator temp = *this;
		fCurrentN++;
		return temp;
	}
	bool FibonacciIterator::operator==(const FibonacciIterator& aOther) const 
	{
		return (fCurrentN == aOther.fCurrentN) &&
			   (fMaxN == aOther.fMaxN) // this might be wrong fCurrentN == fMaxN
	}
	bool FibonacciIterator::operator!=(const FibonacciIterator& aOther)const
	{
		return != (*this == aOther); // slide 140
	}

	FibonacciIterator::FibonacciIterator begin() const
	{
		FibonacciIterator temp = *this;
		temp.fMaxN = 1;
		return temp;
	}
	FibonacciIterator::FibonacciIterator end() const
	{
		FibonacciIterator temp = *this;
		temp.fCurrent = -1;
		return temp; // not sure about this
	}
	














};