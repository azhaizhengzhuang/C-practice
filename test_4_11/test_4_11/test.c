#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()// 一瓶汽水一元 两个空瓶换一瓶汽水 20元可以喝多少汽水(此题的脑洞在于剩一个空瓶的时候还能跟老板再借一个空瓶)
//{
//	//以次为单位
//	int swap = 0;//每次换的数量
//	int sum = 0;//总共喝的数量
//	int empty = 0;//每次空瓶数量
//	int stay = 0;//每次遗留的空瓶数量
//	printf("多少钱买汽水？\n");
//	scanf("%d", &swap);
//	do//模拟每一次各变量的数量变化
//	{
//		sum += swap;//把汽水喝掉
//		empty = swap + stay;//空瓶等于这次喝的汽水加上次剩的空瓶剩下的
//		swap = empty / 2;//空瓶模2即换到的汽水数量
//		stay = empty % 2;//空瓶除2即本次剩余的空瓶数量
//		//if (empty == 1)//当空瓶为1时 按照正常的换法是换不到的 但可以跟老板借个空瓶子再还回去
//		//{
//		//	sum++;//多喝一瓶
//		//	empty--;//把喝完的空瓶还给老板
//		//}
//	} while (empty >= 2);//准确的是39瓶 因为无法确定老板是否同意借瓶子
//	//}while (empty > 1);//还有空瓶说明还能换 继续循环
//	printf("\n亲，一共可以喝%d瓶汽水\n", sum);//
//	return 0;
//}

//int main()//思维训练：重构老师的汽水问题解法
//{
//	int money = 0;//买汽水的钱
//	int sum = 0;//喝的总量
//	int empty = 0;//剩下的空瓶数量
//	printf("多少钱买汽水？");
//	scanf("%d", &money);
//	sum = money;
//	empty = money;
//	while (empty >= 2)//空瓶大于等于两个 说明还能换汽水喝
//	{
//		sum += empty / 2;//两个空瓶换一个汽水 并喝掉
//		empty = empty / 2 + empty % 2;//empty更新
//	}
//	printf("\n可以喝：%d瓶\n", sum);
//	return 0;
//}