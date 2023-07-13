#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int L, z, m, n, p;
    int teamAPoints = 0;
    int teamBPoints = 0;

    // Input the variables
    cin >> L;
    cin >> z;
    cin >> m;
    cin >> n;
    cin >> p;

    int goalDistance;
    
    
    // Iterate through the number of goals
    for (int i = 1; i <= p; i++) {
        cin >> goalDistance;

        if(goalDistance < L/2){
        
            if (goalDistance < z || goalDistance >= L - z) {
                teamBPoints += m;
            } else {
                teamBPoints += n;
            }
            
        }
        else if(goalDistance > L/2){
            
            if (goalDistance < z || goalDistance >= L - z) {
                teamAPoints += m;
            } else {
                teamAPoints += n;
            }
        }
    }
    

    // Determine the winner
    if (teamAPoints > teamBPoints) {
        cout << "A" << endl;
    } else if (teamBPoints > teamAPoints) {
        cout << "B" << endl;
    } else {
        cout << "TIE" << endl;
    }
}
    return 0;
}
