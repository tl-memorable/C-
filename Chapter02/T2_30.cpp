/* FileName: T2_30.cpp
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
	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight:less than 18.5"<<endl;
	cout<<"between 25 and 29.9"<<endl;
	cout<<"Obese:30 or greater";
	cout<<"	�԰�Ϊ��λ������1���԰�Ϊ��λ������2" ;
	cin>>a;
	if(1==a){
		cout<<"��������"<<endl;
		cin>>b;
		cout<<"�������"<<endl; 
		cin>>c;
		d=(1.0*b*703)/1.0*(c*1.0*c) ;
		cout<<"���BMI��"<<d<<endl; 
	} 
	if(2==a){
			cout<<"��������"<<endl;
		cin>>e;
		cout<<"�������"<<endl; 
		cin>>f;
		g=(1.0*e)/(1.0*f*1.0*f) ;
		cout<<"���BMI��"<<g<<endl; 
	}
 


	return 0; 
}

