#include<vector>
using namespace std;
void Merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int i = m - 1;	//nums1��ָ��
	int j = n - 1;	//nums2��ָ��
	int k = m + n - 1;//�ϲ��������ָ��

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

	//��nums2��ʣ��Ԫ�ط���ϲ����������
	while (j >= 0)
	{
		nums1[k] = nums2[j];
		j--;
		k--;
	}
}