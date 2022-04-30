/* FileName: T2_23.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Output maximum and minimum integers
 */
#include<iostream>
using namespace std;
int main(){
float a[5],b=-99999,c=99999;
for(int j=1;j<6;j++){
	cin>>a[j];
}
for(int i=1;i<6;i++){
	if(a[i]>b){
		b=a[i];
	}
	if(a[i]<c){
		c=a[i];
	}
}
cout<<"最大值为"<<b<<endl<<"最小值为"<<c; 
	


	return 0; 
}
