package Problem2;

import java.util.Scanner;

public class practice {
    public String combineName(String word1 , String word2){
        StringBuilder newString = new StringBuilder();
        int length = word1.length() + word2.length();

        for(int i = 0 ; i < length ; i++){
            if(i < word1.length()){
                newString.append(word1.charAt(i));
            }

            if(i < word2.length()){
                newString.append(word2.charAt(i));
            }
        }
        return newString.toString();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word1 =  in.nextLine();
        String word2 = in.nextLine();

        practice p1 = new practice();
        System.out.println(p1.combineName(word1, word2));
    }
}
