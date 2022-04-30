/* FileName: T4_37.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:The problem of world population growth
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b;

    cin >> b;
    cin >> a;
    double c = a;
    for(int i=1;i<=75;++i)
    {

        cout << i <<"\t" << c*(1+b)<<"\t"<<c*0.5<<endl;
        c = c*(1+b);
    }
    return 0;
}
