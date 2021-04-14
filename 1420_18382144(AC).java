import java.util.Arrays;
import java.util.Scanner;

class Student implements Comparable<Student>{
    private String name;
    private int score;
    private int n;

    Student(String n, int s){
        name = n;
        score = s;
    }

    public String toString(){
        return name+" (score : "+score+")";
    }

    @Override
    public int compareTo(Student st) {
        if (this.score < st.score) {
            return -1;
        }
        else if (this.score == st.score) {
            return 0;
        }
        else {
            return 1;
        }
    }

    public String result() {
        return this.name;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        sc.nextLine(); // 버퍼 초기화

        Student[] st = new Student[num];

        for (int i=0;i<num;i++) {
            String name = sc.next();
            int score = sc.nextInt();
            st[i] = new Student(name, score);
        }

        Arrays.sort(st);

        System.out.println(st[num-3].result());
    }
}


