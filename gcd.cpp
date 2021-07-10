#include "gcd.hpp"
//In this part of the program,the program calculates using the GCD Euclidean algorithm:
int gcd (int a,int b) {
	if (a==b)  return a; 
	else if (a>b) return gcd(a-b,b);
	else  return gcd (a,b-a);
}



	
