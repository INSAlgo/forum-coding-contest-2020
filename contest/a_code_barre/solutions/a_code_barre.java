import java.util.Scanner;

public class a_code_barre {

    public static void main(String[] args) {

        // read and store the input numbers as integers
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int r=0;
        for (int i=0; i<s.length();i++){
            if (s.charAt(i)=='-'){
                r++;
            }else if(r>0){
                System.out.println(r);
                r=0;
            }
        }
        System.out.println(r);

    }

}
