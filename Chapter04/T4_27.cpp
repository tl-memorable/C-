/* FileName: T4_27.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Prints the decimal value of the binary number
 */
#include<iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c=1,d,e=0,n=0;
cin>>a;
b=a;
while(b!=0){
	c=b%10;
	b=b/10;
	d=powl(2,n);
	n=n+1;
	e=c*d+e;
}
cout<<e<<endl;

	
	
	
	 	return 0; 
}
