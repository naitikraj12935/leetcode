// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     long long int count = 0;
//     void solve(vector<vector<int>>& questions, int k, int size, long long int sum) {
//         if (k > size) {
//             count = max(count, sum);
//             return;
//         }
//         long long int sum1 = sum + questions[k][0];
//         solve(questions, k + questions[k][1]+1, size, sum1);
//         solve(questions, k + 1, size, sum); // use k+1 instead of k++
//     }
//     long long mostPoints(vector<vector<int>>& questions) {
        
//         int size = questions.size() - 1; // use -1 to get the correct size
//         int k = 0;
//         long long int sum = 0;
//         solve(questions, k, size, sum);
//         return count;
//     }
// };
class Solution {
public:
    long long dp(vector<vector<int>> & v,int i,vector<long long>& ch){
        if(i>=v.size()){
            return 0;
        }
        if(ch[i]!=-1){
            return ch[i];
        }
        long long take=dp(v,i+1+v[i][1],ch)+v[i][0];
        long long notake=dp(v,i+1,ch);
        return ch[i]=max(take,notake);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> ch(questions.size(),-1);
        return dp(questions,0,ch);
    }
};




