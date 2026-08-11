class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {   

        vector<pair<int,int>>cars;

        for(int i = 0; i < position.size(); i++) {
            cars.push_back({position[i],speed[i]});
        }

        sort(cars.begin(),cars.end(),greater<pair<int,int>>());

        stack<double>st;
        
        for(auto &car : cars) {
            double time = 0.0;
            time = (double)(target-car.first)/car.second;
            if(st.empty()) {
                st.push(time);
            }
            if(st.top()< time) {
                st.push(time);
            }

        }
        return st.size();
    }
};
