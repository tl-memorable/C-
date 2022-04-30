/*
*FileName:   T7_31.cpp
*Author:     ÌÕÀÊ
*E-mail:     3273980776@qq.com
*Date:       2022.4.15
*College:    School of Computer Science and Information Engineering
*Function:   ÄæĞò´òÓ¡×Ö·û´®¡£
*/
#include<iostream>
using namespace std;

void stringReverse(string a,int len)
{
	cout << a[len - 1];
	if (0 == len - 1)return;
	return stringReverse(a, len - 1);
}

int main()
{
	string A = "abcdef";
	int len = 6;
	stringReverse(A, len);
	return 0;
}
