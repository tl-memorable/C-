/*
*FileName:   T7_34.cpp
*Author:     ����
*E-mail:     3273980776@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   ��������Թ���
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char arr[12][12];

void mazeGenerator()//����������꣬��������ͬ�ϲ��䡣
{
	int f;
	srand(time(NULL));
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			f = rand() % 2;
			if (f)
			{
				arr[i][j] = '.';
			}
			else { arr[i][j] = '#'; }
		}
	}
	arr[2][0] = '.', arr[4][11] = '.';
}

int f = 0;
void print()
{

	if ('x' == arr[4][11])f++;
	if (f > 1)return;
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void test(int x,int y)
{
	if (x < 0 || x>11 || y < 0 || y>11)return;
	if ('#' == arr[x][y])return;
	if (11 == y&&4==x)
	{
		arr[x][y] = 'x';
		print( );
		return;
	}
	if ('.' == arr[x][y])
	{
		arr[x][y] = 'x';
		print( );
		test(x+1,y );
		test(x,y + 1 );
		test( x,y - 1 );
		test(x - 1, y );
	}
}

int main()
{
	mazeGenerator();
	print( );
	int x=2, y=0;
	test(x, y);
	if ('.' == arr[4][11]) { cout << "�Թ��޽⣡" << endl; }
	return 0;
}
