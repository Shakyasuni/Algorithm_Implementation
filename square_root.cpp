#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

std::string ConvertFloatToStr(float n, int precision) {
  std::stringstream ss; 
  ss << std::fixed << std::setprecision(precision) << n; 
  return ss.str();
}


std::string ApproxSqrt(int n, int iterations) {
  if(n < 0){
    std::cout << "Imaginary ";
    n = n * (-1);
  }

  float low = 0;
  float high = n;
  float mid, result;

  for(int i = 0; i <= iterations; i++){
    mid = (low + high) / 2;
    if(mid * mid == n){
      result = mid;
    }
    else if(mid * mid < n){
      low = mid;
      result = mid;
    }
    else{
      high = mid;
    }
  }
    return(ConvertFloatToStr(result, 5));
}
