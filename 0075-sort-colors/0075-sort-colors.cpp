class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0, count2=0, count3=0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            count1++;
            else if(nums[i]==1)
            count2++;
            else
            count3++;
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(i<count1)
            { nums[i]=0;}
            else if( i<count1+count2)
            {nums[i]=1;}
            else 
            {nums[i]=2;}
        }
    }
};

// while(mid <= high) {
// if(nums[mid] == 0) {
// swap(nums[low], nums[mid]);
// mid++; low++;
// } else if(nums[mid] == 1) {
// mid++;
// } else {
// swap(nums[high], nums[mid]);
// high --;

// }