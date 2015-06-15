class Solution {
public:
  int hammingWeight(uint32_t n) {
    /*** practicing vector and template ***/
    uint32_t res = n;
    std::vector<uint32_t> ones;
    while (res >= 1) {
      ones.push_back(res%2);
      res = res/2;
    }
    return vectorSum(ones);
    
    template <class T>
      int vectorSum(vector<T> dat) {
      int summ = 0;
      for (int i = 0; i < dat.size(); i++) {
	summ += dat[i];
      }
      return summ;
    }
    /*** practicing vector and template end ***/
    /*** using an array ***/
    uint32_t res = n;
    int ones[32] = {0};
    int hamm = 0;
    while(res >= 1) {
      hamm += res%2;
      res = res/2;
    }
    return hamm;
    /*** using an array end ***/
  }
};
