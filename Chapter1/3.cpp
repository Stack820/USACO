 #include <iostream>
 #include <cstdio>
 #include <cstring>
 #include <cstdlib>
 #include <vector>
 using namespace std;

 int main(void) {
     ProblemSolver solver = new ProblemSolver();
     solver.getInput();
     solver.solve();
     solver.getOutput();
 }

 class ProblemSolver {
 private:
     int numOfPlayers;
     map<string, int> mapOfPlayers = new map<string, int>();
 public:
     ProblemSolver() {
         freopen("gift1.in", "r", stdin);
         freopen("gift1.out", "w", stdout);
     }

     void getInput() {
         cin >> numOfPlayers;
         for (int i = 1; i <= numOfPlayers; i++) {
            
         }
     }
 }