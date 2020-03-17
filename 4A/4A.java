import java.util.Scanner;

public class cf_4A {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        if(n%2 == 0 && n != 2)
            System.out.println("YES");
        else System.out.println("NO");
    }
}