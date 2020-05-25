//priority_queue.h
#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//#include "queue.c"
#define N 55
typedef struct node { // priority_queue ��ÿ����Ķ���
	int v, g, h;      // v:����  g:src->v  h:v->des
	queue path;       // q:src->v �� path
} node;

typedef struct priority_queue {
	node data[N * N * 200];
	int size;
} priority_queue;

void pq_init(priority_queue* q);
int pq_size(priority_queue *q);
int pq_cmp(node a, node b);
//void swap(node *x, node *y);
void pq_push(priority_queue *q, node val);
node pq_pop(priority_queue *q);
#endif

