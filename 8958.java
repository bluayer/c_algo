import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String [] list = new String[n];
		sc.nextLine();
		
		for (int i=0; i < n; i++) {
			int score = 0;
			int add = 0;
			list[i] = sc.nextLine();
			char[] temp = list[i].toCharArray();
			for (int j =0; j < temp.length; j++) {
				if(temp[j] == 'O') {
					add++;
				}
				else {
					score += ((add * add) + add) /2;
					add = 0;
				}
				
				if (j+1 == temp.length) {
					score += ((add * add) + add) /2;
					add = 0;
				}
				
			}
			System.out.println(score);	
		}

	}
}
