/* FileName: T5_16.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 26th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Another expression of compound interest calculations
 */
#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{ 
int a;
int amount;
double principal=1000.0;
double rate=0.05;
cout<<"Year"<<setw(21)<<"Amount on deposit "<<endl;
cout<<fixed<<setprecision(2);
for(unsigned int year=1;year<=10;++year){
	amount=principal*100*pow(1.0+rate,year);
	a=amount%100;
	amount=amount/100;
	cout<<setw(4)<<year<<setw(21)<<amount<<"."<<a<<endl;
}





	
    return 0;
}
