/* FileName: T6_29.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:A prime number
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int sushu(int a){
	int b=0,c=0;
	
	for(int i=2;i<a;i++){
		if(a%i==0){
		c=c+1;}
	}
if(c>0){return 0;
}
else return a;
} 


int main(){
	for(int i=1;i<=10000;i++){
		if(sushu(i)!=0)
		cout<<sushu(i)<<endl;
	}
		
	
	


	
	 	return 0; 
}

