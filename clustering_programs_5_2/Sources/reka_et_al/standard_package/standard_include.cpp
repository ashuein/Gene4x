#if !defined(STANDARD_INCLUDE_INCLUDED)
#define STANDARD_INCLUDE_INCLUDED	


#include <math.h>
#include <iostream>
#include <deque>
#include <set>
#include <vector>
#include <map>
#include <string> 
#include <fstream>
#include <ctime>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <queue>
#include <list>

using namespace std;


typedef unsigned int UI;
typedef deque<double> DD;
typedef deque<int> DI;
typedef deque<deque<int> > int_matrix;
typedef map<int, double> mapid;
typedef map<int, int> mapii;

#define RANGE_loop(i, s) for(UI i= 0; i<s.size(); i++)
#define IT_loop(template_, itm, s) for(template_::iterator itm= s.begin(); itm!=s.end(); itm++)
#define UP_TO_loop(i, s) for(UI i= 0; i<s; i++)




#include "cast.cpp"
#include "print.cpp"
#include "random.cpp"
#include "combinatorics.cpp"
#include "histograms.cpp"
#include "deque_numeric.cpp"
#include "partition.cpp"
#include "mutual.cpp"
#include "pajek.cpp"


#endif
