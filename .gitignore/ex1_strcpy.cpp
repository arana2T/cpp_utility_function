#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
    char Buffer[20] = {'\0'};
    string LineEntered;

    cout << "Enter a line of text: " << endl;
    cin>>LineEntered ;
    cout<<"line entred is :"<<LineEntered<<endl ;
    if ( LineEntered.length() < 20 ){
        strcpy(Buffer, LineEntered.c_str()); // This strcpy. is not declared in scope for some reason.
        cout << "Buffer contains: " << Buffer << endl;
    }
    
    else 
    cout<<"sup a 20";
    
    return 0;
}
