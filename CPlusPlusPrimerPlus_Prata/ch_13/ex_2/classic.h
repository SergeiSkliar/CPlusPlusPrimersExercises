#pragma once

#include "cd.h"

class Classic : public Cd {
private:
	char* prime_work;
public:
	Classic(char* s1, char* s2, char* s3, int n, double x);
	Classic(const Classic& c);
	Classic();
	virtual ~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& c);
};