#include "FibonacciIterator.h"
class FibonacciIterator
{
	FibonacciIterator::FibonacciIterator(long aMaxN)
	{
		fMaxN = n;
		fCurrentN = 1;
		fPrevious = 0;
		fCurrent = 0; // these may need to be changed
	}

	const long & FibonacciIterator::operator*() const
	{
		// TODO: insert return statement here
	}
	FibonacciIterator& FibonacciIterator:: operator++()
	{
		fCurrent++;
	}
	FibonacciIterator::FibonacciIterator operator++(int)
	{
		FibonacciIterator temp = *this;
		fCurrent++;
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
	
	}
	FibonacciIterator::FibonacciIterator end() const
	{
		FibonacciIterator temp = *this;
		temp.fCurrent = -1;
		return temp; // not sure about this
	}
	














};