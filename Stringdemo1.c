//#include<stdio.h>
//int main()
//{
//	////利用数组+双引号定义字符串
//	// 2.数组的长度要么不写，如果写的话，记得要把结束标记的空间预留出来
//	//3.字符数组+双引号的方式定义字符串，内容是可以改变的
//	//char tar[5] = "abcd";
//	//printf("%s\n",tar);
//	//tar[0] = 'A';
//	//printf("%s\n",tar);
//
//
//
//	//利用指针+双引号定义字符串,会把底层的字符放在只读常量区
//	//只读常量区特点：
//	//1.内容不可以修改
//	//2.里面的字符串是可以复用的
//	//在创建新的abcd时，会检查只读常量区里有没有abcd
//	// 如果没有才会创建新的，如果已经有了，不会创建新的，而是进行复用
//	char* tar1 = "abcd";
//	char* tar2 = "abcd";
//	printf("%p\n", tar1);
//	printf("%p", tar2);
//
//
//
//}

//给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出 no。
//
//输入格式
//一个字符串，长度小于 1100。
//
//输出格式
//输出第一个仅出现一次的字符，若没有则输出 no
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char arr[1100];
//	scanf("%s",arr);
//	int len = strlen(arr);
//	for (int i=0;i<len;i++)
//	{
//		int count = 0;
//		for (int k=0;k<len;k++)
//		{
//			if (arr[i]==arr[k])
//			{
//				count++;
//			}
//		}
//		if (count==1)
//		{
//			printf("%c",arr[i]);
//			return 0;
//		}
//
//	}
//	printf("no");
//
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//	{
//	char arr[1100];
//	fgets(arr,1100,stdin);
//	int len = strlen(arr);
//	for (int i=0;i<len;i++)
//	{
//		int count = 0;
//		for (int k=0;k<len;k++)
//		{
//			if (arr[i]==arr[k])
//			{
//				count++;
//			}
//		}
//		if (count==1)
//		{
//			printf("%c",arr[i]);
//		}
//	}
//	printf("no");
//	}
//第一行是一个整数 N，表示一共进行了 N 次游戏。1≤N≤100。
//
//接下来 N 行的每一行包括两个字符串，表示游戏参与者 Player1，Player2 的选择（石头、剪子或者是布）： S1, S2
//
//字符串之间以空格隔开 S1 S2 只可能取值在 Rock, Scissors, Paper(大小写敏感）中。
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//分析：把第一个玩家赢的所有情况列出来
//	//1.定义次数
//	int count;
//	scanf("%d",&count);
//	//2.定义两个字符串
//	char S1[10];
//	char S2[10];
//	//3.利用循环说明所有情况
//	for (int i=0;i<count;i++)
//	{
//		scanf("%s",S1);
//		scanf("%s", S2);
//		if (strcmp(S1, "Rock")==0 && strcmp(S2, "Scissors")==0 ||
//			strcmp(S1, "Paper")==0 && strcmp(S2, "Rock") == 0 ||
//			strcmp(S1, "Scissors")==0 && strcmp(S2, "Paper")==0)
//			printf("Player1\n");
//		else if (strcmp(S1, "Rock")==0 && strcmp(S2, "Rock")==0 ||
//			strcmp(S1, "Paper")==0 && strcmp(S2, "Paper")==0 ||
//			strcmp(S1, "Scissors")==0 && strcmp(S2, "Scissors")==0)
//			printf("Tie\n");
//		else
//			printf("Player2");
//	}
//
//}
#include<stdio.h>
#include<string.h>

int main()
{
	//分析：把第一个玩家赢的所有情况列出来
	//1.定义次数
	int count;
	scanf("%d", &count);
	//2.定义两个字符串
	char S1[10];
	char S2[10];
	//3.利用循环说明所有情况
	for (int i = 0; i < count; i++)
	{
		scanf("%s", S1);
		scanf("%s", S2);
		if (strcmp(S1, "Rock") == 0 && strcmp(S2, "Scissors") == 0 ||
			strcmp(S1, "Paper") == 0 && strcmp(S2, "Rock") == 0 ||
			strcmp(S1, "Scissors") == 0 && strcmp(S2, "Paper") == 0)
			printf("Player1\n");
		else if (strcmp(S1,S2)==0)
			printf("Tie\n");
		else
			printf("Player2");
	}

}