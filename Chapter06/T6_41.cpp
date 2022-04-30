/* FileName: T6_41.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:
 */
#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
	return 0;
}

	int gcd(int x, int y) 
{
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}



