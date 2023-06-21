class Solution{
public:
	int removeElement(vector<int>& nums, int val){
		
		int n=nums.size();
		int slow = 0;	//慢指针，用于指向新数组位置
		for(int fast=0;fast<n;fast++)
		{
			if(nums[fast] != val)
			{
				nums[slow] = nums[fast];	//找到非删除值覆盖数组
				slow++;		//更新下一次覆盖位置
			}
		}
		return slow;	//返回新数组长度
	}
}；