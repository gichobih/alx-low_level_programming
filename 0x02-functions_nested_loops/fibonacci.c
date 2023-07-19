#include <stdio.h>

int main(void)
{
	int num1 = 1;
	int num2 = 2;

	printf"%d\n%d\n",num1,num2);
	for (int i = 3;i < 98; i++){
		int nextNum= num1 + num2;
		printf("%d\n",nextNum);

		num1=num2;
		num2=nextNum;
	}
	return 0;
}
