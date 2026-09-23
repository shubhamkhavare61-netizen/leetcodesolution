class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int top = -1;

        for (int i = 0; i < asteroids.size(); i++) {
            int x = asteroids[i];

            if (x > 0) {
                asteroids[++top] = x;
            }
            else {
                bool alive = 1;

                while (top >= 0 && asteroids[top] > 0) {
                    if (asteroids[top] < -x) {
                        top--;
                    }
                    else if (asteroids[top] == -x) {
                        top--;
                        alive = 0;
                        break;
                    }
                    else {
                        alive = 0;
                        break;
                    }
                }

                if (alive) {
                    asteroids[++top] = x;
                }
            }
        }

        asteroids.resize(top + 1);
        return asteroids;
    }
};
