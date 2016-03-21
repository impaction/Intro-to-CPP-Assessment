#include "My_String.h"
#include <iostream>

using namespace std;

My_String::My_String()
{
}

My_String::My_String(char * string1)
{
	m_size = strlen(string1);
	m_capacity = strlen(string1) + 1;
	m_string = new char [m_capacity];
	strcpy(m_string, string1);
}

int My_String::getSize()
{
	return m_size;
}

char My_String::getCharIndex(int i)
{
	return m_string[i];

}




