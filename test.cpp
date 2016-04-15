#include <iostream>
#include <stdio.h>
#include <math.h>
#include "dic.cpp"

using namespace std;

main(){
  int a,b,c;
for (a=-255; a<255; a++){
	for (b=-255; b<255; b++){
	      for (c=-255; c<255; c++){
 		 dic(a,b,c);
		}
	}
}
}
