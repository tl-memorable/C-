/* FileName: T5_19.cpp
 * Author:   Tao Lang
 * E-mail:   32739980776@qq.com 
 * Date:     Mar 27th, 2022
 * College:  School of Computer Science and Information Engineering
 * Function:Calculate an approximation of pi
 */
#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{ double a=1,pi=0;
for(int i=0;i<1000;i++){
	pi=pi+4*1.0/(powl(-1,i)*(2*a*1.0-1));
	a=a+1;
	cout<<pi<<endl;
}

	
    return 0;
}
