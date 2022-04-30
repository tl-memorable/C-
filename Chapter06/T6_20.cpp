/* FileName: T6_20.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Judge a multiple
 */
#include<iostream>
#include<cmath>
using namespace std;
int multiple(int a,int b){
	if(b%a==0||a%b==0){
		return 1;
	}
	else return 0;
} 


int main(){
int a,b;
cin>>a>>b;
if(multiple(a,b)==1){
	cout<<"ture";
}
else cout<<"false"; 



	
	 	return 0; 
}

