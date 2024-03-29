package inflearn.string;

import java.util.Scanner;

public class Problem06_1 {
    // contains 사용
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char[] input = scanner.nextLine().toCharArray();
        StringBuffer sb = new StringBuffer();
        for (char c : input) {
            if (!sb.toString().contains(String.valueOf(c))) {
                sb.append(c);
            }
        }
        System.out.println(sb);
    }
}
