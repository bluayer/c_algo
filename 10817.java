import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
		int num = 0;
		
		if (a > 0 && b > 0 && c > 0 && a < 101 && b < 101 && c < 101) {
			if ( (a >= b && b >= c) || (c >= b && b >= a)) {
				num = b;
			}
			else if((b >= a && a >= c) || (c >= a && a >= b))
				num = a;
			else 
				num =c;
			System.out.println(num);
		}

	}

}
