#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) return;

        node->val = node->next->val;
        node->next = node->next->next;
    }
};

//to print the list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

//to find a node with a given value
ListNode* findNode(ListNode* head, int val) {
    while (head != NULL && head->val != val) {
        head = head->next;
    }
    return head;
}

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    ListNode* nodeToDelete = findNode(head, 5);
    sol.deleteNode(nodeToDelete);

    cout << "After deletion: ";
    printList(head);

    return 0;
}
