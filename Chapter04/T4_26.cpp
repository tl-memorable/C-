/* FileName: T4_26.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 15th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Determine the number of palindromes
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int a,b,c,d=0;
cin>>a;
b=a;
while(a!=0){
	c=a%10;
	a=a/10;
	d=d*10+c;
}
if(d=b){
	cout<<"这是一个回文数"<<endl;
}

	
	
	
	 	return 0; 
}
