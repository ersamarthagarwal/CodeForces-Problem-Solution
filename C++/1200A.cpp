#include <iostream>
#include <string>
using namespace std;

int  main() {
    int n;
    string events;
    cin >> n >> events;

    // Initializing all rooms as '0' as given
    string rooms = "0000000000";

    for (char ch : events) {
        if (ch == 'L') {
            // Finding left most empty room
            for (int i = 0; i < 10; i++) {
                if (rooms[i] == '0') {
                    rooms[i] = '1';
                    break;
                }
            }
        } else if (ch == 'R') {
            // Finding right most empty room
            for (int i = 9; i >= 0; i--) {
                if (rooms[i] == '0') {
                    rooms[i] = '1';
                    break;
                }
            }
        } else {
            // When customer leaves the room
            int room_number = ch - '0';
            rooms[room_number] = '0';
        }
    }
    cout << rooms << endl;
    return 0;
}