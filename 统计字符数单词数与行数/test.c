#include<stdio.h>
#include<Windows.h>

#define OUT 0//���ڵ�����
#define IN 1//�ڵ�����

int main()
{
	int state = OUT;
	int nc = 0;//�ַ���
	int nw = 0;//������
	int n1 = 0;//����
	char c;
	while ((c = getchar()) != EOF)
	{
		nc++;
		if (c == '\n')
		{
			n1++;
		}
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			nw++;
		}
	}
	printf("������%d\t��������%d\t�ַ�����%d\n", n1, nw, nc);
	system("pause");
	return 0;
}