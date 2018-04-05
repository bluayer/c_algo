import java.util.Scanner;
 

public class Main {
 
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int cnt = 0;
        str = str.trim(); 
        Boolean allEmpty = false; 
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ' && str.charAt(i - 1) != ' ') {
                cnt++;
            }
            else{
                allEmpty=true;
            }
        }
 
        if(allEmpty)
        {
            System.out.println(cnt+1);
        }else {
            System.out.println(cnt);
        }
 
 
    }
}
