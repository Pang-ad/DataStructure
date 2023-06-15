//判断回文数
class Solution {
public:

	bool isPalindrome(int x) {

		//如果x为负数，或者x不为0且末尾为0，则x不是回文数
		if (x < 0 || (x > 0 && x % 10 == 0)) {
			return false;
		}

		int reverseNum = 0;
		while (x > reverseNum) {
			reverseNum = reverseNum * 10 + x % 10;
			x /= 10;
		}

		//当x为奇数时，通过 reverseNum/10 去除中间数字
		return x == reverseNum || x == reverseNum / 10;
	}
};