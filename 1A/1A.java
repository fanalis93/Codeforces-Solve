import java.util.Scanner;

public class cf_1A {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n,m,a;
        n=cin.nextInt();
        m=cin.nextInt();
        a=cin.nextInt();
        long n1=n/a,m1=m/a;

        if(n%a != 0)
            n1++;
        if(m%a != 0)
            m1++;
        System.out.println(n1*m1);
    }
}