#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while (temp1 != nullptr && temp2 != nullptr) {
            if (temp1->val < temp2->val) {
                dummy->next = temp1;
                temp1 = temp1->next;
            } else {
                dummy->next = temp2;
                temp2 = temp2->next;
            }
            dummy = dummy->next;
        }

        while (temp1 != nullptr) {
            dummy->next = temp1;
            dummy = dummy->next;
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            dummy->next = temp2;
            dummy = dummy->next;
            temp2 = temp2->next;
        }

        return ans->next;
    }
};

// Helper function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Example 1
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* mergedList1 = solution.mergeTwoLists(list1, list2);
    printLinkedList(mergedList1);

    // Example 2
    ListNode* list3 = nullptr;
    ListNode* list4 = nullptr;
    ListNode* mergedList2 = solution.mergeTwoLists(list3, list4);
    printLinkedList(mergedList2);

    // Example 3
    ListNode* list5 = nullptr;
    ListNode* list6 = new ListNode(0);
    ListNode* mergedList3 = solution.mergeTwoLists(list5, list6);
    printLinkedList(mergedList3);

    return 0;
}