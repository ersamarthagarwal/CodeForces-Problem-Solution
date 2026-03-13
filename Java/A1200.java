import java.util.Scanner;

public class A1200 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String events = sc.next();

        // Initializing rooms array
        char[] rooms = new char[10];
        for (int i=0; i<10; i++) {
            rooms[i] = '0';
        }

        for (int i=0; i<events.length(); i++) {
            char ch = events.charAt(i);

            if (ch == 'L') {
                // Finding left most empty room
                for (int j=0; j<10; j++) {
                    if (rooms[j] == '0') {
                        rooms[j] = '1';
                        break;
                    }
                }
            } else if (ch == 'R') {
                // Finding right most empty room
                for (int j=9; j >= 0; j--) {
                    if (rooms[j] == '0') {
                        rooms[j] = '1';
                        break;
                    }
                }
            } else {
                int room = ch - '0';
                rooms[room] = '0';
            }
        }
        System.out.println(new String(rooms));
        sc.close();
    }   
}
