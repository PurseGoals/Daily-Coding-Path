#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//创建结构体
struct Spot {
	char name;
	int cord;
};
int main()
{
	//输入四个景点
	struct Spot arr[4] = {{'A',0},{'B',0},{'C',0},{'D',0}};
	for (int i=0;i<4;i++)
	{
		printf("%c%d\n",arr[i].name,arr[i].cord);
	}
	//种子
	srand(time(NULL));
	for (int i=0;i<80;i++)
	{
		int num=rand() % 4;
		arr[num].cord++;
	}
	int max = arr[0].cord;
	for (int i=1;i<4;i++)
	{
		if (arr[i].cord>=max)
		{
			max = arr[i].cord;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%c%d\n", arr[i].name, arr[i].cord);
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i].cord >= max)
		{
			printf("%c", arr[i].name);
			break;
		}

	}


}
/*
//	某班级组织野外郊游，想要在ABCD四个景点选择其中一个
//	现在班上有80名学生进行投票，找出票数最多的景点
//
//
//	PS：1.学生投票用随机数模拟
//	    2.如果多个景点投票的话，A优先B，B优先C，C优先D
//	*/
//