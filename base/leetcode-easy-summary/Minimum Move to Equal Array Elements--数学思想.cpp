
/* 
 *leetcode: 453
 *һ�ν�n-1��Ԫ�ؼ�1���ȼ��ڰ�ʣ���Ǹ�Ԫ�ؼ�1
 */

int minMoves(vector<int>& nums) {
       return accumulate(nums.begin(), nums.end(), 0L)-nums.size()* *min_element(nums.begin(), nums.end());
}