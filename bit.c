#include <stdio.h>

int bitAnd(int x, int y)
{
	return ~(~x|~y);
}

int main()
{
	printf("%d %d\n", bitAnd(6, 5), 6&5);
	return 0;
}