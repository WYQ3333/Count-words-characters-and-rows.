#include<stdio.h>
#include<Windows.h>

#define OUT 0//不在单词中
#define IN 1//在单词中

int main()
{
	int state = OUT;
	int nc = 0;//字符数
	int nw = 0;//单词数
	int n1 = 0;//行数
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
	printf("行数：%d\t单词数：%d\t字符数：%d\n", n1, nw, nc);
	system("pause");
	return 0;
}