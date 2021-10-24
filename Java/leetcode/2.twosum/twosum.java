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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ans = new ListNode(); //防止链表丢失
        ListNode cur = new ListNode();
        cur = ans; int carry = 0;//初始化

        //当前两个节点都为空时跳出
        while (l1 != null || l2 != null) {
            int a = l1 != null ? l1.val : 0;
            int b = l2 != null ? l2.val : 0;
            
            int sum = (a + b + carry) % 10; //求上一位结果与这两次值的余数
            carry = (a + b + carry) / 10; //求进位值，不过加法只有1罢了，判断和加法时间差不多吧。

            cur.next = new ListNode(sum);
            cur = cur.next;
            /**if (l1.next != null || l2.next != null) {
                l1 = l1.next; l2 = l2.next;
                cur.next = new ListNode();
                cur = cur.next;
            }
            else {
                if (carry >= 1) {
                cur.next = new ListNode();
                cur = cur.next;
                cur.val = carry;
                }
                break;
            }*/
            if (l1 != null) {
                l1 = l1.next;                
            }
            if (l2 != null) {
                l2 = l2.next;
            }
            /** cur.next = new ListNode();
            cur = cur.next;
            */
        
        }
        if (carry >= 1) {
            cur.next = new ListNode(carry);
        }

        return ans.next; //因为25行的操作，会使头节点后一位为空，需要省略。
    }
}