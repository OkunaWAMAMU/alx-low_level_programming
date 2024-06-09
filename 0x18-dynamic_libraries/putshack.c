#include <stdio.h>
#include <stdlib.h>

int rand()
{
	static int nums[] = {9, 8, 10, 24, 75, 9};
	static int index = 0;
	
	if (index < 6)
	{
		return nums[index++];
	}
	else
	{
		return rand();
	}
}
void srand(unsigned int seed)
{
	// Do nothing
}
