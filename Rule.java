import java.util.Scanner;

public class DivisibleBy19 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int temp = num;

        while(temp > 100) {
            int last = temp % 10;
            temp = temp / 10 + 2 * last;
        }

        if(temp % 19 == 0)
            System.out.println(num + " is divisible by 19");
        else
            System.out.println(num + " is not divisible by 19");
    }
}
