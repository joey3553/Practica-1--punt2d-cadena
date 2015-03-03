#include "Chain.h"



//constructors
Chain::Chain(){
	size = 1;
	c = "\0";
}

Chain::Chain(const char* format){
	size = 0;

	if (format != NULL)
	{
		static char tmp[8888];
		static va_list ap;

		va_start(ap, format);
		int res = vsprintf_s(tmp, 8888, format, ap);
		va_end(ap);

		if (res > 0)
		{
			alloc(res + 1);
			strcpy_s(c, size, tmp);
		}
	}

	if (size == 0)
	{
		alloc(1);
		Clear();
	}
}

Chain::Chain(const Chain& str){
	if (str.size != 0){
		size = str.size + 1;
		c = str.c;
	}
	else{
		Clear();
	}
}

//destructor

Chain::~Chain(){
	delete[] c;
}

//operators
bool Chain::operator == (const char* a){
	if (a != NULL){
		return strcmp(c, a) == 0;
	}
	else
		return false;
}

bool Chain::operator != (const char* a){
	if (a != NULL){
		return strcmp(c, a) != 0;
	}
	else
		return false;

}



bool Chain::operator == (const Chain& str){
	if (str.size != 0)
		return strcmp(c, str.c) == 0;
	if (str.size == 0 && size == 0 ){
			return true;
		}
		else{
			return false;
		}
}

bool Chain::operator != (const Chain& str){
	if (str.size != 0){
		return strcmp(c, str.c) != 0;
	}
	else if (str.size == 0 && size == 0){
			return false;
		}
	else{
			return true;
		}
	
}


Chain Chain::operator = (const char* a){
	if (a != NULL){
		size = strlen(a);
		c = new char[size];
		strcpy_s(c, size, a);
	}
	else{
		Clear();
	}
	return c;
}

Chain Chain::operator = (const Chain& str){
	if (str.size != 0){
		size = str.size + 1;
		strcpy_s(c, size, str.c);
	}
	else{
		Clear();
	}
	return c;
}



Chain Chain::operator += (const char* a){
	if (a != NULL){
		size += strlen(a) + 1;
		strcat_s(c, size, a);
		return c;
	}
	else{
		return c;
	}
}

Chain Chain::operator += (const Chain& str){
	if (str.size != 0){
		size += strlen(str.c) + 1;
		strcat_s(c, size, str.c);
		return c;
	}
	else{
		return c;
	}
}

//other methods

const int Chain::Length(){
	return strlen(c);
}

const int Chain::Capacity(){
	return size
}

char* Chain::GetString(){ return 0; }

void Chain::Clear(){
	delete[] c;
	size = 1;
	c = "\0";
}

