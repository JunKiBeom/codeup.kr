import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

class Student implements Comparable<Student>{
    String name;
    int score;

    public Student(String n, int s) {
        this.name = n;
        this.score = s;
    }

    public int compareTo (Student s) {
        if (this.score < s.score)
            return -1;
        else if (this.score == s.score)
            return 0;
        else
            return 1;
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Student[] s = new Student[n];

        for (int i = 0; i < n; i++) {
            s[i] = new Student(sc.next(), sc.nextInt());
        }
        Arrays.sort(s, Collections.reverseOrder());
        for (int i = 0;i<m;i++) {
            System.out.println(s[i].name);
        }
    }
}

