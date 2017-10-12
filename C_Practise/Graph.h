#pragma once
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX_NUM		20
typedef struct {
	int adjvex;
	struct ArcNode	*next;

}ArcNode;

typedef struct {
	int	data;
	ArcNode    *firstarc;
}VNode;

VNode G[MAX_VERTEX_NUM];

void   CreatGraph(int n,  VNode G[]);
/*寻找第一条边*/
int FirstAdj(VNode G[],  int v);
/*寻找下一条边*/
int NextAdj(VNode G[], int v);

int DFS(VNode G[], int v);