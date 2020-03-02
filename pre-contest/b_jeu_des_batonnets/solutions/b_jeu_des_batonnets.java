import java.util.Scanner;

public class Nim2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nb = sc.nextInt();
        int b = sc.nextInt();
        int j = sc.nextInt();
        int reste = nb%(b+1) ;
        if(( j==0 && ( reste !=0 ) ) || (j==1 && ( reste==0 ))){
            System.out.println("OUI");
        }else {
            System.out.println("NON");
        }

    }
}
