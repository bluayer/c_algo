import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int num = sc.nextInt();
	
	for(int i = 0; i < num; i++, System.out.println()) {
		for (int j = 0; j < num - i - 1; j++) {
			System.out.printf(" ");
		}
    		for (int j = 0; j < 2 * i + 1; j++) {
    			System.out.printf("*");
    		}
	}
  }

}
