/*
*FileName:   T8_15.cpp
*Author:     ���� 
*E-mail:     3273980776@qq.com
*Date:       2022.4.20
*College:    School of Computer Science and Information Engineering
*Function:   �������Ա��ģ�⡣
*/
#include<iostream>
using namespace std;

int arr[100] = { 0 };
int h, l;//�߶�λ��ָ��  ����λ����ַ
int ad=0;//�ۼ���

	

void sml()
{
	int num = 0;
	for (int i = 0; i < 100; ++i)
	{
		h = arr[i] / 100;
		l = arr[i] % 100;
		//read
		
			if (10 == h)
			{
				cout << "���������֣� " << endl;
				cin >> num;
				arr[l] = num;
			}
			//write
			else if (11 == h)
			{
				cout << arr[l] << endl;
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
				ad /= arr[l];
			}
			//multiply
			else if (33 == h)
			{
				ad *= arr[l];
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
		
	}
}

int main()
{
	while (1)
	{
		cout << "��ѡ�� 1.����a   2.����b   3.����c   0:�˳�" << endl;
		int s;
		cin >> s;
		if (0 == s)break;
		else if (1 == s)
		{
			arr[0] = 1050;//�������� �����ַ50
			arr[1] = 4450;//�Ǹ�����ֹ
			arr[2] = 3050;//�����ۼ������
			arr[3] = 2150;//�ۼ����������50��
			arr[4] = 1150;//��ӡ��
			arr[5] = 4000;//ѭ��
			sml( );
			
		}
		else if (2 == s)
		{
			
			cout << "������������м����� " << endl;
			cin >> arr[60];
			arr[62] = arr[60];
			arr[0] = 2050;//50�����ۼ���
			arr[1] = 1050;//50��������
			arr[2] = 3050;//50�����ۼ������
			arr[3] = 2150;//��Ӻ����50
			arr[61] = 1;//�ݼ���
			arr[4] = 2060;//60�����ۼ���
			arr[5] = 3161;//�ݼ�
			arr[6] = 2160;//�ݼ����ֵ����60
			arr[7] = 4209;//�ۼ���Ϊ0ת��09
			arr[8] = 4000;//ѭ��
			arr[9] = 2050;//��ƽ��ֵ
			arr[10] = 3262;
			arr[11] = 2150;//ƽ��ֵ����50
			arr[12] = 1150;//��ӡƽ����
			arr[13] = 4300;//��ֹ
			sml();
		}
		else if (3 == s)
		{
			cout << "һ���ж��ٸ����֣� " << endl;
			cin >> arr[60];
			arr[61] = 1;
			arr[0] = 2060;//60�����ۼ���
			arr[1] = 4212;//�ۼ���Ϊ0 ת��12
			arr[2] = 1050;//�������ַ���50��
			arr[51] = arr[50];//51 ���ֵ
			arr[3] = 2060;//60�����ۼ���
			arr[4] = 3161;//�ݼ�
			arr[5] = 2160;//�ݼ����ֵ����60
			arr[6] = 2051;//51�����ۼ���
			arr[7] = 3150;//�������ֵ
			arr[8] = 4109;
			arr[9] = 2050;
			arr[10] = 2151;
			arr[11] = 4000;
			arr[12] = 1151;//��ӡ���ֵ
			arr[13] = 4300;
			sml();
		}
	}
	return 0;
}
