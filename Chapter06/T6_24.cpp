/* FileName: T6_4.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:The digital separation
 */
#include<iostream>
#include<cmath>
using namespace std;
int *seperate(int a){
	int *b=new int[4],c;
	c=a;
for(int i=1;c!=0;i++){
	b[i]=c%10;
	c=c/10;
}
	return b;
} 


int main(){
	int a,c,m=0;
	cin>>a;
	c=a;
	for(;c!=0;){
	c=c/10;
	m=m+1;
}
int	*b=seperate(a);
	for(int i=m;i>=1;i--){
		cout<<b[i]<<"  ";
	}
	



	
	 	return 0; 
}

