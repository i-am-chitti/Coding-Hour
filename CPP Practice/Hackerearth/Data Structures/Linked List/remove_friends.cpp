#include<iostream>
using namespace std;

class Friend {
    public:
    int popularity;
    Friend *next;
    Friend(int ppl): popularity(ppl),next(0) {}
};

void printLL(Friend *head) {
    while(head) {
        cout<<head->popularity<<" ";
        head = head->next;
    }
}

Friend* deleteFriend(Friend *head, int K) {
    //printLL(head);
    //cout<<" "<<K<<endl;
    if(K<1 || !head->next) return head;
    Friend *tmp;
    Friend* prev=head,*curr=head->next,*next=curr->next;
    bool deletion=false;
    //if head to be deleted
    if(head->popularity < head->next->popularity) {
        //head has to be deleted
        tmp = head;
        head = head->next;
        tmp->next=0;
        free(tmp);
        K--;
        deletion=true;
    }
    else if(prev && curr && next) {
        //other than head
        while(curr && next) {
            if(curr->popularity<next->popularity) {
                //curr has to be deleted
                prev->next = next;
                curr->next = 0;
                free(curr);
                K--;
                deletion=true;
                break;
            }
            prev=curr;
            curr=curr->next;
            next = next->next;
        }
    }
    cout<<"before calling"<<head->popularity;
    if(deletion) deleteFriend(head, K);
    cout<<head->popularity;
    cout<<"after calling"<<endl;
    printLL(head);
    cout<<endl;
    return head;
}

int main() {
    int ppl,T,N,K;
    cin>>T;
    while(T--) {
        cin>>N>>K;
        Friend *head,*tmp;
        cin>>ppl;
        head = new Friend(ppl);
        tmp=head;
        for(int i=1;i<N;i++) {
            cin>>ppl;
            tmp->next = new Friend(ppl);
            tmp = tmp->next;
        }
        head = deleteFriend(head,K);
        cout<<endl;
        printLL(head);
    }   

}