#pragma once
// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// ABC using dma
class abcDMA {
private:
	char* label;
	int rating;
protected:
	const char* showLabel() const { return label; }
	int showRating() const { return rating; }
public:
	abcDMA(const char* l = "null", int r = 0);
	abcDMA(const abcDMA& rs);
	virtual ~abcDMA();
	virtual void View() const = 0;
	abcDMA& operator=(const abcDMA & rs);
	friend std::ostream& operator<<(std::ostream& os,
		const abcDMA& rs);
};

// Base Class Using DMA
class baseDMA : public abcDMA
{
private:

public:
	baseDMA(const char* l, int r);
	baseDMA(const baseDMA& rs);
	~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	virtual void View() const;
	friend std::ostream& operator<<(std::ostream& os,
		const baseDMA& rs);
};
// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public abcDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null",
		int r = 0);
	lacksDMA(const char* c, const abcDMA& rs);
	virtual void View() const;
	friend std::ostream& operator<<(std::ostream& os,
		const lacksDMA& rs);
};
// derived class with DMA
class hasDMA :public abcDMA
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null",
		int r = 0);
	hasDMA(const char* s, const abcDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	virtual void View() const;
	friend std::ostream& operator<<(std::ostream& os,
		const hasDMA& rs);
};
#endif