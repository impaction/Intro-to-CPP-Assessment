#pragma once


class My_String
{
private:
	int m_size;
	int m_capacity;
	char * m_string;

public:
	My_String();
	My_String(char * string1);

	int getSize();
	char getCharIndex(int i);
	
	
};

