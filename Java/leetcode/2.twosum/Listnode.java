import java.util.*;

//创建链表节点类
class Node{
		//定义类构造规则
		Node() {};
		Node(int a) {this.num = a;}

		int num;
		Node next;

		/**
		 * public void duru(Node pre){
			Node pre = new Node(int a = input());
			pre.next = new Node();
		}
		*/

		public static void bianli(Node cur){
			while (cur != null) {
				if (cur.next == null) {
					System.out.print(cur.num + "\n链表输出完毕");
					
				}
				else{
					System.out.print(cur.num + "->");
					
				}
				cur = cur.next;
			}
		}
	
}

public class Listnode{

	public static void input(Node cur){
		Scanner input = new Scanner(System.in);
		System.out.println("请输入整数（读取到233时停止）: ");
		while (true) {
			int num = input.nextInt();
			if (num != 233) {
				cur.num = num;
				cur.next = new Node();
				cur = cur.next;
			}
			else{
				break;
			}
			
		}
		System.out.print("输入已停止。");

	}

	public static void main(String[] args) {

	//初始化头节点及主要链表
	Node head = new Node();
	Node cur = new Node();
	head = cur;

	input(cur);
	Node.bianli(head);
	}
}