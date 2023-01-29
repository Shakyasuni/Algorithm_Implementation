
void ReverseArray(int arr[], int length) {
  for(int i = 0; i < length/2; i++){
    int temp = arr[i];
    arr[i] = arr[length - i - 1];
    arr[length - i - 1] = temp;
  }
}