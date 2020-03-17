import java.util.Scanner;
import java.io.*;
public class cf_71A {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int num = cin.nextInt();
        String word;
        for(int i=0; i<num; i++){
            word = cin.next();
            if(word.length() > 10){
                //System.out.println(word.charAt(0) + word.length()-2 +  + word.charAt(word.length()-1));
                System.out.print(word.charAt(0));
                System.out.print(word.length()-2);
                System.out.print(word.charAt(word.length()-1));
                System.out.println();
            }
            else System.out.println(word);
        }
    }
}