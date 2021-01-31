// Source : https://leetcode.com/problems/number-of-good-pairs/
// Author : Vinícius Brum
// Date   : 30-01-2021


#include <stdio.h>

//Find number of good pairs
//Explanation: A pair (i,j) is called good if nums[i] == nums[j] and i < j
int numIdenticalPairs(int* nums, int numsSize){
    int i,j;
    int numberOfPairs = 0;
    for(i = 0; i < numsSize - 1; i++){
        for(j = i + 1; j < numsSize; j++){
            if(nums[i] == nums[j])  numberOfPairs++;
        }
    }
    return numberOfPairs;
}

int main(){
    int array1[] = {1,2,3,1,1,3};
    int array2[] = {1,1,1,1};
    int array3[] = {1,2,3};

    printf("Number of Good Pairs: %d\n", numIdenticalPairs(array1, 6));
    printf("Number of Good Pairs: %d\n", numIdenticalPairs(array2, 4));
    printf("Number of Good Pairs: %d\n", numIdenticalPairs(array3, 3));
    return 0;
}
