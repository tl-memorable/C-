/* FileName: T6_36.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Recursive exponentiation
 */
#include<iostream>
using namespace std;
int power(int base, int exponent);
int main()
{
	int a,b;
	cin >> a >> b;
	cout << "result = " << power(a, b) << endl;;
}
int power(int base, int exponent) 
{
	if (0==exponent ) 
	{ 
		return 1; 
	}

	return base * power(base, exponent - 1);
}
