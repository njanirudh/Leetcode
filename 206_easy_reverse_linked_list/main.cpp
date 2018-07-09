#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node * next = NULL;
};

class Solution {
public:
    Node* reverseList(Node* head)
    {

        print_list(head);

        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while(current != NULL)
        {
            // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;


        return head;
    }

    void print_list(Node*  input)
    {
        Node* iter_node = input;
        while(iter_node != NULL)
        {
            cout<<iter_node->val<<" ";
            iter_node = iter_node->next;
        }
        cout<<endl;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
