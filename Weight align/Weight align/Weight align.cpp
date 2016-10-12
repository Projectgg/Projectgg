// Weight align.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int N = 9;
	int KRATN[N] = { 0, 3, 2, 1, 0, 0, 0, 1, 1 }, SOL[N];
	int V1 = 10;

	



	for (int i = N-1; i > 1; i--)
	{
		SOL[i] = 0;
		if (KRATN[i] > 0 && i <= V1)
		{
			KRATN[i] -= 1;
			SOL[i] += 1;
			V1 = V1 - i;
			if (V1 == 0 || SOL[i] >=1)
			{
				cout << "Number of weight: " << i << endl;
			}
		}
		
	}
	system("Pause");
	return 0;
}

