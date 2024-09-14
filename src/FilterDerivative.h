#ifndef FilterDerivative_h
#define FilterDerivative_h

// returns the derivative
struct FilterDerivative {
  long LastUS;
  float LastInput;
  
  float Derivative;
  
  float input( float inVal, long us=-1 );
  
  float output();
};

void testFilterDerivative();

#endif