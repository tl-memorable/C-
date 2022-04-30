/* FileName: T6_18.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Exponentiation computation
 */
#include<iostream>
using namespace std;


int integerPower(int a,int b){
	int x=1;
	for(int i=1;i<=b;i++){
		x=x*a;
	}
	return x;
} 

int main(){
int a,b;
cin>>a>>b;
cout<<integerPower(a,b);

	
	 	return 0; 
}

