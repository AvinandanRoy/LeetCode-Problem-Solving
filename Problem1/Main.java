package Problem1;

// import java.util.Scanner;
// Find the Index of the First Occurrence in a String
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/?envType=study-plan-v2&envId=programming-skills

public class Main{

    public int strStr(String haystack, String needle) {
        return haystack.indexOf(needle);
    }

    public static void main(String[] args) {
        String name = "Avinandan";
        String target = "nan";
        
        Main m1 = new Main();
        int result = m1.strStr(name, target);
        System.out.println(result);
    }
}