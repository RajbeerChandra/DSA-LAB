#include <stdio.h>
#include <limits.h>
void replace(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int s = -1;
        int diff = INT_MAX;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[i] && (nums[j] - nums[i] < diff))
            {
                s = nums[j];
                diff = nums[j] - nums[i];
            }
        }
        nums[i] = s;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
}
int main(void)
{
    int nums[] = { 10, 100, 93, 32, 35, 65, 80, 90, 94, 6};
    int n = sizeof(nums)/ sizeof(nums[0]);
    replace(nums, n);
    return 0;
}