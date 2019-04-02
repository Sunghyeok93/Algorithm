#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int N[100];

typedef struct stack{
	int* top;
	int size;
}Stack;

void init(Stack* stack){
	stack->top = NULL;
	stack->size = 0;
}

void push(Stack* stack, int num){
	N[stack->size] = num;
	stack->top = &N[stack->size];
	stack->size += 1;
}

bool pop(Stack* stack){
	if(stack->top == NULL)
		return false;
	else{
		stack->size -= 1;
		if(stack->size == 0)
			stack->top = NULL;
		else
			stack->top = &N[stack->size-1];
		return true;
	}
}

bool isEmpty(Stack* stack){
	if(stack->top == NULL){
		return true;	
	}
	else 
		return false;
}
int top(Stack* stack){
	if(isEmpty(stack))
		return -1;
	return N[stack->size-1];
}

int main(void){
	int N, num;
	char str[20];
	Stack stack;
	init(&stack);
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%s", str);

		if(strcmp(str, "push")==0){
			scanf("%d", &num);
			push(&stack, num);
		}
		else if(strcmp(str,"pop")==0){
			printf("%d\n", top(&stack));
			pop(&stack);
		}
		else if(str[0] == 't')
			printf("%d\n", top(&stack));
		else if(str[0] == 's')
			printf("%d\n", stack.size);
		else if(str[0] == 'e')
			printf("%d\n", isEmpty(&stack));
		else 
			printf("wrong set\n");
	
		memset(str, 0, sizeof(str));
	}
}
