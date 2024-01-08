import java.util.Scanner;

public class program329 {
    public static int Factorial(int iNo) {
        int iMulti = 1;
        for (int i = 1; i <= iNo; i++) {
            iMulti *= i;
        }
        return iMulti;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner((System.in));

        System.out.println(("Enter the number:"));
        int iNo = sobj.nextInt();

        int iRet = Factorial(iNo);
        System.out.println("THe Factorial is: " + iRet);
        sobj.close();
    }

}
