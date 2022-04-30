/* FileName: T6_33.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Flip a coin
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int coin(int a){
	int b;
b=rand();
if(b%2==0){return 0;
}
else return 1;
	
} 


int main(){
	int sum=0;
for(int i=1;i<=100;i++){
cout<<coin(i)<<endl;
if(coin(i)==0)sum++;	
}

	
	


	
	 	return 0; 
}

