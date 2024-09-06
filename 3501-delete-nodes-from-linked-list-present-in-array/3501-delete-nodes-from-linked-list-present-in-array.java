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
    public ListNode modifiedList(int[] nums, ListNode head) {
        HashSet<Integer> list = new HashSet<>();
        
        for(int i:nums)
            list.add(i);
        
        while(head!=null && list.contains(head.val)){
            
            head = head.next;
        }
        
        ListNode temp = head;
        ListNode prev = head;
        
        while(temp!=null){
            
            if(list.contains(temp.val)){
                prev.next = temp.next;
                temp = temp.next;
            }
            else{
                
                prev = temp;
            temp = temp.next;
                
            }
            
         
        }
        return head;
    }
}