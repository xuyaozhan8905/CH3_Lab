#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int odd(int u);
int even(int u);
int totalsum(int u);

int main(void) {
	int n, sum;
	char addchoice;
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п�ܡG");
	scanf_s("%c",&addchoice);
	switch (addchoice)
	{
	case 'O':
		printf("1+2+...+n=?�п�Jn= ");
		scanf_s("%d", &n);
		sum = odd(n);
		break;
	case 'E':
		printf("1+2+...+n=?�п�Jn= ");
		scanf_s("%d", &n);
		sum = even(n);
		break;
	case 'I':
		printf("1+2+...+n=?�п�Jn= ");
		scanf_s("%d", &n);
		sum = totalsum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return 0;
	}
	printf("�`�X��%d\n",sum);
	system("pause");
	return 0;
}
int odd(int u){
	int i, total = 0;
	for (i = 1; i <= u;i++) 
		if (i % 2 == 1)
			total=total+i;
	return total;
}
int even(int u) {
	int i, total = 0;
	for (i = 1; i <= u;i++) 
		if (i % 2 == 0)
			total =total+ i;
	return total;
}
int totalsum(int u) {
	return odd(u) + even(u);
}

