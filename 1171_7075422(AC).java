import java.util.Scanner;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        if(b<10)
        {
            if(c<10)
                System.out.println(a+"0"+b+"00"+c);
            else if (c>10&&c<100)
                System.out.println(a+"0"+b+"0"+c);
            else
                System.out.println(a+"0"+b+""+c);
        }
        else
            if(c<10)
                System.out.println(a+""+b+"00"+c);
            else if (c>10&&c<100)
                System.out.println(a+""+b+"0"+c);
            else
                System.out.println(a+""+b+""+c);
    }
}
