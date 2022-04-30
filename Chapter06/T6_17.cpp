/* FileName: T6_17.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Random number
 */
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<ctime>
using namespace std;

int random(int a[4]){
	int n=0,m;
	srand((unsigned)time(NULL)) ;
	n=rand()%5;
	for(int i=0;i<5;i++){
		m=a[n];
	}
	
	return m;


}

int main(){
	int i,b[4];
	for(int i=0;i<5;i++){
cin>>b[i];
	}
	while(1){
	cin.get();
	cout<<random(b);
	
}


	
	 	return 0; 
}

