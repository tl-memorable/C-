/*
*FileName:   T8_17.cpp
*Author:     ���� 
*E-mail:     3273980776@qq.com
*Date:       2022.4.22
*College:    School of Computer Science and Information Engineering
*Function:   �����ģ�����Ľ��档
*/
#include<iostream>
using namespace std;
int arr[1000] = { 0 };
int h, l;//�߶�λ��ָ��  ����λ����ַ
int ad = 0;//�ۼ���
void sml()
{

	int num = 0, f = 0;
	for (int i = 0; i < 100; ++i)
	{
		h = arr[i] / 100;
		l = arr[i] % 100;
		//read
		if (10 == h)
		{
			cout << "���������֣� " << endl;
			while (1)
			{
				if (num >= -9999 && num <= 9999)break;
				else cout << "�����������������룺��" << endl;
			}
			arr[l] = num;
		}
		//write
		else if (11 == h)
		{
			cout << arr[l] << endl;
		}
		//���з�
		else if (12 == h)
		{
			cout << endl;
		}
		//load
		else if (20 == h)
		{
			ad = arr[l];
		}
		//store
		else if (21 == h)
		{
			arr[l] = ad;
		}
		//add
		else if (30 == h)
		{
			ad += arr[l];
		}
		//subtract
		else if (31 == h)
		{
			ad -= arr[l];
		}
		//divide
		else if (32 == h)
		{
			if (0 == arr[l])
			{
				cout << "����������Ϊ0������" << endl;
				break;
			}
			else ad /= arr[l];
		}
		//multiply
		else if (33 == h)
		{
			ad *= arr[l];
		}
		//��ģ����    �ۼ���Ϊ������arr��l��Ϊ����������ģ������ۼ���
		else if (34 == h)
		{
			ad = ad - (ad / arr[l]) * arr[l];
		}
		//��������    �ۼ���Ϊ������arr��l��Ϊ�ݣ���ģ������ۼ���
		else if (35 == h)
		{
			int ad1 = ad;
			for (int i = 0; i < arr[l]; ++i)
			{
				ad *= ad1;
			}
		}
		//branch
		else if (40 == h)
		{
			i = l - 1;
		}
		//branchneg
		else if (41 == h)
		{
			if (ad < 0)i = l - 1;
		}
		//branchzero
		else if (42 == h)
		{
			if (0 == ad)i = l - 1;
		}
		//halt
		else if (43 == h)
		{
			break;
		}
		//�ж����Ƿ�Ϊ�������Ǹ�������
		else if (44 == h)
		{
			if (num < 0) { cout << "���븺������ֹ������" << endl; break; }
		}
		if (ad < -9999 || ad>9999)cout << "�ۼ��������������" << endl;
	}
}

int main()
{
	cout << R"(***	 Welcome to Simpletron!  ***
***  Please enter your program one instrution  ***
***  (or date word)at a time. I will tupe the  ***
***  location number and a question mark(?).   ***
***  You then type the word for that location. ***
***  Type the sential -99999 to stop entering  ***
***  your program.  ***
)" << endl;
	int c;
	for (int i = 0; i < 1000; ++i)
	{
		if (i < 10)cout << "0";
		cout << i << " ?";
		cin >> c;
		if (-99999 == c)break;
		arr[i] = c;

	}
	cout << "***  Program loading completed  ***" << endl;
	cout << "***  Program execution begains  ***" << endl;
	sml();
	return 0;
}
