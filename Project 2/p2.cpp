#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    
    int length, query;
    cin >> length >> query;
    vector<int> vec[length];
    for (int i = 0; i < length; i++) {
        int columns;
        cin >> columns;
        for (int j = 0; j < columns; j++) {
            int user_input;
            cin >> user_input;
            vec[i].push_back(user_input);
        }
    }
    int a,b,c,d;
    for (int k = 0; k < query; k++) {
        cin >> a >> b;
		cin>> c>> d;
        cout << vec[a][b] << endl;
		cout << vec[c][d] << endl;
		break;
    }
    return 0;
}