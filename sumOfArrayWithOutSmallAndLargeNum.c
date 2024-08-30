#include <stdio.h>

int main() {
  int nums[] = {2,7,3,5,3,1,9,6,8};
  int length = sizeof(nums) / sizeof(nums[0]);
  int largeNum = 0;
  int samllNum = nums[0];
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += nums[i];
    if (largeNum < nums[i])
    {
      largeNum = nums[i];
    }
    if (samllNum > nums[i])
    {
      samllNum = nums[i];
    }
    
  }
  printf("the largest num is: %d", largeNum);
  printf("\nthe smallest num is: %d", samllNum);
  printf("\nthe before decrement the smallest num and the largest num is: %d", sum);
  sum = sum - largeNum - samllNum;
  printf("\nthe sum after decrement the largest num and the smallest num is: %d", sum);

}
