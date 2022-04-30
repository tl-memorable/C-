/* FileName: T2_19.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Arithmetic operation between three nubmers
 */
#include<iostream>
using namespace std;
int main(){
int a[3],b=-99999,c=99999;
cin>>a[1];
cin>>a[2];
cin>>a[3];
for(int i=1;i<4;i++){
if(a[i]>b)	
b=a[i];
}	
for(int i=1;i<4;i++){
if(a[i]<c)	
c=a[i];
}
cout<<"input three different integers: "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
cout<<"Sum is "<<a[1]+a[2]+a[3]<<endl;
cout<<"Average is "<<(a[1]+a[2]+a[3])/3<<endl;
cout<<"Product is "<<a[1]*a[2]*a[3]<<endl;
cout<<"Smallest is "<<c<<endl;
cout<<"Largest is "<<b<<endl;
	return 0; 
}
