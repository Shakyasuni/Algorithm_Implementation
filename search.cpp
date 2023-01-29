
int LinearSearch(int numbers[], int length, int n) {
  for(int i = 0; i < length; i++){
    if(numbers[i] == n){
      return i;
    }
  }
  return -1;
}


int BinarySearch(int numbers[], int length, int n) {
  int low = 0;
  int high = length - 1;
  int mid;
  while(low <= high){
    mid = (low + high)/2;
    if(numbers[mid] == n){
      return mid;
    }
    else if(numbers[mid] < n){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return -1;
}