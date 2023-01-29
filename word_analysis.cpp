#include <string>

int MinimumWordLength(std::string words[], int length) {
  int minimum = words[0].size();
  for(int i = 0; i < length; i++){
    if(words[i].size() < minimum){
      minimum = words[i].size();
    }
  }
  return minimum;
}


int MaximumWordLength(string words[], int length) {
  int maximum = words[0].size();
  for(int i = 0; i < length; i++){
    if(words[i].size() > maximum){
      maximum = words[i].size();
    }
  }
  return maximum;
}


int RangeOfWordLengths(std::string words[], int length) {
  int minimum, maximum;
  minimum = maximum = words[0].size();
  for(int i = 0; i < length; i++){
    if(words[i].size() < minimum){
      minimum = words[i].size();
    }
    if(words[i].size() > maximum){
      maximum = words[i].size();
    }
  }
  return (maximum-minimum);
}


int WordLengthMean(std::string words[], int length) {
  int sum = 0;
  for(int i = 0; i < length; i++){
    sum = sum + words[i].size();
  }
  return (sum / length);
}

int WordLengthMode(std::string words[], int length) {
  int mode = 0;
  int modeCheck = 0;
  int count = 0;
  int maxCount = 0;

  for(int i = 0; i < length; i++){
    for(int j = 0; j < length; j++){
      if(words[i].size() == words[j].size()){
        count++;
      }

    }
    if(count == maxCount){
      modeCheck = words[i].size();
      if(mode != modeCheck){
        return -1;
      }
    }
    if(count > maxCount){
      mode = words[i].size();
      maxCount = count;
    }
    count = 0;
  }
  return mode;
}