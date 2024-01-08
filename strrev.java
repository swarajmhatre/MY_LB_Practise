
class str{
String strrev(String str){
    String rev = "";
    int j = str.length()-1;
    char ch;
    while (j >=0 ) {
        ch = str.charAt(j);
        rev += ch;
        j--;
    }
    return rev;
}
}

public class strrev{
    public static void main(String args[]){
        String str = "Swaraj";

        str st = new str();
        String Sret = st.strrev(str);
        System.out.print(Sret);
    }
}