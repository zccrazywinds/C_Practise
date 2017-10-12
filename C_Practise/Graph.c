#include "Graph.h"

int visited[] = { 0, 0, 0, 0, 0 };
void CreatGraph(int n, VNode G[])
{
	int i, e;
	ArcNode *p, *q;
	q = NULL;
	printf("please inpur the information of vertex\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &G[i]);
		G[i].firstarc = NULL;
	}

	for ( i = 0; i < n; i++)
	{
		printf("Creat the edge for the %dth vertex\n", i);
		scanf("%d",&e);
		while (e!= -1)
		{
			p = (ArcNode *)malloc(sizeof(ArcNode));
			p->next = NULL;
			p->adjvex = e;
			if (G[i].firstarc == NULL)   G[i].firstarc = p;
			else
				q->next = p;
			q = p;
			scanf("%d", &e);
		}
	}

}

int FirstAdj(VNode G[], int v)
{
	if (G[v].firstarc != NULL)	return G[v].firstarc->adjvex;
	return -1;
}

int NextAdj(VNode G[], int v)
{
	ArcNode *p;
	p = G[v].firstarc;
	while (p != NULL)
	{
		if (visited[p->adjvex])  p = p->next;
		else
			return p->adjvex;
	}
	return -1;
}

int DFS(VNode G[], int v)
{
	int w;
	printf("%d", G[v]);
	visited[v] = 1;
	w = FirstAdj(G,  v);
	while (w != -1)
	{
		if(visited[w] == 0)
			DFS(G, w);
		w = NextAdj(G, v);
	}
	return 0;
}

