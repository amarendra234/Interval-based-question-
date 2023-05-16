class MyCalendar {
    map<int,int>m;
    set<pair<int,int>>st;
public:
    MyCalendar() {
       st.clear();
       st.insert({-1,-1});
       st.insert({INT_MAX,INT_MAX});
    }
    
    bool book(int start, int end) {
        end--;
        int left=start;
        int right=end;
         auto it=st.upper_bound({left,right});
         it--;
         if(it->second>=left){
             return false;
         }
         it++;
         while(it!=st.end() and right>=it->first){
                return false;
         }
         st.insert({left,right});
         return true;
         
    }
};