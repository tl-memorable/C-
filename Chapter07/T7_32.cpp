/*
*FileName:   T7_32.cpp
*Author:     ���� 
*E-mail:     3273980776@qq.com
*Date:       2022.4.15
*College:    School of Computer Science and Information Engineering
*Function:   Ѱ��array�е���Сֵ��
*/
#include<iostream>
using namespace std;

int recursiveMinimum(int arr[], int i, int j)
{
	if (arr[i] < arr[i + 1])arr[i + 1] = arr[i];
	if (i + 1 == j)return arr[i + 1];
	return recursiveMinimum(arr, i + 1, j);
}

int main()
{
	int arr[8] = { 3,55,45,-9,90,34,56,-45 };
	cout << "Minimum: " << recursiveMinimum(arr, 0, 7);
	return 0;
}
