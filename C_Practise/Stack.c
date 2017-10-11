#include "Stack.h"

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

int BinToDec()
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
