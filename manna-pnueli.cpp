#include <iostream>

using namespace std;

int main()
{
	int x, vf, stv[100], y;

	cout << "x = "; cin >> x;
	
	vf = 0, stv[vf] = x;

	while (vf >= 0)
	{
		y = stv[vf];

		if (y < 12)
		{
			stv[++vf] = y+2;
		}
		else
		{
			if (--vf >= 0)
			{
				stv[vf] = y-1;
			}
		}
	}

	cout << "f(" << x << ") = " << y-1 << '\n';

	return 0;
}
