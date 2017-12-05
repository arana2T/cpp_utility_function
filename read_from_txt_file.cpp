#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> read_from_txt_file(string name)
{
    string STRING;
    vector<string> strVec;
    ifstream infile;
    infile.open (name+".txt");
    while(getline(infile,STRING)) // To get you all the lines.
    {
      //cout<<STRING; // Prints our STRING.
      strVec.push_back(STRING);
    }
    infile.close();
    return strVec ;
}

int main ()
{
 string ch="fill"; 
 vector<string> sdt=read_from_txt_file(ch);
 
 cout<<sdt.size()<<endl ;
 for(int i=0;i<sdt.size();i++)
     cout<<sdt[i]<<endl;
 
 return 0 ;
}
