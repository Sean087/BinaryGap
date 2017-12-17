/*
 	Name:				Sean Horgan
 	Date Complete:		17/12/2017
	Task Name:			Binary Gap - Find longest sequence of zeros in binary representation of an integer.
	Task description:	A binary gap within a positive integer N is any maximal sequence of consecutive zeros that 
						is surrounded by ones at both ends in the binary representation of N.
						
						For example, number 9 has binary representation 1001 and contains a binary gap of length 2. 
						The number 529 has binary representation 1000010001 and contains two binary gaps : 
						one of length 4 and one of length 3. The number 20 has binary representation 10100 and 
						contains one binary gap of length 1. The number 15 has binary representation 1111 and 
						has no binary gaps.
						
						Write a function :
						
						int solution(int N);
						
						that, given a positive integer N, returns the length of its longest binary gap.
						The function should return 0 if N doesn't contain a binary gap.

						For example, given N = 1041 the function should return 5, because N has binary
						representation 10000010001 and so its longest binary gap is of length 5.

						Assume that :

						N is an integer within the range[1..2, 147, 483, 647].
						Complexity :

						expected worst - case time complexity is O(log(N));
						expected worst - case space complexity is O(1).
*/

#include "Solution.h"

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	int currentGap, finalGap;
	bool count; // Are we counting a gap?

				// If value N = 0, return a count of 0
	if (sizeof(N) == 0)
	{
		return 0;
	}
	else {
		for (currentGap = 0, finalGap = 0, count = false; N > 0; N /= 2)
		{
			/* If value is not zero, we will start a gap */
			if ((N % 2) != 0) {
				/*
				* If our final gap is smaller than current gap then a new largest gap is found
				* therefore we set the final gap to the new largest gap.
				*/
				if (finalGap < currentGap) finalGap = currentGap;
				count = true;       // Start couting zeros
				currentGap = 0;     // Reset gap to 0 for new gap count
			}
			// We found a zero!
			else if ((N % 2) == 0) {
				if (count) currentGap++; // If a count has begun and value is 0, increment gap
			}
		}
	}
	return finalGap;
}
