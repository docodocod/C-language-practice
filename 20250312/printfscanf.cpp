#include <stdio.h>

int main(void) {
	char name[256];
	printf("�̸��� ������? : ");
	scanf_s("%s", name, (unsigned int)sizeof(name));

	int age;
	printf("���̰� ��F�� �ſ�? : ");
	scanf_s("%d", &age);

	int weight;
	printf("�����԰� ��� �ſ�?: ");
	scanf_s("%d", &weight);

	int height;
	printf("Ű�� ��� �ſ�?: ");
	scanf_s("%d", &height);

	printf("�̸� : %s \n", name);
	printf("���� : %d \n",age);
	printf("������ : %d \n", weight);
	printf("Ű : %d \n", height);

	return 0;
}