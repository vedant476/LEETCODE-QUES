class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {
        
        vector<int> v(2,0);

        for(int i=0; i<e.size(); i++){
            if(e[i] == "1" || e[i] == "2" || e[i] == "3" || e[i] == "4" || e[i] == "6" || e[i] == "0"){
                v[0] += stoi(e[i]);
            }
            else if(e[i] == "W"){
                v[1]++;
            }
            else if(e[i] == "WD" || e[i] == "NB"){
                v[0]++;
            }
            if(v[1] == 10){
                break;
            }
        }
        return v;        
    }
};