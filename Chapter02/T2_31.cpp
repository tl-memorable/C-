/* FileName: T2_31.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Body mass index calculator
 */
#include<iostream>
using namespace std;
int main(){
	double a,b,c,d,e,f,g;
	cout<<"输入每天开的总英里数"<<endl;
	cin>>a;
	cout<<"输入每加仑汽油的价格"<<endl;
	cin>>b;
	cout<<"输入每加仑汽油可以开的平均英里数"<<endl;
	cin>>c;
	cout<<"输入每日的停车费"<<endl;
	cin>>d; 
	cout<<"	输入每日的通行费" <<endl;
	cin>>e;
	f=(a/c)*b;
	g=f+d+e;
	cout<<"你每天开车的费用是"<<g;
	

 


	return 0; 
}

