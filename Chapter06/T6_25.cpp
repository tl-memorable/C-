/* FileName: T6_25.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Number of seconds to calculate
 */
#include<iostream>
#include<cmath>
using namespace std;
int time(int a,int b,int c){
	int n;
	n=b*60+a*60*60+c;
	return n;
} 


int main(){
int a[3],b[3],sum;
for(int i=1;i<=3;i++){
	cin>>a[i];
}
for(int i=1;i<=3;i++){
	cin>>b[i];
}
sum=time(a[1],a[2],a[3])-time(b[1],b[2],b[3]);
if(sum<0){
	sum=-1*sum;
}
cout<<sum;
	
	 	return 0; 
}

