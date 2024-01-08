import java.util.Scanner;

class Numbers {
    public int EvenFactorial(int iNo) {
        int iMulti = 1;
        for (int iCnt = 2; iCnt <= iNo; iCnt += 2) {
           if((iNo%iCnt) ==0){
            iMulti= iMulti*iCnt;
           }
        }
        return iMulti;
    }
}

public class program334 {

    public static void main(String args[]) {
        Scanner sobj = new Scanner((System.in));

        System.out.println(("Enter the number:"));
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        int iRet = nobj.EvenFactorial(iNo);

        System.out.println("THe Multiplication of even factors is: " + iRet);

        sobj.close();
    }

}
