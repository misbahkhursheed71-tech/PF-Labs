//calculating distance
#include<iostream>
using namespace std;
int main(){
	//initialize coordinates
	int x1=3,y1=4;
	int x2=6,y2=8;
	//calculate squared distance
	int squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	//display result
	cout<<"The squared distance between the points(3, 4) and (6, 8) is: "<<squared_distance<<endl;
	return 0;
}
