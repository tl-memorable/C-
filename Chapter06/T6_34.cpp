/* FileName: T6_34.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Number game
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
using namespace std;



int main(){
	int a;
	char b;
	cout<<"I have a number between 1 and 1000"<<endl;
	cout<<"Can you guess my number?"<<endl;
	cout<<"Please type your first guess"<<endl;
	 while(1){
		cin>>a;
		if(a>14){
			cout<<"Too high.Try again"<<endl;
		}
		if(a<14){
			cout<<"Too low.Try again"<<endl;
		}
		if(a==14){
			cout<<"Excellent!You guessed the number!"<<endl;
			cout<<"Would you like to play again(y or n)?"<<endl;
			cin>>b;
			if (b=='n'){
			break;}
			else continue;
		}
		
	}
	


	
	 	return 0; 
}

