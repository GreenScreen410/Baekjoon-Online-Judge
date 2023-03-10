import java.util.Scanner;
import java.math.BigDecimal;

public class Main {
  public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.next();
        int b = input.nextInt();
      
        BigDecimal n = new BigDecimal(a);
        System.out.println(n.pow(b).toPlainString());
    }
}