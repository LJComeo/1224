#include <iostream>
#include <vector>
#include <stack>
using namespace std;


struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
            val(x), next(NULL) {
      }
};


class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int> v;
		stack<int> st;

		ListNode* cur = head;
		for (; cur; cur = cur->next)
		{
			st.push(cur->val);
		}
		int n = st.size();
		for (int i = 0; i < n; i++)
		{
			v.push_back(st.top());
			st.pop();
		}
		return v;
	}
};
int main()
{



	return 0;
}