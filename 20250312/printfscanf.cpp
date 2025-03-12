#include <stdio.h>

int main(void) {
	char name[256];
	printf("이름이 뭐에요? : ");
	scanf_s("%s", name, (unsigned int)sizeof(name));

	int age;
	printf("나이가 어덯게 돼요? : ");
	scanf_s("%d", &age);

	int weight;
	printf("몸무게가 어떻게 돼요?: ");
	scanf_s("%d", &weight);

	int height;
	printf("키가 어떻게 돼요?: ");
	scanf_s("%d", &height);

	printf("이름 : %s \n", name);
	printf("나이 : %d \n",age);
	printf("몸무게 : %d \n", weight);
	printf("키 : %d \n", height);

	return 0;
}