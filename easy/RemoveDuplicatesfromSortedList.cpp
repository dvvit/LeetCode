#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                ListNode* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution sol;
    ListNode* updatedHead = sol.deleteDuplicates(head);

    printList(updatedHead);

    return 0;
}
