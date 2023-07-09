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

//  class Solution {
//     public ListNode middleNode(ListNode head) {
//         ListNode slow = head;
//         ListNode fast=head;
//         while(fast != null && fast.next != null){
//             fast=fast.next.next;
//             slow=slow.next;
//         }
//         return slow;
//     }
// }
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        
        ListNode slow = head;
        ListNode fast=head;
        if(head.next==null) {
            head=null;
            return head;
        }
        
        while(fast != null && fast.next != null){
            fast=fast.next.next;
            
            slow=slow.next;
        }
        if(slow.next ==null){
            head.next=null;
            return head;
        } 
        slow.val=slow.next.val;
        slow.next=slow.next.next;
        
        
        return head;
    }
}