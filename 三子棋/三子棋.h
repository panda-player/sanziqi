#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include<string.h>
#include<stdlib.h>
#include<time.h>
//��ʼ������
void chushihua(char arr1[ROW][COL],int row ,int col);
//��ӡ����
void print(char arr1[ROW][ COL ],int row, int col);
//������������м��У�����д��char arr1.����ȥ��ʱ����д�����ǽ���ʱ����д
void player_move(char arr1[ROW][COL],int row,int col);
void computer_move(char arr1[ROW][COL],int row, int col);
int is_win(char arr1[ROW][COL],int row,int col);//������������Ҫд�弸�м���,
int is_full(char arr1[ROW][COL], int row, int col);
//д����ʱ������һ������������һ�����ܣ���Ҫ���ף����Ե�test.c����ȥ���ж�.���⣬��������˳����ڴ��������Ҳ�кܴ��Ӱ�죬��Ҫ�뵱Ȼ
//������������߼����ܣ�һ��һ�����衣