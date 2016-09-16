#define _CRT_SECURE_NO_WARNINGS 1

#include<windows.h>
#include <assert.h>
#include <stdio.h>
#include <math.h>

#define MAXSIZE 10
typedef int DATATYPE;

typedef struct SeqList
{
	DATATYPE array[MAXSIZE];
	DATATYPE size;
}SeqList,*PSeqList;

void InitSeqList(PSeqList pSeqList);					//��ʼ��˳���
void PushBack(PSeqList pSeqList, DATATYPE data);		//β��
void PopBack(PSeqList pSeqList);						//βɾ
void PushFront(PSeqList pSeqList, DATATYPE data);		//ͷ��
void PopFront(PSeqList pSeqList);						//ͷɾ
void Insert(PSeqList pSeqList, int pos, DATATYPE data);	//����
void Erase(PSeqList pSeqList, int pos);					//ɾ��ĳһ����
int Find(PSeqList pSeqList, DATATYPE data);				//����
void Remove(PSeqList pSeqList, DATATYPE data);			//ɾ��һ����
void RemoveAll(PSeqList pSeqList, DATATYPE data);		//ɾ��ѡ�����
void BubbleSort(PSeqList pSeqList);						//ð������
void SelectSort(PSeqList pSeqList);						//ѡ������
int BinarySearch(PSeqList pSeqList, DATATYPE data);	//���ֲ���
int Empty(PSeqList pSeqList);							//�ж��Ƿ�Ϊ��
void PrintSeqList(PSeqList pSeqList);					//��ӡ˳���


