#pragma warning(disable:4996)
#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _node Node;
typedef struct _node
{
	char name[20];
	int nodecnt;
	Node* root;
}Node;

Node names[50010];
int name_cnt = 1;
int input_name(char* name);

Node* base1;
Node* base2;

int main(void)
{
	int repeat;
	int num;
	//freopen("C.dat", "r", stdin);
	//freopen("data.txt", "r", stdin);

	scanf("%d", &repeat);

	for (int i = 0; i < repeat; i++)
	{
		scanf("%d", &num);
		for (int j = 0; j < num; j++)
		{
			char tmp1[20], tmp2[20];
			int a, b;
			scanf("%s %s", tmp1, tmp2);

			a = input_name(tmp1);
			if (a == 0)
			{
				strcpy(names[name_cnt].name, tmp1);
				name_cnt++;
			}
			b = input_name(tmp2);
			if (b == 0)
			{
				strcpy(names[name_cnt].name, tmp2);
				name_cnt++;
			}

			if (a + b == 0) // 둘다 처음나온 name일때
			{
				Node* base = (Node *)malloc(sizeof(Node));
				names[name_cnt - 2].root = base; //a
				names[name_cnt - 1].root = base; //b
				(*base).nodecnt = 2;
				(*base).root = base;
				//printf("case1  ");
				printf("2\n");

			}
			else if (a == 0) //a만 처음일때
			{
				base1 = names[b].root;
				while ((*base1).root != base1)
				{
					base1 = (*base1).root;
				}
				names[name_cnt - 1].root = base1;
				names[b].root = base1;
				(*base1).nodecnt = (*base1).nodecnt + 1;
				//printf("case2  ");
				printf("%d\n", (*base1).nodecnt);
			}
			else if (b == 0) //b만 처음일때
			{
				base2 = names[a].root;
				while ((*base2).root != base2)
				{
					base2 = (*base2).root;
				}
				names[name_cnt - 1].root = base2;
				names[a].root = base2;
				(*base2).nodecnt = (*base2).nodecnt + 1;
				//printf("case3  ");
				printf("%d\n", (*base2).nodecnt);
			}
			else
			{
				base1 = names[a].root;
				base2 = names[b].root;

				while ((*base1).root != base1)
				{
					base1 = (*base1).root;
				}
				while ((*base2).root != base2)
				{
					base2 = (*base2).root;
				}
				if (base1 == base2) //같은 set에 있을때
				{
					//printf("case4  ");
					printf("%d\n", (*base1).nodecnt);
				}
				else // 서로 다른 set에 있을때
				{
					Node* top = (Node *)malloc(sizeof(Node));
					(*top).root = top;
					(*base1).root = top;
					(*base2).root = top;
						
					(*top).nodecnt = (*base1).nodecnt + (*base2).nodecnt;
						
					//printf("case5  ");
					printf("%d\n", (*top).nodecnt);
				}
			}
		}
		name_cnt = 1;
	}
}


int input_name(char* name) //이미 존재하는 이름이면 배열주소 리턴, 없으면 0리턴
{

	for (int i = name_cnt - 1; i >= 1; i--)
	{
		if (names[i].name[0] == name[0])
		{
			if (!strcmp(names[i].name, name))
			{
				return i;
			}
		}
	}
	return 0;
}
