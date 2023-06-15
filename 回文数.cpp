//�жϻ�����
class Solution {
public:

	bool isPalindrome(int x) {

		//���xΪ����������x��Ϊ0��ĩβΪ0����x���ǻ�����
		if (x < 0 || (x > 0 && x % 10 == 0)) {
			return false;
		}

		int reverseNum = 0;
		while (x > reverseNum) {
			reverseNum = reverseNum * 10 + x % 10;
			x /= 10;
		}

		//��xΪ����ʱ��ͨ�� reverseNum/10 ȥ���м�����
		return x == reverseNum || x == reverseNum / 10;
	}
};