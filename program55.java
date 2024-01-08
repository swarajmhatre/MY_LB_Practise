import java.util.*;

class Numbers{
Boolean CheckNumber(int iNo){
        while (iNo != 0) {
            if(iNo % 10 == 8){
                break;
            }
            iNo = iNo/10;
        }
        if(iNo ==0){
            return true;
        }
        else{
            return false;
        }
}
}

public class program55{

    
    public static void main(String args[]){
        Scanner sobj = new Scanner(System.in);

        int input = sobj.nextInt();
        Numbers nobj = new Numbers();
        Boolean bRet = nobj.CheckNumber(input);

        if(bRet){
            System.out.println("ahe");
        }
        else{
            System.out.println("Nahi");
        }
        sobj.close();
    }

}