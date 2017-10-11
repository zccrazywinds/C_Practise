#pragma once
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
int BinToDec();
