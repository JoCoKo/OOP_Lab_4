#include <iostream>

#include "Number.h"

using namespace std;

void main(int argc, char* argv[])
{
	Number* t1 = new Number(12);
	cout << "RESULT:" << t1->getDecomposition() << "#" << endl;
	FILE* f,* f2;
	if (argc >= 3)
	{
		uint64 curNum;
		fopen_s(&f, argv[1], "rt");
		fopen_s(&f2, argv[2], "wt");
		while (!feof(f))
		{
			fscanf_s(f, "%I64u", &curNum);
			cout << curNum << " ";
			Number* w1 = new Number(curNum);
			//fprintf_s(f2,"%s", w1->getDecomposition());
			fputs((w1->getDecomposition()).c_str(), f2);
			fprintf_s(f2, "\n");
		}
		fclose(f);
		fclose(f2);
	}
	else
	{
		cout << "Not enough params" << endl;
	};
	

	getchar();
}