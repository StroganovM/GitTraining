#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
	float div;
	printf("������� ��� �����:");
	scanf_s("%d %d", &a, &b);
	if (a == 0 || b == 0) {
		printf("�� ���� ������ ������!\n");
	}
	else {
		div = a / b;
		printf("a/b= %.2f\n", div);
	}
	system("pause");
	return 0;
}