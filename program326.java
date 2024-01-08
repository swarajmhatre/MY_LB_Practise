import java.util.Scanner;

public class program326 {
    public static void main(String args[]){
        Scanner sobj = new Scanner(System.in);

        System.out.println(("Enter first number: "));
        int iNo1 = sobj.nextInt();
    
        System.out.println(("Enter second number: "));
        int iNo2 = sobj.nextInt();

        int iRes =0;
        iRes = iNo1 + iNo2;

        System.out.println(("Addition is: "+ iRes));
        sobj.close();

    }
}
