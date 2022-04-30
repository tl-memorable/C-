/* FileName: T2_28.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Find the numbers on the whole number
 */
#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,f;
cin>>a;
b=a/10000;
c=(a-b*10000)/1000;
d=(a-b*10000-c*1000)/100;
e=(a-b*10000-c*1000-d*100)/10;
f=(a-b*10000-c*1000-d*100-e*10);
cout<<b<<"  "<<c<<"  "<<d<<"  "<<e<<"  "<<f;
 


	return 0; 
}

