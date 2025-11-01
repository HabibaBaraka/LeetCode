/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
      set<int>s; 
  ListNode* ans=nullptr;
  ListNode* tail=nullptr;
  void insert_node(int val,ListNode*&head) {
		
		ListNode* new_node,*cur;
		new_node = new ListNode;
		new_node->val = val;
		
		if (head == NULL) {
			head =tail= new_node;
			new_node->next = NULL;
			return;
		}
		
			tail->next = new_node;
		tail = new_node;
		new_node->next = NULL;
	}
  void traverse(ListNode* head)
  {

ListNode*cur=head;
while(cur)
{
    if(!s.count(cur->val))insert_node(cur->val,ans);
        cur=cur->next;
}
  }
public:

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        for(auto it:nums)s.insert(it);
              traverse(head);
              return ans;
         
    }
};
