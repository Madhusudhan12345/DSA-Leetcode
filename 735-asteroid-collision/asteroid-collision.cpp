class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i = 0; i < asteroids.size(); i++) {
            int asteroid = asteroids[i];
            bool alive = true;

            while (!st.empty() && st.top() > 0 && asteroid < 0) {
                if (abs(st.top()) > abs(asteroid)) {
                    alive = false;
                    break;
                }
                else if (abs(st.top()) < abs(asteroid)) {
                    st.pop();
                }
                else {
                    st.pop();
                    alive = false;
                    break;
                }
            }

            if (alive) {
                st.push(asteroid);
            }
        }

        vector<int> result;

        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};