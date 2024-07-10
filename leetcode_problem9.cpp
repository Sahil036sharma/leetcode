

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if (head == NULL || head->next == NULL) {
            return false;
        }
        do {
            if (fast == NULL || fast->next == NULL) {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        } while (slow != fast);
        return true;
    }
};

// Example usage
int main() {
    // You can create your linked list and test the hasCycle function here
    return 0;
}