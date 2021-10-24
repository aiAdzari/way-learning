public class week2{
	public static void main(String[] args) {
		int i = 0, sum = 0, fin = 0;
		if ((3*3*3 + 4*4*4 + 5*5*5) == 6*6*6 ) {
			System.out.println("3^3 + 4^3 + 5^3 = 6^3 等式成立");
		}
		else{
			System.out.println("第一步验证出错");
		}
		
		for (i = 6, fin = 180;i < 70 ;i++ ) {
			sum = sum + i*i*i;
		}

		if (sum == fin * fin * fin) {
			System.out.println("6^3 + 7^3 +...+ 69^3 = 180^3 等式成立");
		}
		else{
			System.out.println("第二步验证出错");
		}

	}

}