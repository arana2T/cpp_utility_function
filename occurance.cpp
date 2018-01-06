// array of structures
#include <iostream>
#include <string>
#include <cstring>

using namespace std;



int occurance(char ch ,char* str)
{
 int i,  occ;
 occ=0;
 
 for(i=0;i<strlen(str);i++)
 {
 	if(str[i]==ch)
 	{
 	occ=occ+1;
	 }
 }
 return occ ;	
}



int main ()
{

char* ss;
char d='o';
ss="hello ...." ;
int result ;

result=occurance(d,ss) ;

cout<<"result : "<<result ;


}


