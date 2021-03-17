import java.io.Console;
import java.text.Format;
import java.util.Scanner;

public class question5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        try {
            int a = Integer.parseInt(line);
            System.out.print(a*a);
        }
        catch(Exception e) {
            System.out.println("Entered input is not a valid format for an integer");
        }
    }
}
