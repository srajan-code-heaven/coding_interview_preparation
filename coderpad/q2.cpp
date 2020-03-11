import java.io.*;

class Main{
public static int myStringToInteger(String str) {
    int answer = 0;
    for (int i =0; i<str.length(); i++) {
        answer =answer*10 + (str.charAt(i) - '0') ;
    }
    return answer;
}
public static void main (String[] args) {
    /* code */
    String str="1324";
    System.out.println(myStringToInteger(str));
}
}
