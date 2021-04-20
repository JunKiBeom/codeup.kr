import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
class Grade {
    private String subjet;
    private String grade;
    private int point;
    public String[] arr1 = {"A+","A0","A-","B+","B0","B-","C+","C0","C-","D+","D0","D-","F","Pass","Fail"};
    public double[] arr2 = {4.3,4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.3,1.0,0.7,0.0,4.3,0.0};

    public Grade(String s, String g, int p){
        subjet=s;
        grade=g;
        point=p;
    }
    public void print() {
        System.out.println(this.subjet+" "+this.grade+" "+this.point);
    }
    public String getGrade() {
        return this.grade;
    }
    public int getPoint() {
        return this.point;
    }
    public String getSubject() {
        return this.subjet;
    }
    public double Credit(String s) {
        for (int i=0;i<15;i++)
            if (s.equals(arr1[i]))
                return arr2[i];
        return 0;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Grade[] g = new Grade[n];
        for (int i=0;i<n;i++) {
            String s = sc.next();
            String gr = sc.next();
            int p = sc.nextInt();
            g[i] = new Grade(s, gr, p);
        }

        double sum = 0, avg;
        int tmp = 0;
        for (Grade e : g) {
            sum += e.Credit(e.getGrade()) * e.getPoint();
            tmp += e.getPoint();
        }
        avg = Math.round(sum/tmp*100)/100.0;

        int cnt=0;
        tmp = 0;
        String S = null;
        for (double d = 4.3; d>0; d-=0.3) {
            if (tmp==3) {
                d -= 0.1;
                tmp = 0;
            }
            if (avg == 4.3) {
                S = "A+";
                break;
            }
            else if (avg <= 0.69 && avg>=0) {
                S = "F";
                break;
            }
            else if ((avg <= d - 0.01) && (avg >= d - 0.3)) {
                S = g[0].arr1[cnt+1];
                break;
            }
            cnt++;
            tmp++;
        }
        System.out.printf("Average : "+"%.2f "+"("+S+")\n\n",avg);

        List<String> retakeSubject = new ArrayList<String>();
        List<String> retakeGrade = new ArrayList<String>();

        cnt = 0;
        for (Grade e : g){
            if (e.Credit(e.getGrade()) <= e.Credit("C+")) {
                retakeSubject.add(e.getSubject());
                retakeGrade.add(e.getGrade());
                cnt++;
            }
        }
        System.out.println("RETAKE NEEDED "+"("+cnt+")");
        for (int i=0;i<cnt;i++)
            System.out.println(" "+ retakeSubject.get(i)+" ("+retakeGrade.get(i)+")");
    }
}

