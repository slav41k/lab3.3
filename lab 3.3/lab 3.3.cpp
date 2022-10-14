#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (-6 - R <= x && x <= -6)
		y = -sqrt(R * R - (x + 6) * (x + 6));
	else
		if (-6 < x && x <= -R)
			y = (R * x + R * R) / (6 - R);
		else
			if (-R < x && x <= 0)
				y = sqrt(R * R - x * x);
			else
				if (0 < x && x <= 3)
					y = -(R * x) / -3 + R;
				else
					y = (R * x) / 6 - 0,5 * R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}