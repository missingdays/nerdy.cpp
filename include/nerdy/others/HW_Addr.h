#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

class HW_Address
{

public :
HW_Address(const string & hw)
{
	char ignore;
	unsigned int value;
	istringstream iss(hw.c_str(), istringstream::in);
	iss >> hex;

	for (int i = 0; i < 5; i++)
	{
		iss >> value >> ignore;
		_byte_arr[i] = value;
	}
	iss >> value;
	_byte_arr[5]=value;
}

~HW_Address()
{
}

private :
unsigned char _byte_arr[6];

}