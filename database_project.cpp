#include "stdafx.h"
#include "command.h"
#include "io.h"
using namespace std;

int main()
{
	io getinput;	//create object
	
	do
	{
		getinput.ask();	//receive input
		command execute();	//initialize command with number
		/*
		switch(getinput.choose())
		{
			case 0:
				cout << "'" << getinput.unknown() << "'" << " was not recognized" << endl;
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}
		*/
	} while(getinput.loop);	//check loop status



    return 0;
}