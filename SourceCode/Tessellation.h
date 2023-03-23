#ifndef _Tessellation_H_
#define _Tessellation_H_

#include <cstdlib>
#include <cmath>
#include <cassert>
#include <cstring>
#include <string>

#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<algorithm>
#include<array>
#include<vector>
#include<Eigen>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<map>
#include<utility>
#include<time.h>
#include<ctime>
#include <iomanip>



using namespace std;
using namespace Eigen;


namespace Tessellation {

	// Change double to float for single precision
	typedef double Real;

	// Equilibrium distance R_e (If not acquired from an MC simulation, predefine some value here)
	//MC Simulations//
	const Real R_e = 0.2;
	const Real R_c = 2.23 * R_e;        // Cut-off distance for particle search
	const Real delr = 0.25 * R_e;	    // Window width
	const Real dr = delr / 40;		    // Radius change
	const Real initialr = delr / 2; 	// Starting radius

}; // namespace Tessellation

#endif // _Tessellation_H_

