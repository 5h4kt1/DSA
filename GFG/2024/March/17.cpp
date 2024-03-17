/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int count = 0;
        map<int, int> mp;
        while(head1){
            mp[head1->data]++;
            head1 = head1->next;
        }
        while(head2){
            int to_find = x - head2->data;
            if(mp.find(to_find)!=mp.end()){
                mp[to_find]--;
                count++;
            }
            head2 = head2->next;
        }
        return count;
    }
};
