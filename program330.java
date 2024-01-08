import java.util.Scanner;

class Numbers {
    public int Factorial(int iNo) {
        int iMulti = 1;
        for (int i = 1; i <= iNo; i++) {
            iMulti *= i;
        }
        return iMulti;
    }
}

public class program330 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner((System.in));

        System.out.println(("Enter the number:"));
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.Factorial(iNo);

        System.out.println("THe Factorial is: " + iRet);

        sobj.close();
    }

}
