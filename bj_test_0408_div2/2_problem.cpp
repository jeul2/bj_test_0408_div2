/*
1,2,3,4 �߿� ���� �� �ϳ��� ����
5, 6 �߿� ���� �� �ϳ��� �� ���� ���ϴ� ���α׷�

*/

#include <stdio.h>

int main()
{
	int arScore[7]{};
	int nMinData(0);

	//
	freopen("input.txt", "r", stdin);

	arScore[0] = 0;
	for (int i = 1; i <= 6; ++i)
	{
		scanf("%d", &arScore[i]);
		arScore[0] += arScore[i];
	}

	//1,2,3,4
	nMinData = arScore[1];
	for (int i = 2; i <= 4; ++i)
	{
		if (nMinData > arScore[i])
			nMinData = arScore[i];

	}
	arScore[0] -= nMinData;

	//5,6
	nMinData = arScore[5];
	if (nMinData > arScore[6])
		nMinData = arScore[6];
	arScore[0] -= nMinData;


	printf("%d\n", arScore[0]);
	return 0;
}