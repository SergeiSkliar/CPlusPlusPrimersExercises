//	Exercise 5.13: Each of the programs in the highlighted text on page 184
//	contains a common programming error.Identify and correct each error.


// (a) 
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
	case 'a': aCnt++; // missing break
	case 'e': eCnt++; // missing break
	default: iouCnt++; // missing break
}

// Correct
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
	case 'a': 
		aCnt++;
		break;
	case 'e': 
		eCnt++; 
		break;
	default:
		iouCnt++;
		break;
}

// (b) 
unsigned index = some_value();
switch (index) {
	case 1:
		int ix = get_value(); // control bypasses an explicitly initialized variable
		ivec[ix] = index;
		break;
	default:
		ix = ivec.size() - 1;
		ivec[ix] = index;
}

// Correct
int ix;
unsigned index = some_value();
switch (index) {
case 1:
	ix = get_value();
	ivec[ix] = index;
	break;
default:
	ix = ivec.size() - 1;
	ivec[ix] = index;
}

//(c) 
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
	case 1, 3, 5, 7, 9: // should be: case 1: case 3: case 5: case 7: case 9:
		oddcnt++;
		break;
	case 2, 4, 6, 8, 10:  // should be: case 2: case 4: case 6: case 8: case 10:
		evencnt++;
		break;
}

// Correct
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
	case 1: case 3: case 5: case 7: case 9:
		oddcnt++;
		break;
	case 2: case 4: case 6: case 8: case 10:
		evencnt++;
		break;
}

// (d) 
unsigned ival = 512, jval = 1024, kval = 4096; // should be const values
unsigned bufsize;
unsigned swt = get_bufCnt();
switch (swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
}

//Correct
constexpr unsigned ival = 512, jval = 1024, kval = 4096; 
unsigned bufsize;
unsigned swt = get_bufCnt();
switch (swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
}