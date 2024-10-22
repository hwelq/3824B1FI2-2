#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Rus");
	int h, w, d, pdvp, pdsp, pd, m1, m2, m3, m4, m5, pieces;

	printf("Введите параметры шкафа в см (высота, ширина, глубина):\n");
	scanf_s("%d %d %d", &h, &w, &d);

	if ((h<180 || h > 220)||(w<80||w>120)||(d<50||d>90)) { printf("нет"); }
	else {
		printf("Введите плотность ДСП, ДВП и дерева в кг/м3:\n");
		scanf_s("%d %d %d", &pdvp, &pdsp, &pd);

		m1 = (h * w * 0.5) / 1000000 * pdvp;
		m2 = (h * d * 1.5) / 1000000 * pdsp * 2;
		m3 = (w * d * 1.5) / 1000000 * pdsp * 2;
		m4 = (h * w * pd * 2) / 1000000;
		pieces = h / 40;
		m5 = (w * d * 1.5 * pdsp * pieces) / 1000000;

		//printf("%d %d %d %d %d\n", m1, m2, m3, m4, m5);
		printf("Масса шкафа: %d", m1 + m2 + m3 + m4 + m5);
	}
}
