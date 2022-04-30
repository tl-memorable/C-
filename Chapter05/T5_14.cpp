/* FileName: T5_14.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 26th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate the total sales
 */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{ int a;
double b,c,num=0;
while(1){
cin>>a;
if(99999==a){break;//标记值为99999 
}
switch(a){
case 1:b=2.98;break;
case 2:b=4.50;break;
case 3:b=9.98;break;
case 4:b=4.49;break;
case 5:b=6.87;break;
}
cin>>c;
num=1.0*num+c*1.0*b*1.0;
cout<<"num="<<num<<endl;
}


	
    return 0;
}
