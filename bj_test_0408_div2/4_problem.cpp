/*
새는 인트형이다.
N새는 오름차순으로 날아간다. 날아가야할 것이 초과되면 1부터 다시 오름차순.
날아가는데 1초가 걸리고, 다 날아가기까지 걸리는 시간을 산출.
--
14
13/ 1
11/ 1 2
8/ 1 2 3
4/ 1 2 3 4
3/ 1 2 3 4 1
1/ 1 2 3 4 1 2
0/ 1 2 3 4 1 2 1  = 7초
*/

#include <stdio.h>

int main()
{
	int nBirdNum(0);
	int nUpper(0);
	int nTime(0);

	scanf("%d", &nBirdNum);

	nUpper = 1;
	while (nBirdNum != 0)
	{
		if (nBirdNum < nUpper)
		{
			nUpper = 1;
		}
		nBirdNum -= nUpper;
		++nTime;
		++nUpper;
	}

	printf("%d\n", nTime);

	return 0;
}