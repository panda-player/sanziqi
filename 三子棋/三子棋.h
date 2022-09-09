#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#define ROW 3
#define COL 3
#include<string.h>
#include<stdlib.h>
#include<time.h>
//初始化棋盘
void chushihua(char arr1[ROW][COL],int row ,int col);
//打印棋盘
void print(char arr1[ROW][ COL ],int row, int col);
//必须告诉他几行几列，不能写成char arr1.传过去的时候不用写，但是接受时必须写
void player_move(char arr1[ROW][COL],int row,int col);
void computer_move(char arr1[ROW][COL],int row, int col);
int is_win(char arr1[ROW][COL],int row,int col);//传过来的数组要写清几行几列,
int is_full(char arr1[ROW][COL], int row, int col);
//写函数时，尽量一个函数，负责一个功能，不要混套，可以到test.c里面去再判断.另外，函数排列顺序对于代码的运行也有很大的影响，不要想当然
//，计算机就是逻辑严密，一步一个步骤。