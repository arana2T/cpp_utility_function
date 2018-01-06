#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char num[100];
	int dec = 0, i, j, len;
	cout<<"Enter a number: ";
	cin>>num;
	len = strlen(num);
	for(i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	cout<<dec ;
	return 0;
}


