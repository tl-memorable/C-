/* FileName: T5_20.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 27th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Look for the Pythagorean triad
 */
#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{ int a,b,c;
cout<<"毕达哥拉斯三元组为；";
for(int side1=1;side1<501;side1++){
	for(int side2=1;side2<501;side2++){
		for(int hypotenuse=1;hypotenuse<501;hypotenuse++){
	if(side1*side1+side2*side2==hypotenuse*hypotenuse){
	cout<<side1<<" "<<side2<<" "<<hypotenuse<<" "<<endl;
	}		
		}
	}
}


	
    return 0;
}
