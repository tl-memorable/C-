/* FileName: T6_30.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Digital reverse
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int fanxiang(int a){
	int b=a,c=0,d;
	while(b!=0){
		d=b%10;
		b=b/10;
		c=d+c*10;
	}
	return c;
} 


int main(){
	int a;
	cin>>a;
	cout<<fanxiang(a);
		
	
	


	
	 	return 0; 
}

