import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
		sc.close();
		int mul = a * b *c;
		int[] cnt= new int[10];
		
        while (mul > 0) {
            cnt[mul % 10]++;
            mul /= 10;
        }
         
        for (int i = 0; i < cnt.length; ++i) {
            System.out.println(cnt[i]);
        }

	}
		

}
