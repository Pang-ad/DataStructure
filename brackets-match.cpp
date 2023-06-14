//¿®∫≈∆•≈‰	c++
#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		stack<char>brackets;
		for (char c : s) {
			if (c == '(' || c == '[' || c == '{') {
				brackets.push(c);
			}
			else if (c == ')' || c == ']' || c == '}') {
				if (brackets.empty()) {
					return false;
				}
				char top = brackets.top();
				brackets.pop();
				if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c = ']' && top != '[')) {
					return false;
				}
			}
		}
		return brackets.empty();
	}
};


//¿®∫≈∆•≈‰	c
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isValid(const char* s) {
	int length = strlen(s);
	char stack[length];
	int top = -1;

	for (int i = 0; i < length; i++)
	{
		char c = s[i];
		if (c == '(' || c == '{' || c == '[')
		{
			top++;
			stack[top] = c;
		}
		else
		{
			if (top == -1)
				return false;
			
			char topChar = stack[top];
			top--;
			if ((c == ')' && topChar != '(') || (c == '}' && topChar != '{') || (c == ']' && topChar != '['))
			{
				return false;
			}
		}
	}

	return top == -1;
}