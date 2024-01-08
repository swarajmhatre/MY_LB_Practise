import java.util.Scanner;

public class program328 {
    public static void main(String args[]) {
        Scanner sobj = new Scanner((System.in));

        System.out.println(("Enter the number:"));
        int iNo = sobj.nextInt();
        int iMulti = 1;
        for (int i = 1; i <= iNo; i++) {
            iMulti *= i;
        }

        System.out.println("THe Factorial is: " + iMulti);
        sobj.close();
    }

}
