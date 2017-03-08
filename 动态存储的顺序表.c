#define _CRT_SECURE_NO_WARNINGS 1

#include<windows.h>
#include "seqlist.h"

void AddMalloc(PSeqListD pSeqList)						//�����ڴ�
{
	pSeqList->array = (int*)malloc(3*sizeof(DATATYPE));
	assert(pSeqList->array);
}

void InitSeqList(PSeqListD pSeqList)						//�����ڴ�
{
	assert(pSeqList);
	AddMalloc(pSeqList);
	pSeqList->size = 0;
	pSeqList->capacity = 3;
	memset(pSeqList->array,0,sizeof(DATATYPE)*pSeqList->capacity);
}

void PushBack(PSeqListD pSeqList, DATATYPE data)		//β��
{
	assert(pSeqList);
	if (pSeqList->size >= pSeqList->capacity)
	{
		DATATYPE* pTemp = (DATATYPE*)realloc(pSeqList->array,pSeqList->capacity*2);
		if (pTemp)
		{
			pSeqList->array = pTemp;
			pSeqList->capacity *= 2;
		}
	}
	pSeqList->array[pSeqList->size++] = data;
	
}

void PrintSeqList(PSeqListD pSeqList)					//��ӡ˳���
{
	int i = 0;
	for (i = 0;i<pSeqList->size;i++)
	{
		printf("%d ",pSeqList->array[i]);
	}
	printf("\n");
}