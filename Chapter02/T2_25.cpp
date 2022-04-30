/* FileName: T2_25.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Determine the multiple of two numbers, G
 */
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a;
cin>>b;
if(a%b==0){
	cout<<a<<"是"<<b<<"的倍数"; 
}
else cout<<a<<"不是"<<b<<"的倍数"; 
	return 0; 
}

