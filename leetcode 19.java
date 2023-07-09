/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        //creating new node and pointing to head
        ListNode newhead=new ListNode();    
        newhead.next=head;

        //creating two pointers
        ListNode slow=newhead;
        ListNode fast=newhead;


        //move fast pointer by n steps
        for(int i=0;i<n;i++){
            fast=fast.next;
        }
        //then move both pointers until fast's next become null 
        while(fast.next != null){
            fast=fast.next;
            slow=slow.next;
        }
        fast=slow.next;
        
        slow.next = slow.next.next;

        return newhead.next;


    }
}