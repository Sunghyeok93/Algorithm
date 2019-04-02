#include <iostream>

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
	Stack stack;
	init(&stack);
	
	push(&stack, 10);
	push(&stack, 20);
	
	printf("%d\n", top(&stack));

	pop(&stack);
	printf("%d\n", top(&stack));
	pop(&stack);
	printf("%d\n", top(&stack));
}
