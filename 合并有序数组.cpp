#include<vector>
using namespace std;
void Merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int i = m - 1;	//nums1的指针
	int j = n - 1;	//nums2的指针
	int k = m + n - 1;//合并后数组的指针

	while (i >= 0 && j >= 0)
	{
		if (nums1[i] >= nums2[j])
		{
			nums1[k] = nums1[i];
			i--;
		}
		else
		{
			nums1[k] = nums2[j];
			j--;
		}
		k--;
	}

	//将nums2中剩余元素放入合并后的数组中
	while (j >= 0)
	{
		nums1[k] = nums2[j];
		j--;
		k--;
	}
}