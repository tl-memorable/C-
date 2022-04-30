/* FileName: T5_11.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 26th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the compound interest amount
 */
#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{ 
double amount;
double principal=1000.0;
cout<<"Year"<<setw(21)<<"Amount on deposit "<<endl;
cout<<fixed<<setprecision(2);
for(unsigned int year=1;year<=10;++year){
for(double rate=0.05;rate<0.11;rate=rate+0.01){

	amount=principal*pow(1.0+rate,year);
	cout<<setw(4)<<year<<setw(21)<<amount<<endl;
}}





	
    return 0;
}
