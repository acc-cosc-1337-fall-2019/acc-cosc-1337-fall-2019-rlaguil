//write include statement for switch header
#include "switch.h"


//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

string menu(int menu_option)
{
	switch (menu_option)
	{
	case 1:
		return "option 1";
	case 2:
		return "option 2";
	case 3:
		return "option 3";
	case 4:
		return "option 4";
	default:
		return "invalid";
	}
	
	return string();
}
