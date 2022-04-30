/* FileName: T6_22.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:A square pattern of asterisks
 */
#include<iostream>
#include<cmath>
using namespace std;
int side(int a){
	return a;
} 


int main(){
	int a;
cin>>a;
for(int i=1;i<=side(a);i++){
for(int j=1;j<=side(a);j++){
	cout<<"*";
}
cout<<endl;
}


	
	 	return 0; 
}

