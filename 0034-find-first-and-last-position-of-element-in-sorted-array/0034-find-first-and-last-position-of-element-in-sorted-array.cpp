class Solution {
public:
    int firstPosition(vector<int> & nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }

        return ans;
    }

    int lastPosition(vector<int> & nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2);

        int fOcc=firstPosition(nums, target);
        int lOcc=lastPosition(nums, target);

        res[0]=fOcc;
        res[1]=lOcc;
        return res;
    }
};