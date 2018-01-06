// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

typedef struct movies_t 
{
  string title;
  int year;
} ;	

int main ()
{
  movies_t movie1 ;	
  movies_t *movie2 ;
  
  movie1.title="cast a way";
  movie1.year=2010 ;

  (*movie2).title="cast";
  (*movie2).year=2011 ;

  cout<<"title :"<<(*movie2).title;


}


