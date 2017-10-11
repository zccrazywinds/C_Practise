#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define STACK_SIZE 100
#define STACK_INCRE_SIZE 10
typedef char  ElemyType;

typedef struct {
	ElemyType * top;
	ElemyType * base;
	ElemyType stacksize;
}stack;

void init(stack * s);
void push(stack * s, ElemyType e);
void pop(stack * s, ElemyType *e);
int  StackLen(stack * s);

int main()
{
	ElemyType e;
	stack st;
	int len = 0;
	int result = 0;
	printf("input, # exit \n");
	init(&st);
	e = getchar();
	while (e != '#')
	{
		push(&st, e);
		e = getchar();
	}
	getchar();
	len = StackLen(&st);
	for (int i = 0; i < len; i++)
	{
		pop(&st, &e);

		result = (e - 48) * pow(2, i) + result;
	}
	printf("result %d\n", result);

	getchar();

	return 0;
}

void init(stack * s)
{
	s->base = (ElemyType *)malloc(sizeof(ElemyType) * STACK_SIZE);
	if (!s->base) exit(0);
	s->top = s->base;
	s->stacksize = STACK_SIZE;
}
void push(stack * s, ElemyType e)
{
	if (s->top - s->base >= s->stacksize)
	{
		s->base = (ElemyType *)realloc(s->base, sizeof(ElemyType) *(s->stacksize + STACK_INCRE_SIZE));
		if (!s->base) exit(0);
		s->top = s->base + s->stacksize;
		s->stacksize = s->stacksize + STACK_INCRE_SIZE;
	}
	*s->top = e;
	s->top++;
}

void pop(stack * s, ElemyType *e)
{
	if (s->base == s->top)
		return;
	*e = *--(s->top);
}

int StackLen(stack * s)
{
	return s->top - s->base;
}