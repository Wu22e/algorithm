#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<int> queue;
    string cmd;
    int n, pushNum;
    cin >> n;
    while(n--) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> pushNum;
            queue.push(pushNum);
        } else if (cmd == "pop") {
            if (queue.empty()) {
                cout << -1 << '\n';
            } else {
                cout << queue.front() << '\n';
                queue.pop();
            }
        } else if (cmd == "size") {
            cout << queue.size() << '\n';
        } else if (cmd == "empty") {
            if(queue.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (cmd == "front") {
            if (queue.empty()) {
                cout << -1 << '\n';
            } else {
                cout << queue.front() << '\n';
            }
        } else if (cmd == "back") {
            if (queue.empty()) {
                cout << -1 << '\n';
            } else {
                cout << queue.back() << '\n';
            }
        }
    }
    return 0;
}
