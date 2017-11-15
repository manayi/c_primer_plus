#include <stdio.h>
int main(void) {
	float rain[4][12] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4}
	};

	int year, month;
	for (year = 0; year < 4; year++) {
		for (month = 0; month < 12; month++) {
			printf("%f ", rain[year][month]);
		}
		printf("\n");
	}

	return 0;
}