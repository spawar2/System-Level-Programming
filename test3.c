#include <iostream>
#include <cstring>

using namespace std;

int count( char str[] )
{
   int iSpaces = 0;

   //Forgot to mention that strlen is incredibly ineffecient... store ahead of time.
   int strSize = strlen(str);
   for(unsigned int iLoop = 0; iLoop < strSize; iLoop++ )
      if(str [iLoop] == ' ' )
         iSpaces++;

   return iSpaces;
}

int main()
{
   char str[100] = "\0";

   cout << "Enter text: ";
   cin.getline( str, 100 );

   int numSpaces = count( str );

   cout << "Number of spaces: " << numSpaces << endl;
   cin.ignore();

   return 0;
}
