public class Largest_3 {

    public static void main(String[] args) {
        String arr = "6333377719";
        int n = arr.length();
        char maxChar = '0';

        for (int i = 0; i < n - 2; i++) {
            if (arr.charAt(i) == arr.charAt(i + 1) && arr.charAt(i + 1) == arr.charAt(i + 2)) {
                if (arr.charAt(i) > maxChar) {
                    maxChar = arr.charAt(i);
                }
            }
        }

        if (maxChar != '0') {
            System.out.println(String.valueOf(maxChar).repeat(3));
        } else {
            System.out.println("");
        }
    }
}
