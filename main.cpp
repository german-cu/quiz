#include "Quiz1.h"
#include <iostream>

using namespace std;
//adding comments to  illustrate how cool github is
int main(int argc, char** argv)
{
        //commenting my code because likes commented code
	if(argc > 1)
	{
		string test = argv[1];
		//string test ="reneedwqqwefwfgweqAAAA";
		Quiz1 q;

		cout << "number of command line arguments: " << argc << endl;
		cout << "the number of vowels in " << test << "  is: " << q.countVowels(test) << endl;
		//cout << "argc is: " << argc << endl;
		//cout << "argv[0] is : " << argv[0] << endl;
	}
	else
	{
		cout << "shame on you" << endl;
	}
	
	cout << "program exited successfully" << endl;
	cout << "rob still doesnt know what's going on" << endl;

	return 0;
}
