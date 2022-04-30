/* FileName: T6_32.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:    April 9th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Grade point of achievement
 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int qualityPoints(int a){
	if(a>90&&a<100){return 4;
	}
	else if(a>80&&a<90){return 3;
	}
	else if(a>70&&a<80){return 2;
	}
	else if(a>60&&a<70){return 1;
	}
	else if(a<60){return 0;
	}
	
} 


int main(){
	int a;
	cin>>a;
	cout<<qualityPoints(a);
		
	
	


	
	 	return 0; 
}

