    #include <iostream>
    #include <vector>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            cin >> n;
     
            vector<int> words(n);
            vector<int> qualities(n);
     
            for (int i = 0; i < n; i++) {
                cin >> words[i] >> qualities[i];
            }
     
            int maxQuality = 0;
            int winner = -1;
     
            for (int i = 0; i < n; i++) {
                if (words[i] <= 10 && qualities[i] > maxQuality) {
                    maxQuality = qualities[i];
                    winner = i + 1;
                }
            }
     
            cout << winner << endl;
        }
     
        return 0;
    }
