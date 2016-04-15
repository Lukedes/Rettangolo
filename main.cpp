#include <iostream>
using namespace std;
int h,l,x,y;
int i,f,g,z=0;
char spa  = ' ';
int main(int argc, char** argv) {
	cin>>h;
	cin>>l;
	x=(h-3);
	y=(l-3);
    while (i<=l-1){
	 cout<<"+";
	 i++;
	}
	cout<<endl;
	while (f<=x){
	 cout<<"+";
	 f++;
	 while (g<=y){
	 	cout<<spa;	 	
	 	g++;
	 		 	
	 }
	 g=0;
	 cout<<"+";
	 cout<<endl;
	}
	while (z<=l-1){
 	 cout<<"+";
 	 z++;
	}
	return 0;
}
