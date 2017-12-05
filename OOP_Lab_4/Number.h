#pragma once
#include <string>
#define uint64 unsigned __int64
class Number
{
public:
	Number(uint64 sourceNumber, bool factor = false);
	void factorize();
	std::string getDecomposition();
private: 
	bool alreadyFactored=false;
	uint64 num;
	std::string decomposition="";

};