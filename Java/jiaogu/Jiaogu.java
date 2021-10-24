import java.util.Scanner;

public class Jiaogu{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("input:");
		int a = input.nextInt();

		while (a != 1) {
			if (a % 2 == 1) {
				a = a * 3 + 1;
			}
			else{
				a = a / 2;
			}
			System.out.println(" " + a);
			
		}

	}
}