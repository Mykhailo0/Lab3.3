// Lab_03_3.cpp
// <Ящишин Михайло Андрійович >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 31

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, R, y;

	cout << "x = ";
	cin >> x;

	cout << "R = ";
	cin >> R;

	if (x < -1 - R)
		y = -x - 1 - R;
	else
		if (x == -1 - R)
			y = 0;
		else
			if (x > -1 - R && x < -1)
				y = sqrt(pow(((x - 1) * (x - 1)), -1.0) + R * R);
			else
				if (x >= -1 && x <= 1)
					y = R;
				else
					if (x > 1 && x < 2)
						y = R + (-1 - R) * (x - 1);
					else
						y = -1;
	cout << endl << "y = " << y << endl;

	return 0;
}