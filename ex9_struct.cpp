// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} films [3];

void printmovie (movies_t movie);

int main ()
{
  int mystr;
  int n;

  for (n=0; n<3; n++)
  {
    cout << "Enter title: ";
    cin>>films[n].title ;
    cout << "Enter year: ";
    cin>>mystr;
    films[n].year=mystr;
  }

  cout << "\nYou have entered these movies:\n";
  for (n=0; n<3; n++)
    cout<<films[n].title<<endl;
    cout<<films[n].year<<endl;

  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
