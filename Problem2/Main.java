// https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=programming-skills
package Problem2;

import java.util.Scanner;


public class Main {
    public String mergeAlternately(String word1, String word2){
        StringBuilder sb = new StringBuilder();
        
        int len = word1.length() + word2.length();
        for(int i = 0 ; i < len ; i++){
            if(i < word1.length()){
                sb.append(word1.charAt(i));
            }
            if(i < word2.length()){
                sb.append(word2.charAt(i));
            }
        }
        return sb.toString() ;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word1 = in.nextLine();
        String word2 = in.nextLine();
        Main m1 = new Main();
        String finslString = m1.mergeAlternately(word1, word2);
        System.out.println(finslString);
    }
}