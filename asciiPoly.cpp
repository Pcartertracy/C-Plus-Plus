// creates a ascii polygon/circle

#include <iostream>
#include <cmath>

/* using the preprocessor to create a constant
simply does text replacement, with essentially 
no compiler error reporting. */
// #define SIDES 3

// the better way
const int SIDES = 4;

int canvasWidth = 45;
int canvasHt = 20;
float x = 16, y = 8;
float radiusW = 16, radiusH = 8;
float xs[SIDES], ys[SIDES];
int arrLen = SIDES;
float theta = 0.0;



// declare function prototype
bool isHit(int a, int b);

// required main function for all c/c++ programs
int main(){
		
		// assign coord values to arrays
		for ( int i=0; i<arrLen; i++){
			xs[i] = x + cos(theta)*radiusW;
			ys[i] = y + sin(theta)*radiusH;
			theta += M_PI*2/arrLen;
		}
	
		 // initial line return
		 std::cout<< "\n";
		 for ( int i=0; i<canvasHt; i++){
			for (int j=0; j<canvasWidth; j++){
				if (isHit(j, i)){
					std::cout<< "0";
				} else {
					std::cout<< "-";
				}
			}
			std::cout<< "\n";
		 }
		 
	return 0;
}

// return if coord is part of polygon edge
bool isHit(int a, int b){
	for ( int k = 0; k <arrLen; k++){
		if (int(xs[k]) == a && int(ys[k]) == b){
			return true;
		}
	}
	return false;
}















