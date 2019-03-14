import java.util.Scanner;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int in = sc.nextInt();
        final int year=2012;

        if(year-in+1<2000)
            System.out.println(year-in+1-1900+" "+1);
        else
            System.out.println(year-in+1-2000+" "+3);
    }
}
