#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int carry = 0;

        while (l1 && l2) {
            int value = l1->val + l2->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1) {
            int value = l1->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3 = l3->next;
            l1 = l1->next;
        }

        while (l2) {
            int value = l2->val + carry;
            carry = value / 10;
            l3->next = new ListNode(value % 10);
            l3 = l3->next;
            l2 = l2->next;
        }

        if (carry) {
            l3->next = new ListNode(carry);
        }

        return head->next;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int arr1[] = {9, 9, 9, 9, 9, 9, 9};
    int arr2[] = {9, 9, 9, 9};

    ListNode* l1 = createList(arr1, 7);
    ListNode* l2 = createList(arr2, 4);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}
