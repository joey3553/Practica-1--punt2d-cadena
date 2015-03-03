#ifndef _CHAIN_H_
#define _CHAIN_H_

#include <string.h>
#include <stdarg.h>
#include <iostream>

class Chain{
public:

	//attributes
	char* c;
	int size;

	//constructors
	Chain();
	Chain(const char* format,...);
	Chain(Chain& str);

	//destructor
	~Chain();

	//operators
	bool operator == (const char* a);
	bool operator != (const char* a);

	bool operator == (const Chain& str);
	bool operator != (const Chain& str);
	
	Chain operator = (const char* a);
	Chain operator = (Chain& str);
	
	Chain operator += (const char* a);
	Chain operator += (Chain& str);

	//other methods

	void alloc(int n);

	const int Length();

	const int Capacity();
	
	char* GetString();
	
	void Clear();

};

#endif _CHAIN_H_