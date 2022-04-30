/* FileName: T4_34.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate factorials
 */
#include<iostream>
using namespace std;
double fac(int x)//factorial function
{
    int i,f = 1;
    for (i = 1;i<=x;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    double n,b,a,c;
    int d,e,x;
    double m = 1;
    double t = 1;
    cout << "input the x ";
    cin >> x;
    cout << "input the term " ;
    cin >> d;
    
   /* while(cin >> n)
      {
         cout << n << "! = " << fac(n)<<endl;
      }//(a)This is calculate factorial
  */
    /* while(cin >> a)
    {
        b=b+(1/fac(a));
        c = b+1;
        cout << c;
    }//(b)calculate e;(e = 1+1/1!+1/2!+...)
    */
     for(int i = 1;i<d;i++)
     {
         m = m*x;//1*x*x...
         double temp = fac(i);
         t = t + m/temp;//1+x/1!+...
     }//(c)Just to calculate the total of e^x.
     cout << "e^x" << ": " <<t << endl;//
     return 0;
}
