/* FileName: T2_21.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 5th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Diameter, circumference and area of a circle
 */
#include<iostream>
using namespace std;
int main(){
	char s[17][9] ;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i==1||i==9){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i!=1&&i!=9&&j==1||j==9){
					s[i][j]='*';
			cout<<s[i][j];
			}
	
			else{
			 s[i][j]=' ';
			cout<<s[i][j];}
		}
		cout<<endl;
	}
	
		for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i==1&&j<7&&j>3||i==9&&j<7&&j>3){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==2&&j==2||i==2&&j==8||i==8&&j==2||i==8&&j==8){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i<8&&i>2&&j==1||i<8&&i>2&&j==9){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
	
			else{
			 s[i][j]=' ';
			cout<<s[i][j];}
		}
		cout<<endl;
	}
		for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i==1&&j==5||i<10&&i>3&&j==5){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==2&&j>3&&j<7){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==3&&j<8&&j>2){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
	
			else{
			 s[i][j]=' ';
			cout<<s[i][j];}
		}
		cout<<endl;
	}
		for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(i==1&&j==5||i==9&&j==5){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==2&&j==4||i==2&&j==6||i==8&&j==4||i==8&&j==6){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==3&&j==3||i==3&&j==7||i==7&&j==3||i==7&&j==7){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==4&&j==2||i==6&&j==2||i==4&&j==8||i==6&&j==8){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
			else if(i==5&&j==1||i==5&&j==9){
			
			s[i][j]='*';
			cout<<s[i][j];
			}
	
			else{
			 s[i][j]=' ';
			cout<<s[i][j];}
		}
		cout<<endl;
	}
	


	return 0; 
}
