import java.util.*;
public class program76 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int iSize = sc.nextInt();
        int Arr[] = new int[iSize]; 
        int add =0;
        for(int i=0; i<iSize; i++){
            Arr[i] = sc.nextInt();
            add = add + Arr[i];
        }
        System.out.println(add);
    }
}
