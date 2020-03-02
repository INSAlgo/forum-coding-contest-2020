import java.util.Scanner;

public class b_places_choisies {

    public static void main(String[] args) {

        int n, h, c;
        Scanner sc = new Scanner(System.in);
        String temp;
        int currH = 0, currC = 0;

        n = sc.nextInt();
        h = sc.nextInt();
        c = sc.nextInt();

        for (int i = 0; (i < n) && (currC <= c) && (currH <= h); ++i){
            temp = sc.next();
            if(temp.equals("H")){
                ++currH;
            }else if (temp.equals("C")){
                ++currC;
            }
        }

        if ((currC > c) || (currH > h)){
            System.out.println("NON");
        }else{
            System.out.println("OUI");
        }
    }
}
